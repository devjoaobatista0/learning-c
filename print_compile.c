#include <stdio.h>
#include <stdarg.h>


char* format_string(const char* format, ...){
    va_list args;
    va_start(args, format);

    // initial estimated the size string
    size_t size = vsnprintf(NULL, 0, format, args) +1;
    va_end(args);

    // alloc memory for the formating string.
    char* formatted_string = (char*)malloc(size);
    
    if (formatted_string == NULL){
        return NULL;
    }

    va_start(args, format);
    vsnprintf(formatted_string, size, format, args);
    va_end(args);

    return formatted_string;
}


void print(const char *format, ...){
    va_list args;
    va_start(args, format);
    char * formatted_string = format_string(format, args);
    
    if (formatted_string != NULL){
        printf("%s\n", formatted_string); 
        free(formatted_string); // free the allocated memory

    }else{
        print("Failed to allocated memory for the formatted string. \n");
    }

    va_end(args);

}


int main()
{
    const char* name = "Alice";
    int age = 30;

    print("Hi, %s. You are %d years old.", name, age);
    print("Hello, World!\n");
    print("Number: %d\n", 42);
    print("Floating point number: %f\n", 3.14);
    console_log("Hello, World 2!");
    return 0;
}

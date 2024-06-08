#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#define Class struct  // everytime find "Class" replacement to "struct"

Class Person {
    char name[10];
    uint8_t age;  //caractere for 8 bits is equal 1 Byte.
    uint8_t height; 
    void(*show)(Class Person *);
};

void person_print(Class Person *self  /*person   */ ) {
    printf("Person: %s %d %d\n",
    //person->name, person->age, person->height);
    self->name, self->age, self->height);

}
//this function create a pointer 
Class Person *newPerson(char name[],
uint8_t age,
uint8_t height) {
    Class Person *self /*person*/ =
        (Class Person *)malloc(sizeof(Class Person));
    strcpy(self->name, name);
    self->age = age;
    self->height = height;

    self->show = &person_print;
    
    return self;
}
     
 
int main(){
    //storing the pointer in a variable
    Class Person *person2= (Class Person *) newPerson("Fabio", 43, 172);
    //the show method was configured with a pointer to person_print
    person2 -> show(person2);
    
    return 0;
}

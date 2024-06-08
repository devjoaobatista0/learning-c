#include <stdio.h>
#include <stdlib.h>

const char* ordinal_suffix(int number) {
    if (number % 100 >= 11 && number % 100 <= 13) {
        return "th";
    } else {
        switch (number % 10) {
            case 1: return "st";
            case 2: return "nd";
            case 3: return "rd";
            default: return "th";
        }
    }
}



int main()
{
    int numbers[3] = {0}; //initializing the array with 3 elements starting with number {0}
    int array_size = sizeof(numbers) / sizeof(numbers[0]); //getting the array size  (array_positions / first_element) 
    int sum = 0, mean = 0;

    printf("Type %d numbers: \n", array_size);
    
    for(int i = 0; i < array_size; i++) {
        printf("type the %d%s number\n", i+1, ordinal_suffix(i+1));
        scanf("%d", &numbers[i]);
        sum += numbers[i];

    }

    mean = sum / array_size;
  
    printf("Sum: %d\n", sum);
    printf("Mean: %d", mean);
    return 0;
}
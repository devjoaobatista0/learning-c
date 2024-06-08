#include <stdio.h>

int main()
{   
    int birth_year, birth_month;
    int current_year = 2024;
    int current_month = 5;
    int age_years, age_months;
    char name[50];

    
    printf("What's your name? ");
    scanf("%s", name);
    printf("what month were you born");
    scanf("%d", &birth_month);
    printf("what year were you born? ");
    scanf("%d", &birth_year);


    age_years = current_year - birth_year;
    age_months = current_month - birth_month;


    //Logic, cases the current month is earlier in the year than the birth month
    // my birth month is 11 the current month is 5 today.
    if (age_months < 0){ 
        age_years --;
        age_months +=12;
    }
        printf("%s is %d years old and %d months \n", name, age_years, age_months);


    return 0;
}

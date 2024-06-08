#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

struct Car {
    char name[20], color[20], brand[20];
    //char color[20];
    //char brand[20];
    int year;
    //the show's pointer point to a function than receive one pointer. 
    //void(*show)(struct Car *);
};

void car_print(struct Car *c ){
    printf("Car: %s %s %s %d\n",
    c->name, c->color, c->brand, c->year);
}

struct Car *newcar(char name[], char color[], char brand[], int year){
    struct Car *car = (struct Car *)malloc(sizeof(struct Car));

    strcpy(car-> name, name);
    strcpy(car->color, color);
    strcpy(car->brand, brand);
    car->year = year;

    //car->show = &car_print;
    return car;
}


int main()
{
    struct Car *car2 = newcar("Gol", "Black", "Volksvagen", 2022);
    struct Car *car3=newcar("Civic", "White", "Honda", 2024 );
    //car2->show(car2)
    car_print(car2);
    car_print(car3);
   
    return 0;
}

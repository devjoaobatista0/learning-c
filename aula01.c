#include <stdio.h>

//tipo        bits    representation
//char         8        -127 to 127
//int(short)   16       -32.768 to 32.767
//int(long)    32
//float        32       3,4*10^-38 to 3,4*10^38
//double       64       

int main()
{
    char name[50];
    int age;

    printf("What's your name ?\n");
    scanf("%s", name);
    printf("How old are you ?\n");
    scanf("%d", &age);
    printf("Your name is %s\nYou are %d years old", name, age);

    return 0;
}



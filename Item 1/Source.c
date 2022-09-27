#include <stdio.h>

//Taiyo Suzuki
//Sept 30, 2022
//PROG71985F22 - Assignment 2
//Item 1: Take an integer input and then print all the integers from (and including) that value
//up to (and including) a value larger by 11, separating each output value by a newline

//definitions
#define LARGERBYELEVEN 11

int main(void)
{
    int numInput;

    printf("Please enter an integer and press enter: ");    //prompt user for input

    scanf_s("%d", &numInput);                               //scan for and save integer input

    for (int i = 0; i <= LARGERBYELEVEN; i++)
    {
        printf("%d\n", numInput + i);                       //print output values
    }

    return 0;
}

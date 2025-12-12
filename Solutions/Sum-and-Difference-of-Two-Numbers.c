/*
Task
Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
Declare  variables: two of type int and two of type float.
Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
Use the  and  operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.

Sample Input
10 4
4.0 2.0

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);
    int sum1 = a + b;
    int sub1 = a - b;
    printf("%d %d\n", sum1, sub1);

    float c;
    float d;

    scanf("%f", &c);
    scanf("%f", &d);

    float sum2 = c+d;
    float sub2 = c-d;
    printf("%.1f %.1f\n", sum2, sub2);
    return 0;
}
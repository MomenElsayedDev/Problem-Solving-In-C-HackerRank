/*
In this challenge, you will learn to implement the basic functionalities of pointers in C. A pointer in C is a way to share a memory address among different contexts (primarily functions). They are primarily used whenever a function needs to modify the content of a variable that it does not own.

Task

Complete the function void update(int *a,int *b). 
It receives two integer pointers, int* a and int* b.
Set the value of  to their sum, and  to their absolute difference.
There is no return value, and no return statement is needed.
*/


#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) {
    int sum = *a + *b;           
    int diff = abs(*a - *b);     
    *a = sum;                     
    *b = diff;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

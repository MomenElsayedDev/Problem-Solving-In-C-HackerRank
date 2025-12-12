/*
This challenge will help you to learn how to take a character, a string and a sentence as input in C.

To take a single character  as input, you can use scanf("%c", &ch ); and printf("%c", ch) writes a character specified by the argument char to stdout

char ch;
scanf("%c", &ch);
printf("%c", ch);
This piece of code prints the character .

You can take a string as input in C using scanf(“%s”, s). But, it accepts string only until it finds the first space.

In order to take a line as input, you can use scanf("%[^\n]%*c", s); where  is defined as char s[MAX_LEN] where  is the maximum size of . Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.

Note: The statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character, \n, from the previous line. This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.

Task

You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    char ch;
    scanf("%c", &ch);
    char str[100];
    scanf("%s", str);
    scanf("\n"); 
    char sentence[100];
    scanf("%[^\n]%*c", sentence); 
    printf("%c\n",ch);  
    printf("%s\n",str);  
    printf("%s\n",sentence);  
    return 0;
}

/*
Sample Input 0
C
Language
Welcome To C!!
*/
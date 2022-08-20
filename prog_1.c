
/*Write a program to calculate the length of the string*/
#include <stdio.h>

int main()
{
    char str[100];
    int i;
    printf("Enter the input string: ");
    fgets(str, 100, stdin);
    
    for(i=0; str[i]; i++);
    printf("length of string is: %d", i);

    return 0;
}

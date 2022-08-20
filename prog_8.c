/*Write a program in C to copy one string to another string*/

#include <stdio.h>

int main()
{
    int length=100, i;
    
    char str1[length];
    char str2[length];
    
    printf("Enter the input string: ");
    fgets(str1, length, stdin);
    
    for(i=0; i<length; i++)
        str2[i] = str1[i];
    
    printf("copied string is str2: %s", str2);
    
    return 0;
}

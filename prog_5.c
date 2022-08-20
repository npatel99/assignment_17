/*Write a program to convert a given string into lower
input: Narendra
output: NARENDRA*/

#include <stdio.h>

int main()
{
    char str[100];
    int i;
    
    printf("Enter the input string: ");
    fgets(str, 100, stdin);
    
    for(i=0; str[i]; i++)
    {
        if(str[i]>='A' && str[i]<='Z')//to check Capital letter
            str[i] = str[i]+32;
    }
    
    printf("String in Lower case: %s", str);
    
    return 0;
}

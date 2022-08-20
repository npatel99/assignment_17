/*Write a program to reverse a string
input: Narendra
output: ardneraN*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, temp;
    
    printf("Enter the input string: ");
    fgets(str, 100, stdin);
    
    for(i=0; str[i]; i++);
    j = i-1;
    
    i=0;
    while(i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    
    printf("reverse string is: %s", str);
    
    return 0;
}

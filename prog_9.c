/*Write a C program to sort a string array in ascending order*/

#include <stdio.h>

int main()
{
    char str[100], temp;
    int len, i, j;
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    
    for(len=0; str[len]; len++);
    
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(str[i]>str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    
    printf("sorted string is: %s", str);
    
    return 0;
}

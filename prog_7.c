/*Write a program in C to count the total number of alphabets, digits and special characters in a string.*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, countAlpha=0, countDigit=0, countSpcl=0;
    
    printf("Enter the input string: ");
    fgets(str, 100, stdin);
    
    for(i=0; str[i]; i++)
    {
        if((str[i]>='a'&&str[i]<='z') || str[i]>='A'&&str[i]<='Z')
            countAlpha++;
            
        else if(str[i]>='0' && str[i]<='9')
            countDigit++;
            
        else
            countSpcl++;
        
    }
    
    printf("number of alphabate = %d, digits = %d and special char is = %d", countAlpha, countDigit, countSpcl);
    
    return 0;
}

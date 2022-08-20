/*Write a program to count vowels in a given string
vowels:: a, e, i, o, u, A, E, I ,O, U
input: narendra
output: 3*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, count=0;
    printf("Enter the input string: ");
    fgets(str, 100, stdin);
    
    
    for(i=0; str[i]; i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||
        str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
            count++;
    }
    printf("number of vowels is: %d", count);

    return 0;
}

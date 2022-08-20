/*Write a program to count the occurrence of a given character in a given string
input string : Narendra
input char   : a
output: 2
*/

#include <stdio.h>

int main()
{
    char str[100], search;
    int i, count=0;
    printf("Enter the input string: ");
    fgets(str, 100, stdin);
    
    printf("Enter alphabate to search: ");
    scanf("%c", &search);
    
    for(i=0; str[i]; i++)
    {
        if(str[i]==search)
            count++;
    }
    printf("Occurance of %c in %s is : %d", search, str, count);

    return 0;
}

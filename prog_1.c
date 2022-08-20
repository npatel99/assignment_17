
/*Write a program to calculate the length of the string
  1.input: NARENDRA
    output: 8
  2.input: Narendra Patel
    output: 14
    
  note:: also count the space
  */
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

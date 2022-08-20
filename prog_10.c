/*Write a program in C to Find the Frequency of Characters*/

#include <stdio.h>

void printFrequency(int freq[])
{
    for (int i = 0; i < 26; i++) 
    {
        if (freq[i] != 0) 
        {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }
}
  
void findFrequncy(char str[])
{
    int i = 0;
    int freq[26] = { 0 };
  
    while (str[i] != '\0') 
    {
        freq[str[i] - 'a']++;
        i++;
    }
    printFrequency(freq);
}
  
int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    
    findFrequncy(str);
}

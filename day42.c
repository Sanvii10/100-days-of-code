/*Q83: Count vowels and consonants in a string.


Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
int vowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return 1;
    }
    return 0;
}

int consonant(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char str[100];
    int vowels = 0;
    int consonants = 0;

    printf("Enter a string= ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
   {
        if (vowel(str[i]))
        {
            vowels++;
        }
        else if (consonant(str[i]))
        {
            consonants++;
        }
    }

    printf("Vowel(s)= %d \nConsonant(s)= %d", vowels, consonants);
    return 0;
}
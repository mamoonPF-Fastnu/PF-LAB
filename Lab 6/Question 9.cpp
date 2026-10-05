#include <stdio.h>

int main()
{
    char word[100], reverse[100];
    int i, length = 0;
    int vowels = 0, consonants = 0;
    int palindrome = 1;

    printf("Enter a word: ");
    scanf("%s", word);

    
    printf("Original word: %s\n", word);

    // Length without strlen()
    while(word[length] != '\0')
    {
        length++;
    }

    printf("Length = %d\n", length);

   
    for(i = 0; i < length; i++)
    {
        reverse[i] = word[length - 1 - i];
    }

    reverse[length] = '\0';

    printf("Reversed word: %s\n", reverse);

    
    for(i = 0; i < length; i++)
    {
        if(word[i] != reverse[i])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    // Count vowels and consonants
    for(i = 0; i < length; i++)
    {
        if((word[i] >= 'A' && word[i] <= 'Z') ||
           (word[i] >= 'a' && word[i] <= 'z'))
        {
            if(word[i]=='a' || word[i]=='e' || word[i]=='i' ||
               word[i]=='o' || word[i]=='u' ||
               word[i]=='A' || word[i]=='E' || word[i]=='I' ||
               word[i]=='O' || word[i]=='U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}

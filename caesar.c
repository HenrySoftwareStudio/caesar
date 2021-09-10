#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int argvToInt = atoi(argv[1]);
    if (argc > 2)
    {
        printf("Usage: ./caesar key\n");
    }

    if (strlen(argv[1]) == 0)
    {
        printf("Usage: ./caesar key\n");
    }

    int failureCounter = 0;

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isalpha(argv[1][i]) || ispunct(argv[1][i]))
        {
            failureCounter++;
        }
    }

    if (failureCounter > 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string plaintext = get_string("plaintext: ");

    char ciphertext[strlen(plaintext)];

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isupper(plaintext[i]))
        {
            int currentLetter = (int) plaintext[i];
            int newLetter = 0;
            
            newLetter = (currentLetter + newLetter) % 26;

            ciphertext[i] = (char) newLetter;
        }
        else if (islower(plaintext[i]))
        {
            int currentLetter = (int) plaintext[i];
            int newLetter = 0;
            
            newLetter = (currentLetter + newLetter) % 26;

            ciphertext[i] = (char) newLetter;
        }
        else if (plaintext[i] == ' ')
        {
            ciphertext[i] = ' ';
        }
    }

    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        printf("%c", ciphertext[i]);
    }
    printf("\n");
    return 0;
}
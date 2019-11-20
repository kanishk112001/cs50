#include <cs50.h>
#include <stdio.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    int flag = 1;
    if (argc == 2)
    {
        // Checks if the argument is completely numeric
        for (int i = 0; argv[1][i] != '\0'; i++)
        {
            if (argv[1][i] < 48 || argv[1][i] > 57)
            {
                flag = 0;
                break;
            } 
        }    
        if (flag == 1)
        {
            // Converts string arguments to int type
            int k = atoi(argv[1]);
            string s = get_string("plaintext: ");
            for (int i = 0; s[i] != '\0'; i++)
            {
                // Rotates the character by k, preserving the uppercase
                if (isupper(s[i]))
                {
                    s[i] = (((s[i] - 65) + k) % 26) + 65;        
                }
                // Rotates the character by k, preserving the lowercase
                else if (islower(s[i]))
                {
                    s[i] = (((s[i] - 97) + k) % 26) + 97;        
                }
            }
            // Prints ciphertext
            printf("ciphertext: %s\n", s);
            return 0;
        }   
       
        else 
        {
            printf("Usage: ./caesar key\n");
            return 1;    
        }
    }
    else 
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

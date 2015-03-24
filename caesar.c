#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (int argc, string argv[])
{    
    //checks for the user cmd prompt input//    
    if (argc != 2 || argv[1] < 0)
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }
    
    else
    {
        int k = atoi(argv[1]); 
       
        //prompts the user for the message
        string s = GetString();       
        
        //makes sure the rotation "circles" around//
        k = k%26; 
                 
        for (int i = 0, n=strlen(s); i < n; i++)
        { 
            /*if (s[i] ==' ')
            {
                printf(" ");
            }          
             */ 
            if (isalpha(s[i]))           
            {
                if(isupper(s[i]))
                {
                    //minus the 65 for capital, intiate encryption then %26 to make sure does not go over
                    //then add back the 65 shift
                    printf("%c", (s[i]-65+k)%26+65);
                }
                else if(islower(s[i])) 
                {
                    printf("%c", (s[i]-97+k)%26+97);
                }
            }
            else
            {
                printf("%C", s[i]);
            }                       
        }                 
        printf("\n");     
        return 0;
    }
}



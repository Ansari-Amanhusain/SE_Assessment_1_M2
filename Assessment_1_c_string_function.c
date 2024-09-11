/*Create an application that can perform all string related operations
reverse a string
1 Concatenation
2 Palindrome
3 Copy a string
4 Length of the string
5 Frequency of character in s string
6 Find number of vowels and consonants
7 Find number of blank spaces and digits 
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<stdlib.h>

main() 
{
    int choice, i, j, len, count = 0;
    char c, str1[30], str2[30], str[60];
    int vowels = 0, consonants = 0, spaces = 0, digits = 0;
    do {
        printf("\n\n\t-----------------Main Menu----------------------------");
        printf("\n\n\t1. Concatenation");
        printf("\n\n\t2. Palindrome");
        printf("\n\n\t3. Copy a String");
        printf("\n\n\t4. Length of the String");
        printf("\n\n\t5. Frequency of character in a string");
        printf("\n\n\t6. Find number of vowels and consonants");
        printf("\n\n\t7. Find number of blank spaces and digits ");
        printf("\n\n\t8. Exit");
        printf("\n\n\t------------------------------------------------------");
        
        printf("\n\n\tPlease Enter the choice From above menu  :");
        scanf("%d", &choice);
        while (getchar() != '\n');

        switch (choice) 
		{
           case 1:
                printf("\n\n\tEnter the First String :");
	            gets(str1);
	            len = strlen(str1);
                if (len > 0 && str1[len - 1] == '\n') 
                    str1[len - 1] = '\0';
	            printf("\n\n\tEnter the Second String :");
	            gets(str2);
	            len = strlen(str2);
                if (len > 0 && str2[len - 1] == '\n') 
                    str2[len - 1] = '\0';
	
	            for (i = 0; str1[i] != '\0'; i++)
                    str[i] = str1[i];

                for (j = 0; str2[j] != '\0'; j++) 
                    str[i + j] = str2[j];
	            printf("\n\n\tConcatenated String: %s\n", str);
                break;

            case 2:
                printf("\n\n\tEnter the Value of String : ");
                gets(str1);

                for (i = 0; str1[i] != '\0'; i++) 
				{
                    if (str1[i] == '\n') 
					{
                        str1[i] = '\0';
                        break;
                    }
                }
                len = 0;
                while (str1[len] != '\0') len++; 
				for (i = 0; i < len; i++) 
				{
                    str2[i] = str1[len - i - 1];
                }
                str2[len] = '\0'; 
                printf("\n\n\tReversed String: %s", str2);
                int is_palindrome = 1;
                for (i = 0; i < len; i++) 
				{
                    if (str1[i] != str2[i]) 
					{
                        is_palindrome = 0;
                        break;
                    }
                }
                if (is_palindrome) 
				{
                    printf("\n\n\t%s is a palindrome.", str1);
                } else {
                    printf("\n\n\t%s is not a palindrome.", str1);
                }
                break;

            case 3:
               printf("\n\n\tEnter the Value of String : ");
               gets(str1);
	
	            len=strlen(str1);
	
	            for(i=0;i<len;i++)
	                    str2[i] = str1[i];
                printf("\n\n\tString 1        : %s", str1);
                printf("\n\n\tString 2        : %s", str2);
                break;

            case 4:
                printf("\n\n\tEnter the String Value  : ");
                gets(str1);
                for (i = 0; str1[i] != '\0'; i++) 
				{
                    if (str1[i] == '\n') 
					{
                        str1[i] = '\0';
                        break;
                    }
                }
                count = 0;
                while (str1[count] != '\0') count++;

                printf("\n\n\tString     : %s", str1);
                printf("\n\n\tLength is  : %d", count);
                break;

            case 5:
                printf("\n\n\tEnter the String Value  : ");
                gets(str1);
                printf("\n\n\tEnter the character to find its frequency: ");
                scanf(" %c", &c);
                for (i = 0; str1[i] != '\0'; i++) 
				{
                    if (str1[i] == '\n') 
					{
                        str1[i] = '\0';
                        break;
                    }
                }
                count = 0;
                i = 0;
                while (str1[i] != '\0') 
				{
                    if (str1[i] == c) 
					{
                        count++;
                    }
                    i++;
                }
                printf("\n\n\tFrequency of '%c' in the string is: %d", c, count);
                break;

            case 6:
                	printf("\n\n\tEnter the Value of String : ");
	                gets(str1);//input string
	
	                len=strlen(str1);
	
	                for(i=0;i<len;i++)
	                {
		                if(tolower(str1[i])=='a' || tolower(str1[i])=='e' || tolower(str1[i])=='i' || tolower(str1[i])=='o' || tolower(str1[i])=='u')
		                        vowels++;
		                else if(isalpha(str1[i]))
			                    consonants++;
                	}
	
	                printf("\n\n\t---------------------------------------------------------------------");
	                printf("\n\n\tUser Enter the String is       : %s",str1);
	                printf("\n\n\tTotal No. of Vowel is          : %d",vowels);
	                printf("\n\n\tTotal No. of consonant is      : %d",consonants);
                    break;

            case 7:
                printf("\n\n\tEnter the String Value  : ");
                gets(str1);
                for (i = 0; str1[i] != '\0'; i++) 
				{
                    if (str1[i] == '\n') 
					{
                        str1[i] = '\0';
                        break;
                    }
                }
                i = 0;
                while (str1[i] != '\0') 
				{
                    if (str1[i] == ' ') 
					{
                        spaces++;
                    } else if (isdigit(str1[i])) 
					{
                        digits++;
                    }
                    i++;
                }
    
                printf("\n\n\tNumber of blank spaces: %d", spaces);
                printf("\n\n\tNumber of digits       : %d", digits);
                break;
            case 8: exit(0);
            	break;
            default:
                printf("\n\n\tInvalid choice. Please try again.");
                printf("\n\n\t------------------------------------------------------");
                break;
        }

        printf("\n\n\tDo you want to continue (press y or n) : ");
        scanf(" %c", &c);

    } while (c == 'y' || c == 'Y');
}


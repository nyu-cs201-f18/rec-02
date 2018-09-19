/*
Author: Omkar Damle
This is an exercise to understand the differences between scanf, gets and fgets which are the standard input functions in the C language.
*/

#include <stdio.h>

int main()
{

    /*Observe the difference between the strings read by scanf and gets when a whitespace is present. Read the documentation to understand which other characters cause a similar behavior*/
    char str1[50];
    printf("Enter a sentence with whitespaces\n");
    gets(str1);
    printf("You entered: %s\n",str1);

    char str2[50];
    printf("Enter another sentence with whitespaces\n");
    scanf("%s",str2);
    printf("You entered: %s\n",str2);

    //clear the input buffer
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }


    /*Observe the difference between the strings read by scanf, gets and fgets when the length exceeds the buffer size*/
    char str5[5];
    int maxSize = 5;    //includes the null character
    printf("Enter a word with length greater than 5\n");
    fgets(str5, maxSize, stdin);
    printf("You entered: %s\n",str5);

    //clear the input buffer
    while ((c = getchar()) != '\n' && c != EOF) { }

    /*
    Try the following two snippets (Sometimes you need to enter a word which has a length sufficiently greater than the buffer size. Hence, if the program does not throw an error try with a word which is even larger in size)- What is the error which is shown?
    Can you understand why it is happening with respect to the program stack?
    */

    /*
    char str3[5];
    printf("Enter a word with a length greater than 5\n");
    gets(str3);
    printf("You entered: %s\n",str3);

    char str4[5];
    printf("Enter another word with a length greater than 5\n");
    scanf("%s",str4);
    printf("You entered: %s\n",str4);
    */    

    return 0;
}

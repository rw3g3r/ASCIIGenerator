/*Takes user input and converts it to ASCII Art*/

#include <stdio.h>
#include <string.h>
#include "asciiAlphabet.h"

int main(void)
{
    char input[100];
    printf("Please enter the text you wish to turn to ASCII: ");
    scanf("%[^\n]s", input);
    printASCII(input);
    return 0;
}

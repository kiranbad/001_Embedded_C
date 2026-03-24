/*4. Variadic String Concatenation Challenge

Description
Write a C program to concatenate a variable number of strings passed as arguments to a function using variadic functions.

Key Concept: Use stdarg.h with const char* arguments; copy and concatenate each string into a buffer.

Sample Input & Output
Function call:
concat_strings(3, "BitLearn", ".", "Bitsilica")
Output:
Concatenate said strings: BitLearn.Bitsilica

Explanation
The first argument is the count of strings, followed by the strings to concatenate. All are joined in order.*/
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void concat_strings(int count, ...)
{
    char result[200] = "";
    const char *str;

    va_list args;
    va_start(args, count);

    for(int i = 0; i < count; i++)
    {
        str = va_arg(args, const char *);
        strcat(result, str);
    }

    va_end(args);

    printf("Concatenated string: %s\n", result);
}

int main()
{
    concat_strings(3, "BitLearn", ".", "Bitsilica");
    return 0;
}
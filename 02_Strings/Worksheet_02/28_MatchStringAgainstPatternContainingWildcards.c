/*Match a string against a pattern containing wildcards '*' (any sequence) and '?' (single character).
Input: Pattern = "g*ks", String = "geeks"
Output: Match*/
#include <stdio.h>
#include <string.h>

int match(char pattern[], char str[], int p, int s) {
    if (pattern[p] == '\0' && str[s] == '\0')
        return 1;

    if (pattern[p] == '*') {
        if (match(pattern, str, p + 1, s))
            return 1;
        if (str[s] != '\0' && match(pattern, str, p, s + 1))
            return 1;
        return 0;
    }

    if (pattern[p] == '?' || pattern[p] == str[s]) {
        if (str[s] != '\0')
            return match(pattern, str, p + 1, s + 1);
    }

    return 0;
}

int main() {
    char pattern[100], str[100];

    printf("Enter pattern: ");
    scanf("%s", pattern);

    printf("Enter string: ");
    scanf("%s", str);

    if (match(pattern, str, 0, 0))
        printf("Match\n");
    else
        printf("No Match\n");

    return 0;
}
/*Implement naive pattern searching to find all occurrences of a pattern in a text.
Input: Text = "hello world", Pattern = "lo"
Output: Pattern found at index 3
Implement Rabin-Karp algorithm using hashing to find patterns in a text efficiently.
Input: Text = "abcxabcdabcdabcy", Pattern = "abcdabcy"
Output: Pattern found at index 8*/
#include <stdio.h>
#include <string.h>

void naiveSearch(char text[], char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);
    int i, j, found = 0;

    for (i = 0; i <= n - m; i++) {
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == m) {
            printf("Pattern found at index %d\n", i);
            found = 1;
        }
    }

    if (!found)
        printf("Pattern not found\n");
}

int main() {
    char text[100], pattern[100];

    printf("Enter text: ");
    gets(text);

    printf("Enter pattern: ");
    gets(pattern);

    naiveSearch(text, pattern);

    return 0;
}
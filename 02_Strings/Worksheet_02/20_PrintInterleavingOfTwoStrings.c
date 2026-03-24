/*Print all possible interleavings of two strings, preserving the relative order of characters in each string.
Input: str1 = "AB", str2 = "CD"
Output: "ABCD", "ACBD", "ACDB", "CABD", "CADB", "CDAB" */

#include <stdio.h>
#include <string.h>

void interleave(char s1[], char s2[], char result[], int i, int j, int k) {
    if (s1[i] == '\0' && s2[j] == '\0') {
        result[k] = '\0';
        printf("%s\n", result);
        return;
    }

    if (s1[i] != '\0') {
        result[k] = s1[i];
        interleave(s1, s2, result, i + 1, j, k + 1);
    }

    if (s2[j] != '\0') {
        result[k] = s2[j];
        interleave(s1, s2, result, i, j + 1, k + 1);
    }
}

int main() {
    char s1[50], s2[50], result[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    printf("Interleavings are:\n");
    interleave(s1, s2, result, 0, 0, 0);

    return 0;
}
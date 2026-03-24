/*Check if a string is an interleaving of two other strings, i.e., formed by merging them maintaining order.
Input: s1 = "abc", s2 = "def", s3 = "adbcef"
Output: True*/
#include <stdio.h>
#include <string.h>

int isInterleaving(char s1[], char s2[], char s3[]) {
    int i = 0, j = 0, k = 0;

    while (s3[k] != '\0') {
        if (s1[i] == s3[k]) {
            i++;
        } else if (s2[j] == s3[k]) {
            j++;
        } else {
            return 0;
        }
        k++;
    }

    if (s1[i] == '\0' && s2[j] == '\0')
        return 1;
    else
        return 0;
}

int main() {
    char s1[50], s2[50], s3[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    printf("Enter third string: ");
    scanf("%s", s3);

    if (isInterleaving(s1, s2, s3))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
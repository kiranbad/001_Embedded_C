/*Use dynamic programming to check if a string is an interleaving of two other strings.
Input: s1 = "abc", s2 = "def", s3 = "adbcef"
Output: True*/
#include <stdio.h>
#include <string.h>

int isInterleavingDP(char s1[], char s2[], char s3[]) {
    int m = strlen(s1);
    int n = strlen(s2);

    if (m + n != strlen(s3))
        return 0;

    int dp[m + 1][n + 1];
    int i, j;

    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {

            if (i == 0 && j == 0)
                dp[i][j] = 1;

            else if (i == 0)
                dp[i][j] = (s2[j - 1] == s3[j - 1]) ? dp[i][j - 1] : 0;

            else if (j == 0)
                dp[i][j] = (s1[i - 1] == s3[i - 1]) ? dp[i - 1][j] : 0;

            else if (s1[i - 1] == s3[i + j - 1] && s2[j - 1] != s3[i + j - 1])
                dp[i][j] = dp[i - 1][j];

            else if (s1[i - 1] != s3[i + j - 1] && s2[j - 1] == s3[i + j - 1])
                dp[i][j] = dp[i][j - 1];

            else if (s1[i - 1] == s3[i + j - 1] && s2[j - 1] == s3[i + j - 1])
                dp[i][j] = dp[i - 1][j] || dp[i][j - 1];

            else
                dp[i][j] = 0;
        }
    }

    return dp[m][n];
}

int main() {
    char s1[50], s2[50], s3[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    printf("Enter third string: ");
    scanf("%s", s3);

    if (isInterleavingDP(s1, s2, s3))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
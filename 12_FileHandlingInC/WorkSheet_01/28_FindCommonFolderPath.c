/*28. Find the common folder path among a group of file paths.
Input: /home/user/docs/a.txt, /home/user/docs/b.txt, /home/user/docs/old/c.txt
Output: /home/user/docs*/
#include <stdio.h>
#include <string.h>

#define MAX 256
#define FILES 3

int main() {
    char *paths[FILES] = {
        "/home/user/docs/a.txt",
        "/home/user/docs/b.txt",
        "/home/user/docs/old/c.txt"
    };

    char common[MAX];
    strcpy(common, paths[0]); // start with the first path

    for (int i = 1; i < FILES; i++) {
        int j = 0;
        while (common[j] && paths[i][j] && common[j] == paths[i][j]) {
            j++;
        }
        common[j] = '\0'; // truncate at the first mismatch
    }

    // Remove partial filename to get folder path
    for (int i = strlen(common) - 1; i >= 0; i--) {
        if (common[i] == '/') {
            common[i] = '\0';
            break;
        }
    }

    printf("Common folder path: %s\n", common);

    return 0;
}
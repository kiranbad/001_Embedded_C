/*27. Show the last modification date and time of a file.
Input: File name: a.txt
Output: Last modified: Sat Nov 26 17:32:15 2022*/
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main() {
    struct stat fileStat;
    char filename[] = "a.txt";

    if (stat(filename, &fileStat) != 0) {
        perror("Unable to get file info");
        return 1;
    }

    // Convert last modification time to readable format
    printf("Last modified: %s", ctime(&fileStat.st_mtime));

    return 0;
}
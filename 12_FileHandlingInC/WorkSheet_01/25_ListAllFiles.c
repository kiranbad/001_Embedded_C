/*25. List all the files found inside a directory (folder).
Input: Directory: myfolder/
Output: file1.txt, file2.txt, notes.doc*/
#include <stdio.h>
#include <dirent.h>

int main() {
    char dirname[] = "/mnt/d/001_Embedded_C/12_FileHandlingInC/WorkSheet_01";
    struct dirent *entry;
    DIR *dp = opendir(dirname);

    if (dp == NULL) {
        perror("Unable to open directory");
        return 1;
    }

    printf("Files in directory %s:\n", dirname);
    while ((entry = readdir(dp)) != NULL) {
        // skip "." and ".."
        if (entry->d_type == DT_REG) { // regular files only
            printf("%s\n", entry->d_name);
        }
    }

    closedir(dp);
    return 0;
}
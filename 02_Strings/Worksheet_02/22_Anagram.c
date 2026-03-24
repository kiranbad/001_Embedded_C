/* Check if two strings are anagrams of each other by comparing character counts.
Input: "listen", "silent"
Output: True1*/
#include<stdio.h>
#include<string.h>
int is_anagram(char *str1,char *str2)
{
    if(strlen(str1)!=strlen(str2)){
        return 0;
    }
    
    int freq[256]={0};
    for(int i=0; str1[i]!='\0'; i++)
    {
        freq[str1[i]]++;
    }

    for(int i=0; str2[i]!='\0'; i++)
    {
        freq[str2[i]]--;
    }

    for(int i=0; i<256; i++)
    {
        if(freq[i]!=0)
        return 0;
    }
    return 1;
}
int main()
{
    char str1[30],str2[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str1);
    printf("Enter the string 2:");
    scanf("%s",str2);
    if(is_anagram(str1,str2))
    {
        printf("True");
    }
    else{
        printf("False");
    }

}
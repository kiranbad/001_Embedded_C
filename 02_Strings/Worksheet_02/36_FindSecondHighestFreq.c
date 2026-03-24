/*. Find the character with the second highest frequency in a string.
Input: "aabababa"
Output: 'b'*/
#include<stdio.h>
#include<string.h>
int find_second_highest_frequency(char *str)
{
    int freq[256]={0};
    int max=0,second=0;
    char ch;
    for(int i=0; str[i]!='\0'; i++)
    {
        freq[str[i]]++;
    }

    for(int i=0; i<256; i++)
    {
        if(freq[i]>max)
        max=freq[i];
    }

    for(int i=0; i<256; i++)
    {
        if(freq[i]>second && freq[i]<max)
        {
            second =freq[i];
            ch=i;
        }
    }
    printf("Second highest frequency character: %c\n",ch);

}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);   
    find_second_highest_frequency(str);
}
/*Count frequency of each character in a string
Input: "success"
Output:
s = 3
u = 1
c = 2
e = 1*/
#include<stdio.h>
#include<string.h>
void count_frequency_of_each_char(char *str)
{
    int freq[256]={0};
    for(int i=0; str[i]!='\0'; i++)
    {
        freq[str[i]]++;
    }

    for(int i=0; str[i]!='\0'; i++)
    {
        if(freq[str[i]]!=0)
        {
            printf("%c = %d\n",str[i],freq[str[i]]);
            freq[str[i]]=0;
        }
    }


}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    
    count_frequency_of_each_char(str);
}
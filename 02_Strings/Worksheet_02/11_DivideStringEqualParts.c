/* Divide a string into N equal parts and print each part separately.
Input: "abcdefgh", N=4
Output: "ab", "cd", "ef", "gh"*/
#include<stdio.h>
#include<string.h>
void divide_string(char *str,int n)
{
    int len=strlen(str);
    if(len%n!=0){
    printf("String can't divide ");
    }

    int part=len/n;
    for(int i=0; str[i]!='\0'; i+=part)
    {
        printf("%.*s\n",part,str+i);
    }


}
int main()
{
    char str[30];
    int n;
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    printf("Enter how many parts to divide: ");
    scanf("%d",&n);
    divide_string(str,n);

}
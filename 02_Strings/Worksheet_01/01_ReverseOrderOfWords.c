/*Program: Reverse order of words in a given string
          Input: "hello world from C"
         Output: "C from world hello"*/
#include<stdio.h>
#include<string.h>
void reverse_string(char *str,int start,int end)
{
    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    reverse_string(str,0,strlen(str)-1);
     int start=0,end=0;
    for(int i=0; str[i]; i++)
    {
        
        if(str[i]==' ' || str[i+1]=='\0')
        {
            if(str[i]==' ')
            end=i-1;
            else
            end=i;
            reverse_string(str,start,end); 
            start=i+1;     
        }
        //end++;
    }
    printf("%s",str);

}
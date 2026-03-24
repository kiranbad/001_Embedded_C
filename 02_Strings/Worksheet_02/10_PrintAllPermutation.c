/*Print all permutations of a given string. All possible arrangements of characters should be printed.
Input: "ABC"
Output: "ABC", "ACB", "BAC", "BCA", "CAB", "CBA*/
#include<stdio.h>
#include<string.h>
void printPermutation(char *str)
{
    int n=strlen(str);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                if(i!=j && j!=k && k!=i)
                {
                    printf("%c%c%c\n",str[i],str[j],str[k]);
                }
            }
        }
    }
}
int main()
{
    char str[30];
    printf("Enter the String : ");
    scanf("%[^\n]",str);
    printPermutation(str);
}
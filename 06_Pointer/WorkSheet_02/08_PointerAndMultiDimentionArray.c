/*8. Pointer and Multi-Dimensional Arrays
Goal: Access and manipulate elements of multi-dimensional arrays using pointers and pointer arithmetic.
Activity:
1. Declare a 2D array.
2. Use pointers to iterate through rows and columns.
3. Implement operations such as matrix transpose or addition using pointer arithmetic only.
4. Pass multi-dimensional arrays as pointers to functions and manipulate elements*/

#include<stdio.h>
#include<stdlib.h>
void transpose_matrix(int row, int col, int arr[row][col], int transpose[col][row])
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
}
int main()
{
    int row,col;
    printf("Enter the rows and col: ");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    int transpose[col][row];
    printf("Enter the array elements: ");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    transpose_matrix(row,col,arr,transpose);
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

}
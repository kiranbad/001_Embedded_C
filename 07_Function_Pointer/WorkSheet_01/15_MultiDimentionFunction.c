/*15. Multi-dimensional Function Pointer Array
Define arithmetic functions for both int and float types (e.g., intAdd, floatAdd).
Organize the function pointers in a two-dimensional array:
First dimension: operation type (arithmetic, bitwise)
Second dimension: data type (int, float)
Demonstrate calling the correct function based on selected type and operation.*/
#include <stdio.h>

/* Arithmetic functions */
void intAdd()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    printf("Result = %d\n",a+b);
}

void floatAdd()
{
    float a,b;
    printf("Enter two floats: ");
    scanf("%f %f",&a,&b);
    printf("Result = %.2f\n",a+b);
}

/* Bitwise function */
void intBitwiseAnd()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    printf("Result = %d\n",a & b);
}

/* Dummy function for unsupported case */
void notSupported()
{
    printf("Operation not supported for this data type\n");
}

int main()
{
    int operation,type;

    /* 2D function pointer array */
    void (*func[2][2])() =
    {
        {intAdd, floatAdd},          // Arithmetic
        {intBitwiseAnd, notSupported} // Bitwise
    };

    printf("Select Operation\n");
    printf("1.Arithmetic\n2.Bitwise\n");
    scanf("%d",&operation);

    printf("Select Data Type\n");
    printf("1.Int\n2.Float\n");
    scanf("%d",&type);

    if(operation>=1 && operation<=2 && type>=1 && type<=2)
    {
        func[operation-1][type-1]();
    }
    else
    {
        printf("Invalid selection\n");
    }

    return 0;
}
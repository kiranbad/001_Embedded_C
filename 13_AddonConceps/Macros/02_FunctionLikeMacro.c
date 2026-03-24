/*Function-like Macros: Behave like inline functions and can accept arguments.
#define SQUARE(x) ((x)*(x))
*/
#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main() {
    printf("Square of 5: %d\n", SQUARE(5));
    printf("Square of 2+3: %d\n", SQUARE(2+3)); // Watch out for operator precedence!
    return 0;
}
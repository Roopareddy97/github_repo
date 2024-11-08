#include <stdio.h>

biggest3()
{
    int c = 10, b = 22, a = 9;

    // Finding largest by comparing using relational operators
    if (a >= b) {
        if (a >= c)
            printf("%d is the largest number.\n", a);
        else
            printf("%d is the largest number.\n", c);
    }
    else {
        if (b >= c)
            printf("%d is the largest number.\n", b);
        else
            printf("%d is the largest number.\n", c);
    }

 //   return 0;
}

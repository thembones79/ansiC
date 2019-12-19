#include <stdio.h>

int main()
{

    double x;

    for (x = 0; getchar() != EOF; ++x)
        ;
    printf("%.0f\n", x);
    return 0;
}

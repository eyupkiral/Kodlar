#include <stdio.h>

int main(void)
{
    double x = 3.176;
    float y = 3.13f;
    int z = 10;
    char m = 'a';

    printf("1. x = %f, y = %f\n", x, y);
    printf("2. x = %e, y = %E\n", x, y);
    printf("3. x = %8.2f, y = %8.2f\n", x, y);
    printf("4. x = %+.2f, y = %+.3f\n", x, y);
    printf("5. z = %d, m = %d, m = %c\n", z, m, m);
    printf("6. z = %x, z = %X, z = %o\n", z, z, z);
    printf("7. z = %010d\n", z);
    return 0;
}
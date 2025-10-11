#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int temp;
    temp = a;
    a = b;
    b = temp; // Swapping values using a temporary variable
    printf("After swapping by variable : a = %d, b = %d\n", a, b);

    int x, y;
    scanf("%d %d", &x, &y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y; // Swapping values using XOR bitwise operation
    printf("After swapping by bitwise : x = %d, y = %d\n", x, y);

    int p, q;
    scanf("%d %d", &p, &q);
    p = p + q;
    q = p - q;
    p = p - q; // Swapping values using arithmetic operations
    printf("After swapping by arithmetic : p = %d, q = %d\n", p, q);
    return 0;
}
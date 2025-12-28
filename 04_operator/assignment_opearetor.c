#include <stdio.h>
int main()
{
    int a = 10;
    // ⭐ Add and assign
    a += 10;                   // a = a + 10
    printf("a+10 = %d \n", a); // Output: 20
    // ⭐ Subtract and assign
    a -= 10;                   // a = a - 10
    printf("a-10 = %d \n", a); // Output: 10
    // ⭐ Multiply and assign
    a *= 10;                   // a = a * 10
    printf("a*10 = %d \n", a); // Output: 100
    // ⭐ Divide and assign
    a /= 10;                   // a = a / 10
    printf("a/10 = %d \n", a); // Output: 10
    // ⭐ Modulus and assign
    a %= 10;                         // a = a % 10
    printf("a%c10 = %d \n", '%', a); // Output: 0
    return 0;
}

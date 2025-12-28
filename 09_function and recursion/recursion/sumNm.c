#include <stdio.h> // Sum of N Numbers Recurtion:
int sum(int n);
int main()
{
    printf("the sum of n numbers is:%d", sum(10));
    return 0;
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumNm1 = sum(n - 1);
    int sumN = sumNm1 + n;
    return sumN;
}

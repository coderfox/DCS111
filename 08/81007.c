#include <stdio.h>
#include <math.h>

#define _DEBUG

int pow_(int x, int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }
    return result;
}
void incr(char *A, int digits)
{
    A[digits - 1]++;
    for (int i = digits - 1; i >= 0; i--)
    {
        if (A[i] == 10)
        {
            A[i] = 0;
            A[i - 1]++;
        }
    }
}
int toInt(char *A, int digits)
{
    int result = 0;
    for (int i = 0; i < digits; i++)
    {
        result += A[i];
        if (i != digits - 1)
            result *= 10;
    }
    return result;
}
int main()
{
    int n;
    scanf("%d", &n);
    char A[6] = {1, 0, 0, 0, 0, 0};
    for (int i = 1; i <= pow(10, n) - 101; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += pow_(A[j], n);
        }
        if (sum == toInt(A, n))
            printf("%d\n", sum);
#ifdef DEBUG
        else
            printf("%d failed, sum = %d\n", toInt(A, n), sum);
#endif
        incr(A, n);
    }
    return 0;
}
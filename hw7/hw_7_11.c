#include <stdio.h>

int count_bin(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 2) + count_bin(n / 2);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", count_bin(n));

    return 0;
}


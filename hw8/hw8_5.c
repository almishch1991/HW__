#include <stdio.h>

#define SIZE 10

void Input(int buf[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &buf[i]);
    }
}

int Positive(int buf[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (buf[i] > 0)
        {
            sum += buf[i];
        }
    }
    return sum;
}

int main(void)
{
    int buf[SIZE];
    Input(buf, SIZE);
    printf("%d\n", Positive(buf, SIZE));
    return 0;
}
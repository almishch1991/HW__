#include <stdio.h>

#define SIZE 10

void Input(int buf[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &buf[i]);
    }
}

int Max (int buf[], int n)
{
    int max = buf[0];
    for (int i = 0; i < n; i++)
    for (int j = 0; j < i; j++)
    {
        if (max < buf[i] + buf[j])
        {
            max = buf[i] + buf[j];
        }
    }
    return max;
}

int main(void)
{
    int buf[SIZE];
    Input(buf, SIZE);
    Max (buf, SIZE);
    printf("%d", Max (buf, SIZE));
    return 0;
}
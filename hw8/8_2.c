#include <stdio.h>

#define SIZE 5

void Input(int buf[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &buf[i]);
    }
}

int Min(int buf[], int n)
{
    int min = buf[0];
    for (int i = 0; i < n; i++)
    {
        if (min > buf[i])
        {
            min = buf[i];
        }
    }
    return min;
}

int main(void)
{
    int buf[SIZE];
    Input(buf, SIZE);
    printf("%d\n", Min(buf, SIZE));
    return 0;
}
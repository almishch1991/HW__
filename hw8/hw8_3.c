#include <stdio.h>

#define SIZE 10

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

int Max (int buf[], int n)
{
    int max = buf[0];
    for (int i = 0; i < n; i++)
    {
        if (max < buf[i])
        {
            max = buf[i];
        }
    }
    return max;
}
int Pos_Min(int buf[], int n)
{
    int min = buf[0];
    int pos_min = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > buf[i])
        {
            min = buf[i];
            pos_min = i + 1;
        }
    }
    return pos_min;
}
int Pos_Max(int buf[], int n)
{
    int max = buf[0];
    int pos_max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < buf[i])
        {
            max = buf[i];
            pos_max = i + 1;
        }
    }
    return pos_max;
}    
int main(void)
{
    int buf[SIZE];
    Input(buf, SIZE);
    printf("%d %d %d %d\n", Pos_Max(buf, SIZE),Max(buf, SIZE), Pos_Min(buf, SIZE), Min(buf, SIZE));
    return 0;
}
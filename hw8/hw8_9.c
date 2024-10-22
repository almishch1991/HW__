#include <stdio.h>

#define SIZE 10

void Input(int buf[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &buf[i]);
    }
}
void Print(int buf[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", buf[i]);
    }
}
/*void Swap(int buf[], int i, int j)
{
     int temp = buf[i];
     buf[i] = buf [j];
     buf[j] = temp;
}
*/
void shift_right(int buf[], int n)
{
    int temp = buf[SIZE-1];
    for (int i = SIZE-1; i > 0; i--)
    {
        buf[i] = buf[i-1];
        buf[i-1]=temp;
    }
}
int main(void)
{
    int buf[SIZE];
    Input(buf, SIZE);
    shift_right(buf, SIZE);
    Print(buf, SIZE);
    return 0;
}
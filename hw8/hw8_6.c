#include <stdio.h>
#include <inttypes.h>
#define SIZE 11
int main()
{   
    int buf[SIZE], k = 0;
    float sum = 0;
    for (int i = 0; i <= SIZE; i++)
    {
        scanf("%d", &buf[i]);
    }
    for (int i = 0; i <= SIZE; i++)
    {
                sum += buf[i];
                      
    }
    for (int j = 0; j <= SIZE; j++)
    {
        k++;
    }
    printf("%.2f \n", sum / k);
    return 0;
}
#include <stdio.h>
#include <inttypes.h>

int main()
{   
    int buf[4], k = 0;
    float sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &buf[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
                sum += buf[i];
                      
    }
    for (int j = 0; j <= 4; j++)
    {
        k++;
    }
    printf("%.3f \n", sum / k);
    return 0;
}
#include <stdio.h>
#include <malloc.h>

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
void Paritet(int buf[], int n)
{
    int noswap, temp;
    for ( int i = SIZE - 1; i > 0; i--)
        {
        noswap = 1;
        for (int j = 0; j < i; j++)
        {
            if (buf[j] == buf[j + 1])
           { 
            temp = buf[j];
           printf("%d", temp);
            noswap = 0;
           }
        }
        if (noswap == 1)
        break;
        }

}
/*void Swap(int *buf_i, int *buf_j)
{
     int temp = *buf_i;
     *buf_i = *buf_j;
     *buf_i = temp;
}
*/
/*void no_Swap(int buf[], int n)
{
    int temp;
    int noswap;
    for (int i = SIZE-1; i >= 0; i--)
   {
    noswap = 1;
    for (int j = 0; j < i / 2; j++ )
   {
    buf[j] = buf[j];
     if (buf[j] > buf[j + 1])
       { 
        temp = buf[j];
        (buf[j]) = (buf [j + 1]);
        (buf[j + 1]) = temp;
        noswap = 0;
       }
   }
   for (int j = SIZE / 2; j < i; j++)
   if (buf[j] < buf[j + 1])
       { 
        temp = buf[j];
        (buf[j]) = (buf [j + 1]);
        (buf[j + 1]) = temp;
        noswap = 0;
       }
   
   if (noswap == 1)
   break;
   }
   
}
/*void revers_buf(int buf[], int n)
{
for(int i=(SIZE-1) / 2; i>=0; --i)
  printf("%d ", buf[i] % 10);
  for(int j =SIZE-1; j > (SIZE - 1) / 2; --j)
  printf ("%d ", buf[j]);
}
*/
/*void shift_right(int buf[], int n)
{
    int temp = buf[SIZE-1];
    for (int i = SIZE; i > 0; i--)
    {
        buf[i] = buf[i-1];
        buf[i-1]=temp;
    }
}
*/
int main(void)
{
    int buf[SIZE];
    Input(buf, SIZE);
    //shift_right(buf, SIZE);
   // revers_buf(buf, SIZE);
   //no_Swap(buf, SIZE);
   
   Paritet(buf, SIZE);
  // Print(buf, SIZE);
    return 0;
}
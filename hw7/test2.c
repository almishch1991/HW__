#include <stdio.h>
 
void print_num(int n, int k) 
{
       printf("%d ", n);
       if (n < k)
       {
              print_num (n+1, k);
       }
       else if (n > k)
       {
              print_num (n-1, k);
       }
       
}
 
int main()
{
int n, k;
    scanf("%d %d", &n, &k);
    print_num(n, k);
    return 0;
}


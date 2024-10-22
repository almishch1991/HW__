#include <stdio.h>
 
void print_num(int n) 
{
    if (n > 1)
        print_num(n - 1);
    printf("%d ", n);
}
 
int main()
{
int n;
    scanf("%d", &n);


    print_num(n);


    return 0;
}

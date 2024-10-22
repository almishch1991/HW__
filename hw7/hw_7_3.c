#include <stdio.h>
 
void print_num(int n) 
{
    printf("%d ", n % 10);
    if (n > 9)
        print_num(n / 10);   
}
int main()
{
int n;
    scanf("%d", &n);
    print_num(n);


    return 0;
}

#include <stdio.h>
 
void print_a_to_b(int a, int b) 
{
   
    if (a < b)
    {
        print_a_to_b(a, b - 1);
    }   
     else if (a > b)
    {
        print_a_to_b(a, b + 1); 
    }
     printf("%d ", b);
}
 
int main()
{
int a, b;
    scanf("%d %d", &a, &b);
    print_a_to_b(a,b);
    return 0;
}

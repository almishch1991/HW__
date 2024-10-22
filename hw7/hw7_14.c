#include <stdio.h>

void print_no_two(int num)
{
    
    scanf("%d ", &num);
    if (num != 0)
    {
        if (num % 2 != 0)
        {
            printf("%d ", num);
        }
        print_no_two(num);
    }
}

int main(void)
{
    int num;
    print_no_two(num);
    return 0;
}
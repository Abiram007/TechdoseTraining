#include<stdio.h>
int main()
{
    int i, number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for(i = 0; i <= number; i++)
    {
        if(number == i*i)
        {
            printf("\nit is a perfect square");
            return 0;
        }
    }
    printf("\nnot a perfect square", );
    
    return 0;
}

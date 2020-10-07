// check whether Number is Prime or Not

#include<stdio.h>

int main()
{
    int n, i, count = 0;
    printf("Please enter a positive integer:");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        if((n % i) == 0)
        {
            count++;
        }
    }
    if(count == 1)
    printf("1 is neither a prime nor composite number.");    
    else
    if(count == 2)
    printf("%d is a prime number.", n);
    else
    printf("%d is not a prime number.", n);
}

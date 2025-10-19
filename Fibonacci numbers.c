
// nth Fibonacci Number Using Recursion
#include<stdio.h>
int fibo(int num)
{
    if(num<0)
    {
        printf("Input is out of Fibonacci number,cause fibonacci is always non-negative");
        return -1;
    }
    if(num<=1)
    {
        return num;
    }
    else
    {
        return fibo(num-1)+fibo(num-2);
    }
}
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int result = fibo(n);
    printf("The nth Fibonacci number is: %d ",result);
}


/*
// Fibonacci series print
#include<stdio.h>
int main()
{
    int prev1=0,prev2=1,newFibo;
    int n;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",prev1);
        newFibo = prev1 + prev2;
        prev1 = prev2;
        prev2 = newFibo;
    }
}

*/

#include <stdio.h>
int main() {
    int n;
    long long fact=1;
    printf("Enter a non-negative integer: ");
    scanf("%d",&n);
    // check for negative input
    if (n<0){
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    // factorial using loop
    for (int i=1;i<=n;i++) 
    {
    fact = fact*i;
    // future extra line here
    }
    printf("Factorial of %d = %lld\n",n,fact);
    return 0;
}

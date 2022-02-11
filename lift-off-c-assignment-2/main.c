
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    if(n1 > n2){
    printf("%d is maximum",n1);
    }
    if(n2 > n1){
    printf("%d is maximum",n2);
    }
    if(n1 == n2){
    printf("Both are equal");
    }

    return 0;
}


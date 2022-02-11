#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number to check even or odd:");
    scanf("%d", &n);
    
    switch(n % 2==0)
    {
        case 1:
            printf("Number is even");
            break;
        
        default:
            printf("Number is odd");
            break;
    }

    return 0;
}


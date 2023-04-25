// program for linear search in sorted array
#include <stdio.h>
int main()
{

    int arr[5]={1,2,4,8,10};
    int n;
    int i;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n>arr[4])
    {
        printf("not found");
    }
    
    else
    {
        for(i=0;i<5;i++)
        {
            if(n==arr[i])
            {
                printf("found at %d",i);
                break;
            }
        }
        if(i==5)
        {
        printf ("not found");
        }
            
    }
}

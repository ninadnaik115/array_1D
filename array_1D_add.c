#include<stdio.h>
int main()
{
    int arr[10],sum=0,i;
    float average=0.0;
    printf("Enter the values one by one\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The entered elements are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    int *parr=arr;
    for(i=0;i<10;i++)
    {
        sum+=*parr++;
    }
    average=sum/10;
    printf("\nsum=%d   average=%.2f\n",sum,average);
}

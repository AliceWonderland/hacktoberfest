#include <stdio.h>
#include <stdlib.h>

int BSearch(int array[],int size,int key)
{
    int start=0,end=size-1,mid;
    //int low=0,high=5;
    //int low,high;

    //while(low<=high)
    while(start<=end)

    {
        mid=(start+end)/2;
        if(key==array[mid])
            return mid;
        else if(key<array[mid])
            end=mid-1;
        else
            start=mid+1;
    }

    return -1;
}

int main()
{
    printf("Hello Binary Search!\n");
    int A[]={2,5,8,9,10,20};
    int ele,index;
    printf("Enter Element to Search: ");
    scanf("%d",&ele);
    index=BSearch(A,6,ele);
    if(index!=-1)
        printf("%d is found at the index %d",ele,index);
    else
        printf("Index is not found ");
    return 0;
}
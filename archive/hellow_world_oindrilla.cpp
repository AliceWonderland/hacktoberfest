// LANGUAGE: C
// AUTHOR: Oindrilla Bose
// GITHUB: https://github.com/OindrillaBose

#include <iostream>
using namespace std;

int Partition(int a[],int l,int h)
{
    int i=l,j=h;
    int pivot=a[l];
    do{
        do{
            i++;
        } while(a[i]<=pivot);
        do{
            j--;
        } while(a[j]>pivot);
        if(i<j)
            swap(a[i],a[j]);
    } while(i<j);
    swap(a[j],a[l]);
    return j;

}

void Quicksort(int a[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=Partition(a,l,h);
        Quicksort(a,l,j);
        Quicksort(a,j+1,h);
    }


}
int main()
{
    cout<<"Hello folks. Hope you all are doing well. Here is a code for quicksort : )";
    int a[]={11,13,7,12,16,9,24,5,10,3};
    int n=10;
    Quicksort(a,0,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 1;
}


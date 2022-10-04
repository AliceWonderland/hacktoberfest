#include<iostream>
using namespace std;
void print(int * arr,int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}
void quick(int * arr,int start,int end)
{
    if(start<end)
    {
        int i  = start-1;
        int p = arr[end];
        for(int j = start;j<end;j++)
        {
            if(arr[j]<p)
            {
                i++;
                swap(arr[i],arr[j]);
            }
        }
        i++;
        swap(arr[i],arr[end]);
        // print(arr,end-start);
        // cout<<"------------------------------------------------------------"<<endl;
        quick(arr,start,i-1);
        quick(arr,i+1,end);
    } 
}
int main()
{
    int arr[]={5,4,3,2,1,-1,-100};
    int n = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = n-1;
    quick(arr,start,end);
    print(arr,n);
}

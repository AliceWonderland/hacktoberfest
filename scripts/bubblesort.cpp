#include<iostream>
using namespace std;
void swapping(int *ptr1, int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void bubble_sort(int arr[], int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swapping(&arr[j], &arr[j+1]);
            }
        }
    }
}
void print_arr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr, n);
    cout<<endl<<"After bubble sort: "<<endl;
    print_arr(arr, n);
    return 0;
}

#include <iostream>

using namespace std;

void merge(int array[],int first,int mid,int last){
    int first1=first;
    int last1=mid;
    int first2 =mid+1;
    int last2 = last;
    int index = first;
    int newArray[9];
    for(;(first1<=last1)&&(first2<=last2);index++){
        if(array[first1]<array[first2]){
            newArray[index] = array[first1];
            first1++;
        }
        else{
            newArray[index] = array[first2];
            first2++;
        }
    }
    for(;(first1<=last1);first1++,index++){
        newArray[index] = array[first1];
    }
     for(;(first2<=last2);first2++,index++){
        newArray[index] = array[first2];
    }
    for(index=first;index<=last;index++){
        array[index] = newArray[index];
    } 
}

void mergeSort(int array[],int first, int last){
    if(last>first){
        int mid = (first+last)/2;
        mergeSort(array,first,mid);
        mergeSort(array,mid+1,last);
        
        merge(array,first,mid,last);
    }
}

int main()
{
    int array[] = {3,2,13,42,53,23,1,5,7};
    int n=9;
    mergeSort(array,0,8);
    for(int i=0;i<n;i++){
        cout << array[i] << " ";
    }
    return 0;
}

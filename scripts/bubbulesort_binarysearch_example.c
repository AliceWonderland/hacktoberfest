#include<stdio.h>

int *bubblesort(int arr[]);
int *binarysearch(int *arr,int key,int n);


void main(){

int i,j;
int *k,*m;
int arr[10];

for(i=0;i<10;i++){
    arr[i]=rand()%100;
}
arr[3]=5;
for(i=0;i<10;i++){

    printf("%d ",arr[i]);
}

puts(" ");

k=bubblesort(arr);

for(i=0;i<10;i++){

    printf("%d ",k[i]);

}

int na;
puts("\n enter the search element\n");
scanf("%d",&na);
puts("");

m=binarysearch(arr,na,10);

if(m[0]>0){
printf("search succsessfull \n %d %d\n",m[0],m[1]);

}

else{printf("mission failed");}

}

int *bubblesort(int arr[]){

    int i,temp,swap;

    while(1){
        swap=0;
        for(i=0;i<9;i++){

            if(arr[i]>arr[i+1]){

                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swap=1;
            }
       }
if(swap==0){break;}

    }

return arr;
}
int *binarysearch(int *arr,int key,int n){

    int *j;
    int start,end , mid ;
    start =0;
    end = n-1;

    while(start<=end){
        mid= (start+end)/2;

       if(arr[mid]==key){
            j[0]=mid;
            j[1]=arr[mid];
            
        return j;
       }

        else if(arr[mid]>key){

            end = mid -1;
        }

        else{

            start = mid + 1;
        }
    }
if(start>end)
 {
    j[0]=-1;j[1]=key;

    return j;
        }  
}  

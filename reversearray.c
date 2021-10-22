   #include<stdio.h> 
  int arr[]={1,2,3,4,5,6};              
void revArray(int arr[]);
  int main()
  {
      int i;
    printf("before reversing\n");
      for(i=0;i<6;i++){
          printf("%d\n",arr[i]);
      }
       printf("after reversing\n");
        revArray(arr);
      for(i=0;i<6;i++){
          printf("%d\n",arr[i]);
      }
    return 0;
      
  }  

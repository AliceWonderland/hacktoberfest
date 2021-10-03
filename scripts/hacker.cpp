#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float pos=0;
    float neg=0;
    float zer=0;
    int a,b,c;
  for(int i=0;i<n;i++){
      if(arr[i]>0){
          pos++;
      }
      else if(arr[i]<0){
          neg++;
      }
      else if(arr[i] == 0){
          zer++;
      }
      
  }
cout<<fixed<<setprecision(4)<<a<<" ";

return 0;
}
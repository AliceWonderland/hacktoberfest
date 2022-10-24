#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n,sum=0;
    while(temp!=0){
        sum+=temp%10;
        temp/=10;
    }
    int i=2;
    int t=n;
    int sum2=0;
    while(t!=1){
        if(t%i==0){
            if(i>=10){
                int f=i;
                while(f!=0){
                    sum2+=f%10;
                    f/=10;
                }
            }
            else sum2+=i;
            t=t/i;
        }
        else i++;
    }
    if(sum==sum2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
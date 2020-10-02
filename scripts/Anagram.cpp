// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*  Function to check if two strings are anagram
*   c, d: input string
*/
bool isAnagram(string c, string d){
   int i=0; 
   int arrA[26];
   int arra[26];
 if(c.length()==d.length()){
   for(i=0;i<26;i++){
       arrA[i]=0;
       arra[i]=0;
   }
   for(i=0;i<c.length();i++){
       if(c[i]>=97)
            ++arra[c[i]-97];
       else
            ++arrA[c[i]-65];
   }
// Your code here
   for(i=0;i<d.length();i++){
       if(d[i]>=97)
            --arra[d[i]-97];
       else
            --arrA[d[i]-65];
   }  
   for(i=0;i<26;i++){
       if(arra[i]!=0||arrA[i]!=0)
            return false;
          }
   return true;
}
else
   return false;

}


// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;

        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

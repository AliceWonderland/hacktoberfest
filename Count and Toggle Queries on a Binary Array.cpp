#include<bits/stdc++.h>
using namespace std;
const int MAX = 100000;
 

void toggle(int node, int st, int en, int us, int ue)
{
   
    if (lazy[node])
    {
       
        lazy[node] = false;
        tree[node] = en - st + 1 - tree[node];
 
      
        if (st < en)
        {
            
            lazy[node<<1] = !lazy[node<<1];
            lazy[1+(node<<1)] = !lazy[1+(node<<1)];
        }
    }
 

    if (st>en || us > en || ue < st)
        return ;
 
  
    if (us<=st && en<=ue)
    {
   
        tree[node] = en-st+1 - tree[node];
 

        if (st < en)
        {
          
            lazy[node<<1] = !lazy[node<<1];
            lazy[1+(node<<1)] = !lazy[1+(node<<1)];
        }
        return;
    }
 
    int mid = (st+en)/2;
    toggle((node<<1), st, mid, us, ue);
    toggle((node<<1)+1, mid+1,en, us, ue);
 
   
    if (st < en)
        tree[node] = tree[node<<1] + tree[(node<<1)+1];
}
 
/* node --> Index of current node in the segment tree.
          Initially 0 is passed as root is always at'
          index 0
   st & en  --> Starting and ending indexes of the
                segment represented by current node,
                i.e., tree[node]
   qs & qe  --> Starting and ending indexes of query
                range */

int countQuery(int node, int st, int en, int qs, int qe)
{
   
    if (st>en || qs > en || qe < st)
        return 0;
 
 
    if (lazy[node])
    {
        
        lazy[node] = false;
        tree[node] = en-st+1-tree[node];
 
       
        if (st<en)
        {
         
            lazy[node<<1] = !lazy[node<<1];
            lazy[(node<<1)+1] = !lazy[(node<<1)+1];
        }
    }
 

    if (qs<=st && en<=qe)
        return tree[node];
 
    
    int mid = (st+en)/2;
    return countQuery((node<<1), st, mid, qs, qe) +
           countQuery((node<<1)+1, mid+1, en, qs, qe);
}
 

int main()
{
    int n = 5;
    toggle(1, 0, n-1, 1, 2);  //  Toggle 1 2
    toggle(1, 0, n-1, 2, 4);  //  Toggle 2 4
 
    cout << countQuery(1, 0, n-1, 2, 3) << endl;  //  Count 2 3
 
    toggle(1, 0, n-1, 2, 4);  //  Toggle 2 4
 
    cout << countQuery(1, 0, n-1, 1, 4) << endl;  //  Count 1 4
 
   return 0;
}

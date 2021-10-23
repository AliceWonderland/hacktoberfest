#include<iostream>
#include<conio.h>
using namespace std;

void setmatrix(int array[3][3]);//function declaration
   
void showmatrix(int array[3][3]);
		
void matrixaddition(int array1[3][3],int array2[3][3]);
 	 
int main(){
  	 	char c;
	   
 int A[3][3], B[3][3];          //Two matrices
     
    cout<<"Enter first matrix: \n";
	 setmatrix(A);
	 cout<<"Enter addition operator\n";
    cin>>c;
     
    cout<<"\nEnter 2nd matrix: \n";
     setmatrix(B);
     
    cout<<"The two matrices are: \n";
    showmatrix(A);
    
    cout<<endl<<endl;
    showmatrix(B);
    cout<<"\nAdditon of two matrices:\n";
    matrixaddition(A,B);
    getch();
    return 0;
    
}


void setmatrix(int array[3][3])
    {
        cout<<"Enter Values:\n";
           for(int i=0;i<3;i++)
  	      { 
    	       for(int j=0;j<3;j++) 
		         {
	 			    cout<<"("<<i<<","<<j<<")= ";
	  			    cin>>array[i][j];
    	          }
  	       }
	}

void showmatrix(int array[3][3])
		{ 
		 for(int i=0;i<3;i++)
 		   {
   			  for(int j=0;j<3;j++)
     			 {cout<<array[i][j]<<" ";} 
     		  cout<<endl;
 		   }
		}
void matrixaddition(int array1[3][3],int array2[3][3])
 	 {   
 	    int tempvariable;
 	    
      for(int i=0;i<3;i++)
   		{
     	 for(int j=0;j<3;j++)
	   		{
	      tempvariable=array1[i][j]+array2[i][j];
   			cout<<tempvariable<<" ";
       		 }
         cout<<endl;
    	}
  	 }

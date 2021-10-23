#include<iostream>
#include<conio.h>
using namespace std;

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
void matrixmultiplication(int array1[3][3],int array2[3][3])
 	{   
	  int tempvariable;
    	for(int i=0;i<3;i++)
    	{ 
    	  for(int j=0;j<3;j++) 
    		{   int sum=0;
		     	for(int k=0;k<3;k++)
		  	 {
    			sum+=array1[i][k]*array2[k][j]; 
		  	 }
	       	 tempvariable=sum; 
	         cout<<tempvariable<<" ";	
     		}  
		   cout<<endl;
		}
    }
    
void matrixsubtraction(int array1[3][3],int array2[3][3])
 		{
 			int tempvariable;
			for(int i=0;i<3;i++)
   		  {
           	  for(int j=0;j<3;j++)
	      		{
	      		tempvariable=array1[i][j]-array1[i][j];
           		 cout<<tempvariable<<" ";
          		}
            cout<<endl;
    	  }
		}

void matrixdivision(int array1[3][3],int array2[3][3])
    {
    	cout<<"\nCant perform Division in matrices\n";
    	
    }  	 
int main()
{
	char c,doagain=' ';
     int A[3][3], B[3][3];          //Two matrices
     
    cout<<"Enter first matrix: \n";
	 setmatrix(A);
     
    cout<<"\nEnter 2nd matrix: \n";
     setmatrix(B);
     
    cout<<"The two matrices are: \n";
    showmatrix(A);
    
    cout<<endl<<endl;
    showmatrix(B);
     
     while(doagain!='n') 
     {
	 
	  cout<<"\nWhich operation do you want to perform(+,-,*,/)? : ";
      cin>>c;
   switch(c)
   {
   	case '*':
   		matrixmultiplication(A,B);
   		break;
   		
   	case '+':
   		matrixaddition(A,B);
   		break;
   		
   	case '-':
   		matrixsubtraction(A,B);
   		break;
   		
   	case '/':
   		matrixdivision(A,B);
   		break;
   		
   	default:
   		cout<<"Invalid operator!!!";
   		
   }
    cout<<"\nDo u want to perform another operation again(y/n)? :";
     cin>>doagain;
     }
   
   
}

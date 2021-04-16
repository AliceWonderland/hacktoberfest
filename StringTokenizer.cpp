#include<iostream>
#include<cstring>
using namespace std;

//char *strtok(char *array,char *list_of_delims)

int main(){
	//String Tokenizer
	char a[100];
	
	//char a[100] = "Hello . this  . is some array.";
	cin.getline(a,100);
	cout<<a <<endl;

	//String Tokeinzer Function
	char *ans;
	
	 ans =  strtok(a," .,");
	while(ans!=NULL){
		cout<<ans <<endl;
		ans = strtok(NULL," .");
	}

}
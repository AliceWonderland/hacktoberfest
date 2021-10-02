#include<bits/stdc++.h>
using namespace std;
bool isbalanced(string s) {
	stack <char> st;
	int n= s.size();
	bool ans = true;
	for(int i = 0; i < n; i++){
		if(s[i] == '[' or s[i] == '{' or s[i] == '('){
			st.push(s[i]);
		}
		else if(!st.empty() and s[i] == ']'){
			if(st.top() == '['){
				st.pop();
			}
			else{
				ans = false;
				break;
			}
		}
		else if(!st.empty() and s[i] == '}'){
			if(st.top() == '{'){
				st.pop();
			}
			else{
				ans = false;
				break;
			}
	}
	else if(!st.empty() and s[i] == ')'){
			if(st.top() == '('){
				st.pop();
			}
			else{
				ans = false;
				break;
			}
		}
	}
	if(!st.empty()){
		return false;
	}
	return ans;
}
	
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
	    cin >> s;
	    if(isbalanced(s)){
	    	cout << "YES" << endl;
	    }
	    else{
	    	cout << " NO" << endl;
	    }
	}
	
}

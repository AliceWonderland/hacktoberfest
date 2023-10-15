class Solution {
private:
    void solve(string digits, int index, string output, vector<string>& ans, vector<string>& digitToString)
    {
        if (index >= digits.length())
        {
            ans.push_back(output) ; 
            return ; 
        }

        int num = digits[index] - '0' ; 
        string val = digitToString[num] ; 

        for (int i = 0 ; i < val.length() ; i ++)
        {
            output.push_back(val[i]) ; 
            solve(digits, index + 1, output, ans, digitToString) ; 
            output.pop_back() ; 
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans ; 
        if (digits.length() == 0)
        {
            return ans ; 
        }
        string output = "" ; 
        int index = 0 ; 
        vector<string> digitToString = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"} ;
        solve(digits, index, output, ans, digitToString) ;

        return ans ; 
    }
};

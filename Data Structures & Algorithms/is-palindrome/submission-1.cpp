class Solution {
public:
    bool isPalindrome(string s) {
        string m="";
        for(auto it:s){
            if(isalnum(it)){m+=tolower(it);}

        }
        string r=m;
        reverse(r.begin(),r.end());
        return r==m;
    }
};

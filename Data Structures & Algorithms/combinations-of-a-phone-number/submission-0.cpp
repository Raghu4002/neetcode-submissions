class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty())return {};
        vector<string> res={""};
        vector<string> d={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        for(char digit:digits){
            vector<string> temp;
            for(string &cur:res){
                for(char c:d[digit-'0']){
                    temp.push_back(cur+c);
                }
            }
            res=temp;
        }
        return res;
    }
};

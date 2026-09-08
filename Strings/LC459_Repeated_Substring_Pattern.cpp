class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        string t = s + s;

        int pos = t.find(s,1);

        if(pos == -1 || pos >= t.size()/2){
            return false;
        }
        else return true;
    }
};

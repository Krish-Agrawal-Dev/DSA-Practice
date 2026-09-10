class Solution {
public:
    string reverseWords(string s) {
        
        int j = 0;
        for(int i = 0; i < s.size(); ){

            if(s[i] == ' '){
                reverse(s.begin() + j, s.begin() + i);
                j = i+1;
                i++;
            }

            else i++;
        }

        reverse(s.begin() + j, s.end());

        return s;
    }
};

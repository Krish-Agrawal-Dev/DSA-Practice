class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char, char> um;
        unordered_map<char, char> um2;

        for(int i = 0; i < s.size(); i++){

            if(um.count(s[i])){

                if(um[s[i]] != t[i]){
                    return false;
                }
            }

            else{

                um[s[i]] = t[i];   
            }
        }
        
        for(int i = 0; i < t.size(); i++){

            if(um2.count(t[i])){

                if(um2[t[i]] != s[i]){
                    return false;
                }
            }

            else{

                um2[t[i]] = s[i];   
            }
        }

        return true;
    }
};

class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        string temp;

        stringstream ss(s);

        while (ss >> temp) {

            words.push_back(temp);
        }

        if (words.size() != pattern.size())
            return false;

        unordered_map<char, string> PtoWord;
        unordered_map<string, char> WordToP;

        for (int i = 0; i < words.size(); i++) {

            char p = pattern[i];
            string w = words[i];

            if (PtoWord.count(p) && PtoWord[p] != w)
                return false;

            if (WordToP.count(w) && WordToP[w] != p)
                return false;

            PtoWord[p] = w;
            WordToP[w] = p;
        }

        return true;
    }
};

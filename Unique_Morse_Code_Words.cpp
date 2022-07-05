class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> s;
        vector<string> vec{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    for(int i=0;i<words.size();i++){
        string res = "";
        for(int j=0;j<words[i].size();j++){
            res += vec[words[i][j]-'a'];
        }
        s.insert(res);
    }
        return s.size();
    }
};

class Solution {
public:
    int countPoints(string s) {
        int c = 0;
        vector<pair<int,char>> v;
        for(int i=0;i<s.size()-1;i+=2){
            int x = s[i+1]-'0';
            v.push_back(make_pair(x,s[i]));
        }
        for(int i=0;i<=9;i++){
            int r=0,g=0,b=0;
            for(int j=0;j<v.size();j++){
                if(v[j].first == i){
                    if(v[j].second == 'R') r+=1;
                    else if(v[j].second == 'G') g+=1;
                    else b+=1;
                }
            }
            if(r && g && b) c++;
        }
        return c;
    }
};

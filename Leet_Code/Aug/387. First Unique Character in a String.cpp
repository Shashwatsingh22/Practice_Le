class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;   // char -> repeation
        
        for(auto charData : s) m[charData]++;
        
        for(int i=0;i<s.length();i++) if(m[s[i]]==1) return i;
        
        return -1;
        
    }
};
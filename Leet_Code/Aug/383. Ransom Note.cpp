//https://leetcode.com/problems/ransom-note/


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> ransom;
        for(int i=0;i<ransomNote.length();i++)
        {
            //cout<<ransomNote[i]<<endl;
            ransom[ransomNote[i]]++;
        }
        
        map<char,int> magaz;
        for(int i=0;i<magazine.length();i++)
            magaz[magazine[i]]++;
        
        
        for(auto ransomNoteChar : ransom)
            if(magaz[ransomNoteChar.first]<ransomNoteChar.second) return false;
        
        
        return true;
    }
};
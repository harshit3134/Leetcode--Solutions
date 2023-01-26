class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        return false;
        unordered_map<char,int>m;
        unordered_map<char,int>v;
        for(int i=0;i<s.size();i++){
          m[s[i]]++;
          v[t[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(m[t[i]]!=v[t[i]])
            return false;
        }
        return true;
    }
};

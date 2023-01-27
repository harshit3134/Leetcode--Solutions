class Solution {
public:
    string getHint(string secret, string guess) {
       int countb=0,countc=0;
       unordered_map<char,int>m;
       for(int i=0;i<secret.size();i++){
           m[secret[i]]++;
           if(secret[i]==guess[i]){
           countb++;
           m[secret[i]]--;
           }
           
       }
       for(int i=0;i<guess.size();i++){
        if(m[guess[i]]>0 && guess[i]!=secret[i]){
           countc++;
           m[guess[i]]--;
        }
       }
       string ans=to_string(countb)+"A"+to_string(countc)+"B";
       return ans;
    }
};

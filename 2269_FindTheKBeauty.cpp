class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int i=0,j=0,count=0;
        string str="";
        while(j<s.size()){
           str=str+s[j];
           cout<<str<<endl;
           if(str.size()<k){
               j++;
           }
           if(str.size()>=k){
               int temp=stoi(str);
               if(temp!=0 && num%temp==0)
               count++;
               str=str.substr(1);
               i++;
               j++;
           }
           
        }
        return count;
    }
};

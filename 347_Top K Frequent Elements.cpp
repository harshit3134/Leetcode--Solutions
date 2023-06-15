class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>p;
        for(auto i:m)
         p.push_back(i);
        sort(p.begin(),p.end(),cmp);
        for(auto i:p){
            if(k>0){
            ans.push_back(i.first);
            k--;
            }
        }
        return ans;
    }
};

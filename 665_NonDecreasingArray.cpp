class Solution
{
public:
    bool checkPossibility(vector<int> &nums)
    {
        bool count=false;
        for(int i=0;i<nums.size()-1;i++){
           if(nums[i]>nums[i+1]){
               if(count)
               return false;
               else{
                   if(i==0 || nums[i+1]>=nums[i-1]){
                       nums[i]=nums[i+1];
                   }
                   else{
                       nums[i+1]=nums[i];
                   }
                   count=true;
               }
           }
        }
        return true;
    }
};

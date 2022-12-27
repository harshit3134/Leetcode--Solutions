class Solution {
public:
    int arrangeCoins(int n) {
       long int l=0;
       long int h=n;
        while(l<h){
           long int mid=l+(h-l)/2;
           long int ans=(mid*(mid+1))/2;
            if(n>ans)
            l=mid+1;
            if(n<ans)
            h=mid-1;
            if(ans==n)
            return mid;
        }
       long long ans=(l*(l+1)/2);
        if(ans>n)
        return --l;
        return l;
     
    }
};

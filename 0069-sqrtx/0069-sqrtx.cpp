class Solution {
public:
    int mySqrt(int x) {
        int l=1;
        int r=x;
        int ans=0;
        while(l<=r){
            int mid = l+(r-l)/2;
            long long res = 1LL* mid*mid;
            if(res == x) return mid;
            else if(res<x){
                ans = mid;
                l = mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};
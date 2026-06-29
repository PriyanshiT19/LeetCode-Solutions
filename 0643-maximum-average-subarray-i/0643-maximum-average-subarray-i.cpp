class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum=0;
        long long maxsum = 0;
        for(int i=0; i<k;i++){
            sum+= nums[i];
        }
        maxsum = sum;
        for(int i=k; i<nums.size();i++){
            sum+= nums[i];
            sum-= nums[i-k];
            maxsum = max(maxsum, sum);
        }
        return (double) maxsum/k;
    }

};
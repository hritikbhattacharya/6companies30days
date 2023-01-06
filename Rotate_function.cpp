class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n= nums.size();
        int sum =0;
        int F=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            F+=i*nums[i];
        }
        int ans = F;

        for(int i=n-1;i>=0;i--){
            F=F + sum -(n*nums[i]);
            ans = max(F,ans);
        }

        return ans;
        
    }
};

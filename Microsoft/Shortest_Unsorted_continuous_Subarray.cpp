class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        sort(temp.begin(),temp.end());
        int i=0,j=nums.size()-1;
        // int k=0,l=temp.size()-1;
        int k=0,l=0;
        int ans=0;
        // for(auto it:temp){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        
          
       for(int i=0;i<nums.size();i++){
           if(nums[i]!=temp[i]){
               k=i;
               break;
           }
       }
       for(j=nums.size()-1;j>=0;j--){
           if(nums[j]!=temp[j]){
               l=j;
               break;
           }
       }
        // cout<<l<<" "<<k<<endl;
        if(k==0 && l==0){
         ans=0;
        }else{
        ans = l-k+1;
          
        }
       

        return ans;
        
    }
};

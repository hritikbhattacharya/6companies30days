class Solution {
    vector<vector<int>>ans;
public:
    void combicheck(int k,int n , vector<int>& arr,int num){

        if(k==0){
            int sum = accumulate(arr.begin(),arr.end(),0);
            if(sum==n){
                ans.push_back(arr);
                return;
            }
        }

        if (num>9){
            return;
        }

        arr.push_back(num);
        combicheck(k-1,n,arr,num+1);
        arr.pop_back();
        combicheck(k,n,arr,num+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr;
        combicheck(k,n,arr,1);
        return ans;
        
    }
};

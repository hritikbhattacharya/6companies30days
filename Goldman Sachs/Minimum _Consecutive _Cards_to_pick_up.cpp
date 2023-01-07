class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int,vector<int>>mp;
        for(int i=0;i<cards.size();i++){
            mp[cards[i]].push_back(i);
        }
        int ans=INT_MAX;
        for(auto it:mp){
           if(it.second.size()>1){
               for(int i =0;i<it.second.size()-1;i++){
                   for(int j=i+1;j<it.second.size();j++){
                       if(abs(it.second[i]-it.second[j])<=ans){
                           ans=abs(it.second[i]-it.second[j]);
                       }
                   }
               }
           }
        }
        
        if(ans==INT_MAX){
            return -1;
        }
        return ans+1;
    }
};
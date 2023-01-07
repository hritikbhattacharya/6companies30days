class Solution {
public:
    
    int dis(vector<int>& p1,vector<int>& p2){
        int x = (p2[0]-p1[0])*(p2[0]-p1[0]);
        int y = (p2[1]-p1[1])*(p2[1]-p1[1]);
        return x+y;
    }

    int numberOfBoomerangs(vector<vector<int>>& points) {
        if(points.size()<3){
            return 0;
        }
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<points.size();i++){
            for(int j=0;j<points.size();j++){
                if(j==i)continue;
                //   for(int k=0;k<points.size();k++){
                //       if(k==i || k==j){
                //           continue;
                //       }

               
                 mp[dis(points[i],points[j])]++;
               
            }
            for(auto it:mp){
                if(it.second<2){
                    continue;
                }else{
                    count+=((it.second)*(it.second-1));
                }
            }
            mp.clear();
        }

        return count;


        
    }
};
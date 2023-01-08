class Solution {
public:
    bool check(vector<int>& p1,vector<int>& p2,vector<int>& p3){
        int a = (p2[0]-p1[0])*(p3[1]-p1[1]);
        int b = (p2[1]-p1[1])*(p3[0]-p1[0]);
        if(a==b)return true;
        else return false;
    }
    int maxPoints(vector<vector<int>>& points) {
        int count =0;
        int ans=0;
        
        if(points.size()==1){
            return 1;
        }
        if(points.size()==2){
            return 2;
        }
        for(int i=0;i<points.size()-1;i++){
            for(int j=i+1;j<points.size();j++){
                count=0;
                for(int k=0;k<points.size();k++){
                    if(k!=i || k!=j){
                    if(check(points[i],points[j],points[k])){
                        count++;
                    }
                    }
                   
                }
                ans=max(ans,count);

            }
        }
        return ans;
        
    }
};
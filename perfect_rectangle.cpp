class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        map<pair<int,int>,int> point;
        int count=0;
        for(int i=0;i<rectangles.size();i++){
            point[{rectangles[i][0],rectangles[i][1]}]++;
            point[{rectangles[i][0],rectangles[i][3]}]--;
            point[{rectangles[i][2],rectangles[i][3]}]++;
            point[{rectangles[i][2],rectangles[i][1]}]--;

        }

        for(auto it:point){
            if(abs(it.second)==1){
                count++;
            }

            if(abs(it.second)!=1 && it.second!=0){
                return false;
            }
        }
        
        if(count==4){
            return true;
        }else{
            return false;
        }
    }
};

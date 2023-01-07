class Solution {
public:
    int dis(vector<int>& p1 , vector<int>& p2){
       int x = (p2[0]-p1[0])*(p2[0]-p1[0]);
       int y = (p2[1]-p1[1])*(p2[1]-p1[1]);
       return x+y;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        if(p1==p2 || p1==p3 || p1==p4 || p2==p3 || p2==p4 || p3==p4) {return false;}

        map<int,int> mp;
        int a = dis(p1,p2);
        mp[a]++;
        int b = dis(p1,p3);
        mp[b]++;
        int c = dis(p1,p4);
        mp[c]++;
        int d = dis(p2,p3);
        mp[d]++;
        int e = dis(p2,p4);
        mp[e]++;
        int f = dis(p3,p4);
        mp[f]++;
        
     
        if(mp.size()>2){
            return false;
        }
    return true;

    }

};
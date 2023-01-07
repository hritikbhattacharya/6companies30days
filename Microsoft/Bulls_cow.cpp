class Solution {
public:
    string getHint(string secret, string guess) {
           int bulls=0,cows=0;
        map<int,int> mp1;
        map<int,int> mp2;
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
                bulls++;
            else
            {
                mp1[secret[i]-'0']++;
                mp2[guess[i]-'0']++;
            }
            
        }
        for(auto it:mp1)
        {
            if(mp2.find(it.first)!=mp2.end())
            cows+=min(mp2[it.first],it.second);
        }
        string s="";
        s=to_string(bulls)+"A"+to_string(cows)+"B";
        return s;
        
    }
};

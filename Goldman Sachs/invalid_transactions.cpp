class Solution {
public:
    vector<string> invalidTransactions(vector<string>& transactions) {
        vector<string> result;
        vector<vector<string>> ans;

        for(int i=0;i<transactions.size();i++){
            vector<string> res;
            string a="";
            for(int j=0;j<transactions[i].size();j++){
                if(transactions[i][j]==',' || j+1==transactions[i].size()){
                    res.push_back(a);
                    a="";
                }else{
                    a+=transactions[i][j];
                }

            }
            ans.push_back(res);
        }

        // for(auto it:ans){
        //     for(auto i:it){
        //         cout<<i<<" ";
        //     }cout<<endl;
        // }
        for(int i=0;i<ans.size();i++){
            if(stoi(ans[i][2])>1000){
               result.push_back(transactions[i]); 
            }
        }

        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans.size();j++){
                if(i==j)continue;
                
                if(ans[i][0]==ans[j][0] && ans[i][3]!=ans[j][3]){
                    if(abs(stoi(ans[i][1])-stoi(ans[j][1]))<=60){
                        if(stoi(ans[i][2])<=1000){
                            result.push_back(transactions[i]);
                            break;
                        }
                    }
                }

            }
        }

        // vector<string> p;
        return result;
        
    }
};
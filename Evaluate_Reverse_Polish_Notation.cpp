class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> a;

        for(int i = 0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                int aa = a.top();
                a.pop();
                int b = a.top();
                a.pop();
                a.push(b+aa);
            }else if(tokens[i]=="-"){
                int aa = a.top();
                a.pop();
                int b = a.top();
                a.pop();
                a.push(b-aa);
            }else if(tokens[i]=="*"){
                int aa = a.top();
                a.pop();
                int b = a.top();
                a.pop();
                a.push(aa*b);
            }else if(tokens[i]=="/"){
                int aa = a.top();
                a.pop();
                int b = a.top();
                a.pop();
                a.push(b/aa);
                // if(aa>b && b!=0){
                // a.push(aa/b);
                // }else{
                // a.push(b/aa);
                // }
            }else{
                a.push(stoi(tokens[i]));
            }    
            // cout<<a.top()<<endl;
                           
            
        }
        return a.top();
    }
};

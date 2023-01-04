class Solution {
public:
    int numberOfSubstrings(string s) {
    //     int ans=0;
    //     for (int i = 0; i < s.length(); i++) {
    //     string subStr;
    //    for (int j = i; j < s.length(); j++) {
    //         subStr += s[j];
    //         int aa = count(subStr.begin(),subStr.end(),'a');
    //         int bb = count(subStr.begin(),subStr.end(),'b');
    //         int cc = count(subStr.begin(),subStr.end(),'c');
    //         if(aa!=0 && bb!=0 && cc!=0){
    //             ans++;
    //         }
    //     }
    //   }
    //     return ans;
          int l = 0 , r=0 , n = s.size()-1,count=0;
          int arr[]={0,0,0};

          while(r!=s.size()){
            arr[s[r]-'a']+=1;
            while(arr[0]!=0 && arr[1]!=0 && arr[2]!=0){
                count+=(1+(n-r));
                arr[s[l]-'a']-=1;
                l++;
            }
            r++;
          }

          return count;


    }
};

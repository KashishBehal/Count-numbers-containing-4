class Solution {
  public:
    int countNumberswith4(int n) {
       int c=0;
       for(int i=4;i<=n;i++){
           string s=to_string(i);
           for(int j=0;j<s.length();j++){
               if(s[j]=='4'){
                   c++;
                   break;
               }
           }
       }
       return c;
    }
};

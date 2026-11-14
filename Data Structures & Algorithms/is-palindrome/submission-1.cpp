class Solution {
public:
  bool isAlphanumeric(int c){
        return (48<=c && c<=57 || 65<=c &&c<=90 || 97<=c && c<=122);
         }
    bool isPalindrome(string s) {
        int l=0,r=s.length()-1;

        while(l<r){
            while(l<r&& !isAlphanumeric(s[l])){
                l++;
            }
             while(r>l&& !isAlphanumeric(s[r])){
                r--;
            }
            if(tolower(s[l])!=tolower(s[r])){
               
                return false;
            }else{
                l++;
                r--;
            }
        }
        return true;
    }
  
   
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>sHashTable;
         unordered_map<int,int>tHashTable;
         for(char c : s){
            sHashTable[c]++;
         }
          for(char v : t){
            tHashTable[v]++;
         }
         if(sHashTable==tHashTable){
            return true;
         }
         return false;
    }
};

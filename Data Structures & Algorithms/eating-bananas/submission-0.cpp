class Solution {
    private:
     long long hoursNeeded(const vector<int>& piles,int speed){
        long long hours=0;
        for(int pile:piles){
            hours+= (static_cast<long long>(pile)+speed-1)/speed;
        }
        return hours;
     }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
     
        int low=1, high=*max_element(piles.begin(),piles.end());
        int k=high;
      
            while(low<=high){
                int mid=low+(high-low)/2;
                long long hours=hoursNeeded(piles,mid);
                if(hours<=h){
                   k=mid;
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
        
        return k;
    }
};

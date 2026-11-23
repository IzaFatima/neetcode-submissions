class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size(), columns=matrix[0].size();
        int l=0, h=rows*columns-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            int r=mid/columns,c=mid%columns;
            if(matrix[r][c]==target){
                return true;
            }else if(matrix[r][c]<target){
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return false;
    }
};

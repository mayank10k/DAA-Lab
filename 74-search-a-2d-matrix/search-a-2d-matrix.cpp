class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int low=0,high=(rows*cols)-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            int val=matrix[mid/cols][mid%cols];

            if(val==target){
                return true;
            }else if(val>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
            
        }
        return false;
        
    }
};
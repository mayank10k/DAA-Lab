class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> ans={0,0};
        int st=0,end=n-1;
        while(st<=end){
            int sum=numbers[st]+numbers[end];
            if(sum==target){
                ans[0]=st+1;
                ans[1]=end+1;
                return ans;

            }
            if(target>sum){
                st++;
            }else{
                end--;
            }
        }
        return ans;


        
    }
};
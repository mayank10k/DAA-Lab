class Solution {
public:
    int missingInteger(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int n=nums.size();

        int sum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
                ;
            }else{
                break;
            }
        }

        if(!s.count(sum)){
            return sum;
        }else{
            while(1){
                if(s.count(sum)){
                    sum++;
                }else{
                    break;
                }
            }
        }
        return sum;

    }
};
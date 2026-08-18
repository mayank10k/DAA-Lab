class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        bool f1=true,f2=true;

        if(k==n){
            sort(nums.begin(),nums.end());
            return nums.back();
        }
        if(k==1){
            map<int,int>m;
            for(int i:nums){
                m[i]++;
            }
            int maxval=-1;
            for(auto it:m){
                if(it.second==1){
                    maxval=max(maxval,it.first);
                }
            }
            return maxval;
        }
        int a=nums[0],b=nums[n-1];

        for(int i=1;i<n;i++){
            if(nums[i]==a){
                f1=false;
                break;
            }

        }
        for(int i=n-2;i>=0;i--){
            if(nums[i]==b){
                f2=false;
                break;
            }
        }

        if(f1 && f2){
            return max(a,b);
        }else if(f1 && !f2){
            return a;
        }else if(!f1 && f2){
            return b;
        }
        return -1;
        
    }
};
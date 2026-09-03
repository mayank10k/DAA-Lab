class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minval=INT_MAX;
        bool odd=false;

        for(int i:nums1){
            if(i%2){
                odd=true;
                minval=min(minval,i);
            }
        }

        if(!odd)return true;
        for(int i:nums1){
            if(i%2==0 && minval>i)return false;
        }
        return true;
    }
};
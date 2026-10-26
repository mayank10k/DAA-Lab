class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {

        int n=nums.size();
        vector<pair<pair<int,int>,int>>v;
        for(int i=0;i<n;i++){
            int num=nums[i];

            vector<int>temp;
            while(num>0){
                int r=num%10;
                temp.push_back(r);
                num/=10;
            }
            sort(temp.begin(),temp.end());
            int len=temp.size();
            int newNum=0;
            for(int j=len-1;j>=0;j--){
                newNum=newNum*10+temp[j];
            }
            v.push_back({{newNum-nums[i],newNum},nums[i]});
        }

        sort(v.begin(),v.end(),greater<pair<pair<int,int>,int>>());

        long long sum=0ll;
        for(auto it:v){
            if(it.first.second==it.second){
                sum+=it.second;
                continue;
            }
            if(k){
                sum+=it.first.second;
                k--;
            }else{
                sum+=it.second;
            }
            cout<<sum<<endl;
        }
        cout<<sum;

        return sum;


    }
};
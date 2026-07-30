class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>m;
        for(char c:word){
            m[c]++;
        }

        vector<pair<int,int>>p;
        for(auto it:m){
            p.push_back({it.second,it.first});
        }
        sort(p.begin(),p.end());

        int count=0;
        int n=p.size();
        for(int i=0;i<n;i++){
            if(i<8){
                count+=p[i].first;
            }else if(i<16){
                count+=2*p[i].first;
            }else if(i<24){
                count+=3*p[i].first;
            }else{
                count+=4*p[i].first;
            }

        }
        return count;
        
    }
};
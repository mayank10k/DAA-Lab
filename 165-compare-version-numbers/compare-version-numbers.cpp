class Solution {
public:
    int compareVersion(string v1, string v2) {
        int a=0,b=0;
        int i=0,j=0;
        while(v1[i]!='\0'){
            if(v1[i]=='.'){
                a++;
            }
            i++;
        }
        while(v2[j]!='\0'){
            if(v2[j]=='.'){
                b++;
            }
            j++;
        }
        int maxval=max(a+1,b+1);

        vector<int>s1(maxval,0),s2(maxval,0);
        string s="";
        int idx=0;
        for(int i=0;i<v1.size();i++){
            if(v1[i]!='.')s+=v1[i];
            if(v1[i]=='.'){
                s1[idx]=stoi(s);
                idx++;
                s="";
            }
        }
        s1[idx]=stoi(s);
        idx=0;
        s="";

        for(int i=0;i<v2.size();i++){
            if(v2[i]!='.')s+=v2[i];
            if(v2[i]=='.'){
                s2[idx]=stoi(s);
                idx++;
                s="";
            }
        }
        s2[idx]=stoi(s);
        for(int i=0;i<maxval;i++){
            if(s1[i]==s2[i])continue;
            if(s1[i]>s2[i])return 1;
            else return -1;
        }
        return 0;
        
    }
};
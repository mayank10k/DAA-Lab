class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int c1=0,c2=height.size()-1;
        int vol=0;
        while(c1<c2){
            int h=min(height[c1],height[c2]);
            int w=c2-c1;
            vol=max(vol,h*w);
            height[c1]<height[c2]?c1++:c2--;    
        }
        return vol;
        
    }
};
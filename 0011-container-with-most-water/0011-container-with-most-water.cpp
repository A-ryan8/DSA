class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxw=INT_MIN;
        int w=0;
        while(i<j){
            int l=j-i;
            w=l*min(height[i],height[j]);
            maxw=max(w,maxw);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxw;
    }
};
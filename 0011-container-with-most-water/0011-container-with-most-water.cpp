class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0,right = height.size()-1, area=0,temp=0;
        
        while(left<right){
            temp=(right-left)*min(height[left],height[right]);
            
            area = max(area,temp);
            
            if(height[left]>height[right]) right--;
            else left++;
        }
        return area;
    }
};
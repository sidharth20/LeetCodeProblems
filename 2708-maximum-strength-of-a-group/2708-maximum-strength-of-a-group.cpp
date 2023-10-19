class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        long long strength=1;
        int czero=0,cneg=0,cpos=0;
        int negmax=INT_MIN;
        
        for(int iter=0;iter<nums.size();iter++){
            if(nums[iter]==0){
                czero++;
                continue;
            } 
            if(nums[iter]<0){
                cneg++;
                negmax=max(negmax,nums[iter]);
            }
            if(nums[iter]>0) cpos++;
            strength *= nums[iter];
            }
    
           if(cneg==0){
            if(cpos)return strength;
            return 0;
        }else if(cneg==1){
            if(cpos)return strength/negmax;
            if(czero) return 0;
            return negmax;
        }
        if((cneg||cpos) && strength>0){
            return strength;
        }
        strength /= negmax;
        return strength;
    }
};
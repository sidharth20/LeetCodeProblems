// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i=0,j=0;
        
//         while(i<=(m+n)){
//             if(nums1[i]==0){
//                 nums1[i]=nums2[j];
//                 i++;
//                 j++;
//                 continue;
//             }
//             else if(nums1[i]<=nums2[j]) i++;
//             else if(nums2[j]<nums1[i]){
//                 int tmp = nums1[i];
//                 nums1[i]=nums2[j];
//                 nums2[j]=tmp;
//                 i++;
//             }
//         }
//     }
// };

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Here, nums1 =1st array, nums2 = 2nd array...
        for(int i = 0 ; i < n ; i++)
            nums1[i + m] = nums2[i];
            // Sort the 1st array...
            sort(nums1.begin() , nums1.end());
        // Print the required result...
        return;
    }
};
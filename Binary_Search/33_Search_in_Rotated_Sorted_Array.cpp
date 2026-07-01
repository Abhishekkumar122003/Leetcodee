class Solution {
public:
    int search(vector<int>& nums, int target) {
     int ans_indx = -1;
     int start =0;
     int end = nums.size()-1;
     while(start <= end ){
        int mid = start + (end - start)/2;
        if(nums[0] < nums[mid]){
            // move to right side

            start = mid +1;
        } else {
            // (nums[0] > nums[mid]) => move to left side 
            ans_indx = mid;
            end = mid-1;
        }
     }   
     return ans_indx-1;
    }
};
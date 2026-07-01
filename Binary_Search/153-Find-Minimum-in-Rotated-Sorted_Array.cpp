class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans =nums[0];
        int start = 0; 
        int end = nums.size()-1;
       
        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[0] <= nums[mid]){
                //move right side becaouse element on left side is sorted
                start = mid +1;
            }else{
                    //(nums[0] > nums[mid]) => move left side because all the element on right side is sorted
                    ans = nums[mid];
                    end = mid -1;
            }
        }
        return ans;
    }
};
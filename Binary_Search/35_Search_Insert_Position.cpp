class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start =0; int end = nums.size()-1;
        int index=0;
        if(nums[nums.size()-1] < target){
            return nums.size();
        }
        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                index = mid;
                return index;
            }else if(nums[mid] > target){
                // store the index = mid but check for less greater element the target in left side
                index = mid;
                end = mid -1;
            }else{
                start = mid +1;
            }
        }
        return index;
    }
};
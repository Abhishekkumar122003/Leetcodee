//https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int search(vector<int>& nums, int target) {
     int ans_indx = -1;
     int left =0;
     int right = nums.size()-1;
     while(left <= right ){
        int mid = left + (right - left)/2;
        if(nums[mid] == target){
            ans_indx = mid;
            break;
        }
        if(nums[left] <= nums[mid]){
            //left side is sorted
            if(nums[left]<=target && nums[mid] > target){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }else{
            //right side of mid is sorted 
            if(nums[mid] < target && nums[right]>= target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
     }   
     return ans_indx;
    }
};
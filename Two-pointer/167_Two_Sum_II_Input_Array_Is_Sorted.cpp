class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st=0; 
        int ed=nums.size()-1;
        int first , last;
        while(st<ed){
            if(nums[st] + nums[ed] == target){
                first=st , last = ed;
                break;
            }else if(nums[st] + nums[ed] > target){
                ed--;
            }else{
                st++;
            }
        }
        vector<int> vec;
        vec.push_back(first+1);
        vec.push_back(last+1);
        return vec;
    }
};
//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int , int> mp;
       vector<int> vec;
       for(int i=0; i<nums.size(); i++){
        int x = target - nums[i];
        if(mp.find(x) != mp.end()){
            vec.push_back(i);
            vec.push_back(mp[x]);
            break;
            // return {mp[x] , i};
        }else{
            mp[nums[i]]=i;
        }
       }
        return vec;            
     }
};
//https://leetcode.com/problems/two-sum/
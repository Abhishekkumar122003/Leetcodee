class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        long long left=1 , right , ans;
        int n = arr.size();
        
        // first Sort the given UnSorted Array
        sort(arr.begin() , arr.right());
        
        right = arr[n-1] - arr[0];
        
        // Applying the logic of binary search
        while(left <= right){
            long long mid = left + (right - left)/2;
            long long Pos_of_Cow = arr[0] , Num_of_Cow=1;
            
            for(int i=1; i<n; i++){
                
                if(Pos_of_Cow + mid <= arr[i]){
                    Pos_of_Cow = arr[i];
                    Num_of_Cow++;
                }
              }
              //check is the number of Cow 
              if(Num_of_Cow >= k){
                  ans = mid;
                  left = mid +1;
              }else{
                  right = mid -1;
              }
        }
        return ans;
        
    }
};


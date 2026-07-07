class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        long long start=1 , end , ans;
        int n = arr.size();
        
        // first Sort the given UnSorted Array
        sort(arr.begin() , arr.end());
        
        end = arr[n-1] - arr[0];
        
        // Applying the logic of binary search
        while(start <= end){
            long long mid = start + (end - start)/2;
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
                  start = mid +1;
              }else{
                  end = mid -1;
              }
        }
        return ans;
        
    }
};


class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        int start=0 , end=0;
        int ans;
        for(int i=0; i<arr.size(); i++){
            start = max(start , arr[i]);
            end += arr[i];
        };
        while(start <= end){
            int mid = start + (end - start)/2;
            int wall_painted_by_painter=0;
            int total_painter_req_for_wall=1; // 1 painter is always has to paint the wall
            
            for(int i=0; i<arr.size(); i++){
                wall_painted_by_painter += arr[i];
                if(wall_painted_by_painter > mid){
                    wall_painted_by_painter = arr[i];
                    total_painter_req_for_wall++;
                }
            }
            
            if(total_painter_req_for_wall <= k){
                ans = mid;
                
                end = mid -1;
            }else{
                start = mid +1;
            }
        }
        return ans;
    }
};
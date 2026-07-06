// This will take Nlog(N)
class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size()){
            return -1; // if the number of books is less then the total number of thr Student
        }
        
        long long start=0, end=0;
        long long ans;
        for(int i=0; i<arr.size(); i++){
            start = max(start , (long long)arr[i]);
            end += arr[i];
        }
        // applying the logic to find the maximum pages
        while(start <= end){
            long long mid= start + (end - start)/2;
            long long pages=0;
            int count_student=1; 
            for(int i=0; i<arr.size(); i++){
                pages += arr[i];
                if(pages > mid){
                    count_student++;
                    pages = arr[i];
                }
            }
            if(count_student <= k){
                ans =  mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;
        
    }
};
class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int start_pointer=0; int end_pointer=arr.size()-1;
    while(start_pointer <= end_pointer){
        if(arr[start_pointer] == 1 && arr[end_pointer] == 0){
            swap(arr[start_pointer] , arr[end_pointer]);
            start_pointer++ , end_pointer --;
        }else if(arr[start_pointer] == 0 && arr[end_pointer] ==0){
            start_pointer++;
        }else if(arr[start_pointer] == 1 && arr[end_pointer] == 1){
            end_pointer--;
        }else if(arr[start_pointer] ==0 && arr[end_pointer] ==1){
            start_pointer++ , end_pointer--;
        }
    }
    
    }
};
//https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1
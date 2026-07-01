class Solution {
public:
    int mySqrt(int x) {
        long long start = 1, end = x;
        long long potential_sqrt;
        if(x<2){
            return x;
        }
        while(start <= end){
            long long mid = start + (end -start)/2;
            if(mid*mid == x){
                return mid;
            }else if(mid*mid < x){
                // first store this potential value
                potential_sqrt = mid;
                // then move to right side
                start =  mid +1; 
            }else {
                end = mid-1;
            }
        }
        return potential_sqrt;
    }
};
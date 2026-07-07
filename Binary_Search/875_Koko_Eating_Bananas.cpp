//brute force method

// for(int speed =1; speed<INT_MAX; speed++){
//     int time_taken=0;
//     //for accessing the piles
//     for(int i=0; i<n; i++){
//         // int Bananas = piles[i];
//         // time_taken  += ceil(Bananas/speed);
//         // whithout using that extra space called Bananas instead just doo 
//         time_take += piles[i]/speed; // that way you saved one variable space
//     }
//     if(time_taken <= givrn_time){
//         return speed;
//     }
// }



// ------------------- Optimize logic using Binary Search --------------------------//

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long  start=1, end=0 , speed;
        long long  n = piles.size(); // number of element
        for(long long  i=0; i<n; i++){
            end = max(end , (long long)piles[i]);
            // start += piles[i];
        }
        // start /= h;

        while(start <= end){
            long long  mid = start + (end - start)/2;
            long long  total_time=0;
            for(int i=0; i<n; i++){
                // total_time += ceil((long long)piles[i]/mid );
                total_time +=(long long) piles[i]/mid;
                if(piles[i]%mid){
                    total_time++;
                }
            }
            if(total_time <= h){
                speed = mid;
                end = mid -1;
            }else{
                start = mid +1;
            }
        }
        return speed;
    }
};
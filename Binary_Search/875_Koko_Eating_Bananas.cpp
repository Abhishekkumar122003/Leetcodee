//brute force method

for(int speed =1; speed<INT_MAX; speed++){
    int time_taken=0;
    //for accessing the piles
    for(int i=0; i<n; i++){
        int Bananas = piles[i];
        time_taken  += ceil(Bananas/speed);
    }
    if(time_taken <= givrn_time){
        return speed;
    }
}
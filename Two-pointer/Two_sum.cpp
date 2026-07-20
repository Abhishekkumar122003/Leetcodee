#include<iostream>
using namespace std;
int main(){
    int arr[5]= {2,7,11,15,27};
    int target=22;
    int index_1=-1 , index_2=-1;
    // for(int i=0; i<5;i++){
    //     bool flag=false;
    //     for(int j=i+1; j<5; j++){
    //         if(arr[i] + arr[j]== target){
    //             index_1=i;
    //             index_2=j;
    //             flag= true;
    //             break;
    //         }
           
    //     }
    //      if(flag== true){
    //             break;
    //         }
    // }

    int st=0 , ed=4;
    while(st<ed){
        if(arr[st] + arr[ed] == target){
            index_1=st;
            index_2=ed;
            break;
        }else if(arr[st] + arr[ed] > target){
            ed--;
        }else{
            st++;
        }
    }


    cout<<index_1<<" "<<index_2;
} 

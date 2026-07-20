#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,0,0,1,1,1,0};
    int start_pointer=0; int end_pointer=6;
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
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    };
}
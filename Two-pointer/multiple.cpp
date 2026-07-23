#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,7,8,11,25};
    int n=5;
    int target = 80;
    int left=0 , right=n-1;
    while(right<n){
    if(arr[left]* arr[right] == target){
        cout<<"yes";
        break;
    }else if(arr[left]* arr[right] > target){
        right--;
    }else{
        left++;
    }
    if(left == right){
        break;
    }
    }

}
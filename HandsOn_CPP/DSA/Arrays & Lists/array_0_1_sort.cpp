/*Given an array containing only 0, 1, and 2, 
sort it without using any built-in sort function. */

#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,0,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0,mid=0,high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
    cout<<"Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
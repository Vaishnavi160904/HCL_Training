/*Given an array and a window size k, 
use a deque to find the maximum element in each sliding window.*/

#include <iostream>
#include <queue>
using namespace std;

void Max_window(int arr[],int n,int k){
    deque<int> d;

    for (int i=0;i<n;i++){
        while(!d.empty() && d.front()<=i-k)
            d.pop_front();
        
        while(!d.empty() && arr[d.back()]<arr[i])
            d.pop_back();

        d.push_back(i);

        if(i>=k-1)
            cout<<arr[d.front()]<<" ";
    }
}
int main(){
    int arr[]={2,3,1,3,2,1,234,43,53,232};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    Max_window(arr, n, k);
}
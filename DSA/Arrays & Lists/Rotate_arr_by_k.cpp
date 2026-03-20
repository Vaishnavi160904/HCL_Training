/*Given an array and an integer k, 
rotate the array to the right by k steps efficiently.*/

#include <iostream>
using namespace std;

void rotate(int arr[],int s,int e){
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--; 
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    k=k%n;
    rotate(arr,0,n-1);
    rotate(arr,0,k-1);
    rotate(arr,k,n-1);

    cout<<"Rotated Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
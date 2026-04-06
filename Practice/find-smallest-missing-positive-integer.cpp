/*Find the Smallest Missing Positive Integer
Given an unsorted array of integers, find the smallest positive integer not present in the array in O(n) time and O(1) extra space.*/

#include <iostream>
#include <vector>
using namespace std;

int missing_num(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        while(arr[i]>0 && arr[i]<=n && arr[arr[i]-1]!=arr[i]){
            swap(arr[arr[i]-1],arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            return i+1;
        }
    }
    return n+1;
}
int main(){
    vector<int> arr;
    int n, x;
    cout << "Enter n: " << endl;
    cin >> n;

    cout << "enter elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    int result=missing_num(arr);
    cout<<"Output: "<<result;
}
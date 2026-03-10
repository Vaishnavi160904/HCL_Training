#include <iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3};
    float arr1[5]={1.234,3.4545,3.245};
    
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" "<<endl;
    }

    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;

    cout<<arr<<endl;
    cout<<&arr[0]<<endl;

}
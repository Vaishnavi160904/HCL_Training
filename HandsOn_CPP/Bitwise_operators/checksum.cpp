/*5.	Use XOR to compute a simple checksum for an array of integers.*/

#include <iostream>
using namespace std;

int main(){
    int arr[4]={3,4,1,4};

    int checksum=0;
    for (int i=0;i<4;i++){
        checksum^=arr[i];
    }
    cout<<"Check sum: "<<checksum<<endl;
}
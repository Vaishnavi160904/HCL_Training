/*Count Elements Greater Than Previous Average
Given an array of positive integers, return the number of elements that are strictly greater than the average of all previous elements. Skip the first element.*/

#include <iostream>
#include <vector>
using namespace std;

int countResponseTimeRegressions(vector<int> responseTimes)
{
    int n = responseTimes.size();
    if (n <= 1)
        return 0;

    long long sum = responseTimes[0];
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (responseTimes[i] > (double)sum / i)
        {
            count++;
        }
        sum += responseTimes[i];
    }

    return count;
}

int main(){
    vector<int> arr;
    int n,x;
    cout<<"Enter n: "<<endl;
    cin>>n;

    cout<<"enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }

    int result=countResponseTimeRegressions(arr);
    cout<<"Output: "<<result<<endl;

}
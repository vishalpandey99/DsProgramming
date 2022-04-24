#include<iostream>
using namespace std ;
 int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int j = 0; j<n ; j++)
    {
        cin>>arr[j];
    }
    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum;
    

 return 0;
}
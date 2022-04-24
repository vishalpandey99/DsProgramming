 #include<iostream>
 using namespace std;

 int getMin(int arr[], int n){
     int min = INT32_MAX;
     for (int i = 0; i < n; i++)
     {
         if (arr[i]<min)
         {
             min = arr[i];
         }
        
     }
     return min;
    

 }

 int getMax(int arr[], int n){
     int max = INT32_MIN;
     for (int i = 0; i < n; i++)
     {
         if (arr[i]>max)
         {
             max = arr[i];
       }
     }
    return max;
 }
 int main(){
    int size;
    cin>>size;
    int arr[10];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    //cout<<"Maximum value Is "<<getMax(arr,size)<<endl;
    cout<<"Minimun value Is "<<getMin(arr,size)<<endl;
   
     return 0;
 }

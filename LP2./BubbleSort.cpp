#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<ll>& arr, ll n)
{   
    for(int i = 1; i<n; i++) //for round 1 to n-1
    {
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) //process element till n-i th index
        {
            
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
           
    }
}

void solve(){
   ll n;
   cout<<"enter the no of elements in your array : ";
   cin>>n;

   cout<<"enter the elements one by one : ";
   vec(arr,n);

    bubbleSort(arr,n);

    loop(i,0,n)cout<<arr[i]<<" ";

};

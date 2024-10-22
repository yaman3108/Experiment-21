#include <iostream>
using namespace std;

int binary_search() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int mid;
    int low;
    int high;
    int n;
    cout<<"Enter the number to be searched"<<endl;
    cin>>n;
    low=0;
    high=9;
    while(low<=high){
        mid=(low+high)/2;
        if (arr[mid]<n){
            low=mid+1;
            
        }
        else if(arr[mid]>n){
            high=mid-1;
            
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int ans;
    ans=binary_search();
    if(ans!=-1){
        cout<<"Number found at position "<<ans+1<<endl;
    }
    else{
        cout<<"Number not found in the array"<<endl;
    }
    
}

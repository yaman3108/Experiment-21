// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int linear_search(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int n;
    cout<<"Enter the number to be searched"<<endl;
    cin>>n;
    for(i=0;i<10;i++){
        if(arr[i]==n){
            return i;
            
        }
    }
   
    return -1;
}

int main(){
    int ans=linear_search();
    if (ans!=-1){
        cout<<"Number found at position"<<ans<<endl;
    }
    else{
        cout<<"Number not found"<<endl;
    }
}

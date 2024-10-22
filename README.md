# Experiment 21



## Aim:
To study and implement Searching Algorithm


## Apparatus:
Vs Code, Github


## Theory:

## Linear search:

Linear search is a simple search algorithm used to find a specific element in an array or list. It works by sequentially checking each element of the array until the desired element is found or the end of the array is reached.

### How Linear Search Works:

1.Start from the first element of the array.
2.Compare the current element with the target element (the element to be searched).
3.If the current element matches the target, the search is successful, and the index of the element is returned.
4.If the current element does not match the target, move to the next element.
5.Repeat steps 2-4 until the target element is found or the end of the array is reached.
6.If the end of the array is reached and the target element is not found, the search is considered unsuccessful.


## Binary search:

Linear search is a simple search algorithm used to find a specific element in an array or list. It works by sequentially checking each element of the array until the desired element is found or the end of the array is reached.

### How Linear Search Works:

1.Start from the first element of the array.
2.Compare the current element with the target element (the element to be searched).
3.If the current element matches the target, the search is successful, and the index of the element is returned.
4.If the current element does not match the target, move to the next element.
5.Repeat steps 2-4 until the target element is found or the end of the array is reached.
6.If the end of the array is reached and the target element is not found, the search is considered unsuccessful.

## Code:

### Linear search: 
```
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
```
### Output:
<img width="303" alt="Screenshot 2024-10-22 at 2 03 26 PM" src="https://github.com/user-attachments/assets/b256c2f6-274a-4ec8-be6c-313ed3dc466c">


### Binary search:
```
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
```
### Output:
<img width="319" alt="Screenshot 2024-10-22 at 2 03 41 PM" src="https://github.com/user-attachments/assets/82a2609c-0e2a-4bae-b604-aa17f2132f2e">



## Conclusion:
This program helps us understand how different types of searching algorithms work in C++. 

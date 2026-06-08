#include<iostream>
using namespace std;

int binary_search(int arr[] , int size , int key){

    int start = 0;
    int end = size-1;

    

    while(start<=end){
        
        int mid = start+(end-start)/2;

        if(arr[mid] == key){
            cout<<key<<" found at index ";
            return mid;
        }else if(arr[mid] > key){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return -1;
}


int main(){

    int size;
    cout<<"Enter size: "<<endl;
    cin>>size;

    int arr[size] ; 

    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter value of key: "<<endl;
    cin>>key;
    
    cout<<binary_search(arr , size , key);
    return 0;
}
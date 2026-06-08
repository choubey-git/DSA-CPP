#include<iostream>
using namespace std;

int linear_search(int arr[] , int n , int key){
    for(int i=0 ; i<n ; i++){
        if(arr[i] == key){
            cout<<key<<" found at index ";
            return i;
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
    
    cout<<linear_search(arr , size , key);
    return 0;
}

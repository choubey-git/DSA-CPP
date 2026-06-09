#include<iostream>
using namespace std;

 void print_subarr(int arr[] , int size){
    for(int start=0 ; start<size ; start++){
        for(int end=start ; end<size ; end++){
            for(int k=start ; k<=end ; k++){
                cout<<arr[k];
            }
            cout<<",";
        }
        cout<<endl;
    }
 }

int main(){

    int size;
    cout<<"Enter size: "<<endl;
    cin>>size;

    int arr[size] ; 

    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }
    
    print_subarr(arr , size);
    return 0;
}
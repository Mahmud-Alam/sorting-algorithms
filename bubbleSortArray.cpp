#include<bits/stdc++.h>
using namespace std;

void displayArray(int n,int arr[]){
    cout<<endl<<"Array list: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, arr[100];
    cout<<"How many numbers: ";cin>>n;
    cout<<endl<<"Input numbers"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    displayArray(n,arr);
}

#include<bits/stdc++.h>
using namespace std;

int* bubbleSortArray(int n, int *arr){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

void displayArray(int n,int *arr){
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
    cout<<endl<<"After Bubble Sort"<<endl;
    displayArray(n,bubbleSortArray(n,arr));
}

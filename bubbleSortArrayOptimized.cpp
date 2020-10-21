#include<bits/stdc++.h>
using namespace std;

int* bubbleSortArrayOptimized(int n, int *arr){
    int flag = 0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag==0)              //Optimized: Only this if condition
            break;              //IF no two elements were swapped by inner loop, then no need to continue outer loop.
    }                          //because input array is already sorted, thats why no swapped is occur, so break;
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
    displayArray(n,bubbleSortArrayOptimized(n,arr));
}

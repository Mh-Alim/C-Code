#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int left,int mid,int right){

    // int mid = left + (right-left)/2;
    int leftArr[mid-left+1];
    int rightArr[right-mid];

    
    for(int i=0;i<mid-left+1;i++){
        leftArr[i] = arr[left+i];
    }
    for(int i=0;i<right-mid;i++){
        rightArr[i] = arr[mid+1+i];
    }

    int i=0;  // 0th index of the left subarray
    int j=0;  // 0th index of the right subarray
    int k=left;  // 0th index of our main array

    while(i<mid-left+1 && j<right-mid){
        if(leftArr[i]<rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        }
        else{
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while(i<mid-left+1){
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while(j<right-mid){
        arr[k] = rightArr[j];
        k++;
        j++;
    }

}


void mergeSort(int arr[],int begin,int end){

    if(begin>=end){
        return;
    }

    int mid = begin + (end-begin)/2;

    mergeSort(arr,begin,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,begin,mid,end);

}





int main(){


    int arr[] = { 12, 11, 13, 5, 6, 7 };
  
    mergeSort(arr, 0, 5);
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;





}
//Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
#include <iostream>
using namespace std;
int arr[100]={},newarr[100]={},arrsize,index;
void Placethearr(int arr[],int arrsize);
void Placenewarr(int arr[],int arrsize,int newarr[]);
void Printarr(int arr[],int arrsize);

int main(){
cout<<"Enter the array size\n";
cin>>arrsize;
cout<<"Enter the elements\n";
Placethearr(arr,arrsize);
Placenewarr(arr,arrsize,newarr);
Printarr(newarr,index);

return 0;
}



//This is the function we will solve the problem
void Placenewarr(int arr[],int arrsize,int newarr[]){
int newelement=1;
//if the inner loop is not equal to outer loop then multiple the element with "newelement"
for(int i=0;i<arrsize;i++){
    for(int j=0;j<arrsize;j++){
        if(j!=i){
        newelement*=arr[j];
                }
    if(j==arrsize-1){newarr[index]=newelement; index++;}
                              }
newelement=1;
}

}

//Array printer
void Printarr(int arr[],int arrsize){
for(int i=0;i<arrsize;i++){
    cout<<arr[i]<<" ";
}
}

//Array placer
void Placethearr(int arr[],int arrsize){
for(int i=0;i<arrsize;i++){
    cin>>arr[i];
}
}
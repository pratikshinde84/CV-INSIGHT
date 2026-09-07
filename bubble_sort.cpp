#include<iostream>
using namespace std;
int main(){
    int ar[]={12,32,100,0,-122,544,-2323};
    int n=7;
    cout<<"ith iteration ->";
        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(ar[j]>ar[j+1]){
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
        cout<<i<<"th iteration ->";
        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    }
}
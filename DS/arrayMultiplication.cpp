#include <iostream>

using namespace std;

int main()
{
    int s;
    cout<<"Enter the size of array"<<endl;
    cin>>s;
    
    int arr[s],b[s];
    
    for(int i =0; i < s; i++){
        cin>>arr[i];
    }
    
    
    for(int i =0; i < s; i++){
        b[i] = 1;
    }
    
    for(int i=0; i < s; i++){
        for(int j=0;  j < s; j++){
            if(j != i){
               b[i] *= arr[j]; 
            }
        }
    }
    
    for(int i =0; i < s; i++){
        cout<<b[i]<<" ";
    }
}
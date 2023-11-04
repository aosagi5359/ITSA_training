#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int len = 0;
    while(len < 100){
        cin>>arr[len];
        len++;
        char nextchar = cin.get();
        if(nextchar == '\n') break;
    }
    for(int i = len - 1; i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
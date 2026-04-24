#include <iostream>
using namespace std;
int main(){
    int size = 10,min = 0,max = 0;
    int arr[size] = {52,42,65,62,74,23,85,34,77,67};
    min = arr[0],max = arr[0];
    for(int i = 0; i<size;i++){
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << min << endl;
    cout << max << endl;
    return 0;
}
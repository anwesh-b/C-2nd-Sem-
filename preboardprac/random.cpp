#include <iostream>
using namespace std;

int main(){
    int i,array[10]={1,2,3,4,5,6,7,8,9,0};
    int* ptr[10];
    for(i=0;i<10;i++){
        ptr[i]=&array[i];
    }
    // ptr[0]=&array[0];
    for(i=0;i<10;i++){
        cout<<ptr[i]<<endl;
    }
    return 0;
}
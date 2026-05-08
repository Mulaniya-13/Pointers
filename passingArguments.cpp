#include<iostream>
using namespace std;
//Pass By Value
// void changeA(int param){
//     param = 20;
//     cout<<param<<endl;
// }

//Pass By Reference using pointer
// void changeA(int *ptr){
//     *ptr = 20;
//     cout<<*ptr<<endl;
// }

//Pass By Reference using reference variables
void changeA(int &b){
    b = 20;
    cout<<b<<endl;
}

int main(){
    int a=10;
    changeA(a);
    cout<<a<<endl;
    return 0;
}
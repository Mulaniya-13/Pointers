#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr = &a;

    int **pptr = &ptr;

    float b=5;
    float *ptr2=&b;

    cout<<&b<<"="<<ptr2<<endl;
    cout<<&a<<"="<<ptr<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr2)<<endl;
    cout<<&ptr<<"="<<pptr<<endl;
    return 0;
}
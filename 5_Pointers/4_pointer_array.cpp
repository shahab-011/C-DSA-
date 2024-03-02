#include<iostream>
using namespace std;
int main(){
    int arr[10]={23,122,41,67};
    cout<<"Address of first memory block : "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block : "<<&arr[0]<<endl;

    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<(*arr)+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;
    
    //  arr[i] = *(arr+i);
    //       or
    //  i[arr] = *(i+arr);

    int temp[10] = {1,2};
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;

    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

    int a[20]={1,2,3,4};
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    int *p = &a[0];
    cout<<"1:"<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl; 

    int ary[10];
    //  ary = ary + 1;  -> (error)
    int *ptrr = &ary[0];
    cout<<ptrr<<endl;
    ptrr = ptrr + 1 ;
    cout<<ptrr<<endl;




return 0;
}
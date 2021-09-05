#include<iostream>
using namespace std;

int main(){
    int a =0, b=1,number,nextNumber;
    cin>>number;
    for(int i=0;    i<=number;    i++){
        for(int j=0;    j<i;    j++){
            cout << a <<" ";
            nextNumber = a+b;
            a=b;
            b=nextNumber;
        }
        cout<<"\n";
    }
    return 0;
}

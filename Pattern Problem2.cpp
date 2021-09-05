#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    for (int i=2;   i<=number;  i++) {
        for(int j=0;    j<i;    j++){
            if(i>2){
                {
                    if(j == 0  || j == i-1){
                        cout<<i-1<<" ";
                    }else{
                       cout<<"0 ";
                    }
                    continue; 
                }
            }
            cout <<"1 ";
        }
        cout<<"\n";
    }
    return 0;
}

/*
11
202
3003
40004
*/

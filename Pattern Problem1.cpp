#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    for (int i=0;   i<=number;  i++) {
        for(int j=0;    j<i;    j++){
            if(i>2){
                if(i%2!=0){
                    cout<<"1 ";
                    continue;
                }else{
                    if(j == 0  || j == i-1){
                        cout<<"1 ";
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

#include<iostream>
using namespace std;

int main(){
    int number,spaceTime,firstHalf;
    cin>>number;
    
    spaceTime = (number-1)*2;
    
    for(int i=1;    i<=number;   i++){
        for(int j=1;    j<=spaceTime;   j++){
            cout<<' ';
        }
        
        firstHalf =i;
        for(int j=1;    j<=i;    j++){
            cout<<firstHalf<<' ';
            firstHalf++;
        }
        firstHalf--;
        for(int j=i-1;    j>=1;    j--){
            firstHalf-=1;
            cout<<firstHalf<<' ';
        }
        
        spaceTime-=2;
        cout<<"\n";
    }
   
    
    return 0;
}


/*
OutPut
Take N (number of rows), print the following pattern (for N = 4). 
                           1 
                         2 3 2
                       3 4 5 4 3
                     4 5 6 7 6 5 4
*/

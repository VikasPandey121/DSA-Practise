#include <iostream>
using namespace std;

int main()
{   int num,notMultiple;
    int sol=0,n=1;
    cin>>num>>notMultiple;
    while(sol<num){
        if(((3*n)+2)%notMultiple!=0){
            std::cout <<((3*n)+2)  << std::endl;
            sol++;
        }
        n++;
        
    }
    
    return 0;
}

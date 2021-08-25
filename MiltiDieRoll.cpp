#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void DieRoll(int &number){
    
    {
            int roll   = rand() % 6 + 1;
            cout<<roll << std::endl;
            number--;
        }

}

void MultyDieRoll (int number){

     std::cout <<" The random number are: "<<"\n";
     while(number>0){
         DieRoll(number);
     } 
    
}



int main()
{
    int number;
    cout<<" Enter the Number ";
    cin>>number;
    MultyDieRoll(number);
    return 0;
}


//Square root of a number
#include <iostream>
using namespace std;

int main()
{
    int number =5, precision = 3;
    
    float ans =0.00; 
    float increament = 1.0;
    for(int decimal= 0; decimal<precision; decimal++){
        while(ans * ans <= number){
        ans = ans + increament;
        }
        ans = ans - increament;
        increament = increament/10;
    }
    
    std::cout << ans << std::endl;

    return 0;
}


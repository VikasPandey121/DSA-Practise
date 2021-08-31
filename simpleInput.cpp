#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    int arr[n];
    std::cout << "Please Enter the number of input required" << std::endl;
    cin>>n;
    for (int i = 0; i <n; i++) {
        cin>>arr[i];
    }
    
    for(int i = 0; i <n; i++){
        if((sum+arr[i])<0){
            for(int j = 0; j <i; j++){
            cout<<arr[j]<<"\n";
            }
            break;
        }else{
            sum+=arr[i];
        }
    }
    return 0;
}

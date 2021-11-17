#include <iostream>
#include <string>
#include <numeric>

#define GetNum(numbertype)    \
        int n;\
        std::cout<<"enter a " numbertype " number: ";\
        std::cin >> n ;

//
// using namespace std;

void dec2bin(){

    GetNum("decimal")
    std::string result = "";
    do
    {
        result =  std::to_string(n%2) + result ;
        n = n/2;
    } while (n>0);
    std::cout << "result: " << result << "\n";
}
void bin2dec(){
    
    GetNum("binary")

    int result = 0;
    int p = 1; 
    while (n!=0)
    {
        result += (n%10)*p;
        p *= 2;
        n /= 10;
    }   
    std::cout << "result: " << result << "\n";
}
void dec2hex(){
    GetNum("decimal")
    std::cout << "result:" <<std::hex << n << "\n";
}

int main(){
    
    int choice;

    std::cout << "1-decimal to binary \n";
    std::cout << "2-binary to decimal\n";
    std::cout << "3-decimal to Hex\n";
    std::cout << "choose a program: ";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        dec2bin();
        break;
    case 2:
        bin2dec();
        break;
    case 3:
        dec2hex();
        break;
    default:
        break;
    }
    char* e;
    std::cin >> e;
    return 0;
}

#include <iostream>

using namespace std;

void dec2bin(){

    int n;
    cout<<"enter a decimal number: ";
    cin >> n ;

    string result = "";
    do
    {
        result =  to_string(n%2) + result ;
        n = n/2;
    } while (n>0);
    cout << "result: " << result << endl;
}
void bin2dec(){
    
    int n;
    cout<<"enter a binary number: ";
    cin >> n ;

    int result = 0;
    int p = 1; 
    while (n!=0)
    {
        result += (n%10)*p;
        p *= 2;
        n /= 10;
    }   
    cout << "result: " << result << endl;
}
int main(){
    
    int choice;

    cout << "1-decimal to binary \n2-binary to decimal\nchoose a program: ";
    cin >> choice;
    if(choice==1){
        dec2bin();
    } else if (choice==2)
    {
        bin2dec();
    }
    
}
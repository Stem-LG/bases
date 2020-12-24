#include <iostream>

using namespace std;

string dec2bin(int n){
    string result = "";
    do
    {
        result =  to_string(n%2) + result ;
        n = n/2;
    } while (n>0);

    return result;
}
int main(){
    int n;
    cout << "enter your decimal number: "; 
    cin >> n;
    cout << "result: " << dec2bin(n) << endl;

}
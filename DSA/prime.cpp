//-- find the first multiple of number -- //
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the numbers\n";
    cin >> n;
    if(n%2==1){
        cout << "prime number\n";
    }
    else{
        cout << "non prime number\n";
    }
    return 0;
}
//--Check a number is prime or not --//

#include<iostream>
using namespace std;

int main(){
    int n,i;
    bool isPrime =true;
    cout << "enter the numbers\n";
    cin >> n;
    for(i=2; i<=n-1; i++){
        if(n%i == 0){
           isPrime = false;
        }

     }
    if(isPrime == true){
     cout << "prime \n";
    }else{
        cout << "non prime\n";

    }
 return 0;
}
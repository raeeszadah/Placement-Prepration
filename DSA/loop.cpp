//--s sum of all odd numbers from 1 to n --//
#include<iostream>
using namespace std;
int main(){
    int i,n,oddSum = 0;
    cout <<"enter the numbers\n";
    cin >> n ;
    for ( i=0; i<=n; i++) {
        if(i%2 !=0){
              cout << i <<endl;
              oddSum += i;
             
        }
    }
      cout <<"odd Sum is " <<oddSum <<endl;
    return 0;

}

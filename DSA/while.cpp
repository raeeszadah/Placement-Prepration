//--s sum of all odd numbers from 1 to n by using while loop --//

#include<iostream>
using namespace std;
int main(){
    int i,n,oddSum = 0;
    cout <<"enter the numbers\n";
    cin >> n ;
    while(i<=n){
        if(i % 2 != 0){
             cout << i <<endl;
              oddSum += i;
        }
        i++;
    
    }
     cout <<"odd Sum is " <<oddSum <<endl;
    return 0;
}

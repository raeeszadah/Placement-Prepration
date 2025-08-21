//---find charecter loweecase or upercase--[ according to ASCII values (97-122 low) and (65-90 up) ] ---//

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "enter char\n:";
    cin >> ch;
    if(ch>=65 && ch<=90){
        cout << "uppercase\n";
    }
    else{
        cout << "lowercase\n";
    }
    return 0;
}
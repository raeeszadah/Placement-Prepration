//---find charecter loweecase or upercase--//

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "enter char\n:";
    cin >> ch;
    if(ch>='a' && ch<='z'){
        cout << "lowercase\n";
    }
    else{
        cout << "uppercase\n";
    }
    return 0;
}
//-- contineous charecter pattern --//

#include<iostream>
using namespace std;

int main(){
    int i ,j,n;
    char ch='A';
    cout<<"enter the number of patterns\n";
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<< ch <<" ";
             ch=ch+1;
        }
        cout<< endl;
    }
    return 0;

}
//-- triangle numberal patterns --//
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the number of numberal pattern\n";
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    

    return  0;
}
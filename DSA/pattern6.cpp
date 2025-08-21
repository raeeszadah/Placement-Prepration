// numberal pattern
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the number of numberal pattern\n";
    cin >> n;
    for(i=0;i<n;i++){
        for(j=1;j<=i+1;j++){
            cout<<j <<" ";
            
        }
        
        cout<<endl;
    }
    

    return  0;
}
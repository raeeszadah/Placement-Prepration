//-- contineous with starting all line A triangle charcter patterns --//
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    
    cout<<"enter the number of numberal pattern\n";
    cin >> n;
    for(i=0;i<n;i++){
        char ch ='A';
        for(j=1;j<=i+1;j++){
           cout<<ch <<" ";
           ch = ch+1;
            
        }
         
        cout<<endl;
    }
    

    return  0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int t;
cin>>t;
for(int jj=0;jj<t;jj++){

int n;
cin>>n;
int sum = 0;
for(int i=0;i<496;i++){
    for(int j=0;j<496;j++){
        if(2020*i+2021*j==n){
            sum++;
            break;
        }
    }
}
if(sum==0){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
    return 0;
}

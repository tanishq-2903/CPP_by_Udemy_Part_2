#include<iostream>
using namespace std;
int main(){
    int j,i;
    cout<<"enter the value of i :"<<endl;
    cin>>i;
    j=2*i++ + 2*i++;
    cout<<i<<"  "<<j<<endl;
    return 0;
}
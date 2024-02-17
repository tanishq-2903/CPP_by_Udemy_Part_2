#include<iostream>
using namespace std;
typedef float money;
int main(){
    money net,basic,perAllowences,perDeduction;
    cout<<"enter the amount of basic,allowences,deduction"<<endl;
    cin>>basic>>perAllowences>>perDeduction;
    net=basic+basic*perAllowences/100-basic*perDeduction/100;
    cout<<"Net Salary :"<<net<<endl;
    return 0;
}
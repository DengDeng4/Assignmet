#include <iostream>
using namespace std;
int main(){
    int age;
    cout<< "Please enter the age:";
    cin>>age;
    if (age>=4){
        cout<<"Admit to school";
    }
    else{
        cout<< "Declined! Minimum age not reached"<<endl;

    }
    return 0;
}
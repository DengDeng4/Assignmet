#include <iostream>
using namespace std;
int main(){
    int age;
    cout<< "Please enter the age:";
    cin>>age;

    // Using tenary operator
    cout<<"using tenary operator "<< endl;
    string message=(age>=4)? "Admit to school." : "Declined! Minimum age not reached. ";
    cout<<message<<endl;
    return 0;
}
#include <iostream>
using namespace std;

int main (){

// local variables 
string childName, interest;
    int age;

// age input
    cout << "please enter the childs name:";
    cin >> childName;
    cout << "please enter your age:";
    cin >> age;

if (age >= 4 && age <=10){
    cout << "Please enter the childs interest";
    cin >> interest;
if (interest == "Football"){
     // first nested if
    cout << childName << "Has been Admitted to the Football team";
    }
else if (interest == "Art" ) // second nested if
{
    cout << childName << "Has been assigned to Art Group";
}
else
{
    cout << "Admit to other group";
}
}else 
    {
    cout << " Admission Unsuccessful. Age is Invalid";
}


return 0;
}
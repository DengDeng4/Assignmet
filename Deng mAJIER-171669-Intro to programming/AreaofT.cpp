#include <iostream>
using namespace std;

int main (){
    double area;
    double perimeter;
    double base; 
    double height;
    double hypotenuse;

    cout<< "enter the base, height and hypotenuse of the triangle ";
    cin>> base; 
    cin >> height; 
    cin >> hypotenuse;

    area = 0.5*base*height;
    perimeter = base+height+hypotenuse;
    
    cout << "The area is "<< area;
    cout << "The perimeter is "<< perimeter;

    return 0; 
}

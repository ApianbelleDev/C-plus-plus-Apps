#include <iostream>
#include <string>
using namespace std;

int main() {
       //sides of the room
       double length;
       double width;
       string exit;
       cout << "Please enter the length of the room: ";
       cin >> length;
       cout << "\n" << "Please enter the width of the room: ";
       cin >> width;

       double area = length * width;

       //output the area
       cout << area;
       cout << "\n" << "Press e then enter to exit: \n";
       cin >> exit;


       
	return 0;
}
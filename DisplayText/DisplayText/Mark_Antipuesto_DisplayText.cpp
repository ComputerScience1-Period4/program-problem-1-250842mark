/*
Mark Antipuesto - 9/21/17 Period 4
Display Text
Introduction to C++
Printing out statements to the console from code
*/

//Libraries
#include <iostream> // cout cin endl << >>
#include <conio.h> // pause() fun access to _getch() and _kbhit()	
//Namespaces
using namespace std;
//Functions
void pause() {
	cout << "Press any key to continue";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//Main
void main() {
	char fore = '4';
	//Display Text "Mark Antipuesto 4 Hello World"
	cout << "Mark Antipuesto" << endl;
	cout << fore << endl;
	cout << "Hello World" << endl;
	pause();
	return;
}
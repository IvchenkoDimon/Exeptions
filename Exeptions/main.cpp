#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	try
	{
		throw "Fario";
	}
	catch (int error)
	{
		cout << "Error#" << error << endl;
	}

}
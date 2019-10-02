#include <iostream>
using namespace std;

//#define EXEPTIONS_SYNTAX
//#define DIVIZION_BY_ZERO_EXEPTION
#define FACTORIAL
long long int factorial(int n);
void main()
{
	setlocale(LC_ALL, "");
#ifdef EXEPTIONS_SYNTAX


	try
	{
		throw "Kakoy-to Fario ";
		throw 123;
		cout << "That's OK in try block." << endl;
	}
	catch (int error)
	{
		cout << "Error#" << error << endl;
	}
	catch (const char* error)
	{
		cerr << "Error: " << error << endl;
	}
	catch (...)
	{
		cerr << "Something happened :=)" << endl;
	}

	cout << "Buy!" << endl;
#endif // EXEPTIONS_SYNTAX
#ifdef DIVIZION_BY_ZERO_EXEPTION
	int a = 20;
	int b = 0;
	try
	{
	cout << a / b << endl;
	}
	catch (std::exception& e)
	{
		cerr << e.what() << endl;
	}
	catch (...) //deprecated - не рекомендуется для использования.
	{
		cerr << "Error: Integer division by zero." << endl;
	}
	// Ассемблерная вставка - можно обрабатывать любые исключения
	/*__asm
	{
		
	}*/
#endif // DIVIZION_BY_ZERO_EXEPTION
#ifdef FACTORIAL
	int n;
	cout << "Input number to find factorial: "; cin >> n;
	try
	{
		cout << n << "! = " << factorial(n) << endl;
	}
	catch (const std::exception& e)//e - сокращенно от error;
	{
		cerr << e.what() << endl;
	}

#endif // FACTORIAL
	   
}

long long int factorial(int n)
{
	if (n > 20)throw overflow_error("Too large namber!");//exception("Error: too large number, 20 maximum!");
	long long int f = 1; //Factorial;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
		cout << i << "! = ";
		cout << f << endl;
	}
	return f;
}
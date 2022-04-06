#include <iostream>
using namespace std;

void Euclides(int a, int b, int* d, int* x, int* y)
{
    long x1, y1;
    if (b == 0)
    {
        *d = a;
        *x = 1;
        *y = 0;
    }
    else
    {
        Euclides(b, a % b, d, x, y);
        x1 = *x;
        y1 = *y;
        *x = y1;
        *y = x1 - (a/b) * y1;
    }
    
}

void Imprimir(int a, int b, int* d, int* x, int* y)
{
    cout << endl;
    cout << endl;
	cout << "ax + by = d" << endl;
	cout << "29x + 11y = 1" << endl;
	cout << " " << a << "(" << *x << ")" << " + " << b << "(" << *y << ")" << " = " << *d << endl;
	cout << "x = " << *x << " || " << " y = " << *y << " || " << " d = " << *d << endl; 
}

int main()
{
    int a;
    int b;
    int d;
    int x;
    int y;
    cout << "Digite el numero de a: ";
    cin >> a;
    cout << "Digite el numero de b: ";
    cin >> b;
    Euclides(a, b, &d, &x, &y);
    Imprimir(a, b, &d, &x, &y);

    system("pause");
    return 0 ;
}
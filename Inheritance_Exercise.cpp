#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

class Simple_Calculator
{
protected:
    int a;
    int b;

public:
    void Set_Input(int x, int y)
    {
        a = x;
        b = y;
    }
    void Get_Output();
};

void Simple_Calculator ::Get_Output()
{
    char Operation;
    cout << "User typed " << a << " and " << b << " as input " << endl;
    cout << "What operation you wanna perform ?" << endl;
    cin >> Operation;
    if (Operation == '+')
    {
        cout << "Addition Result : " << (a + b) << endl;
    }
    else if (Operation == '-')
    {
        cout << "Subtraction Result : " << (a - b) << endl;
    }
    else if (Operation == '*')
    {
        cout << "Multiplication Result : " << (a * b) << endl;
    }
    else if (Operation == '/')
    {
        cout << "Division Result : " << (a / b) << endl;
    }
    else
        cout << "You have entered a wrong choice! " << endl;
}

class Scientific_Calculator
{
protected:
    int x;

public:
    void Set_Value(int a)
    {
        x = a;
    }

    void Get_Value();
};

void Scientific_Calculator ::Get_Value()
{
    int operation;
    cout << "What operation you wanna perform? " << endl;
    cout << "Press 1 for Trigo , 2 for log , 3 for exponential,4 for square root" << endl;
    cin >> operation;
    if (operation == 1)
    {
        char type;
        cout << "For Sin, Cos or Tan? " << endl;
        cout << "'S' for sin , 'C' for cos , 'T' for tan " << endl;
        cin >> type;

        if (type == 's' || type == 'S')
        {
            cout << "Sine Value of x is " << sin(x) << endl;
        }
        else if (type == 'c' || type == 'C')
        {
            cout << "Cosine Value of x is " << cos(x) << endl;
        }
        else if (type == 't' || type == 'T')
        {
            cout << "Tangent Value of x is " << tan(x) << endl;
        }
        else
            cout << "Wrong Choice" << endl;
    }

    else if (operation == 2)
    {
        cout << "The log base 10 value of x is " << log10(x) << endl;
    }

    else if (operation == 3)
    {
        cout << "The exponential result is " << exp(x) << endl;
    }

    else if (operation == 4)
    {
        cout << "The square root of x is " << sqrt(x) << endl;
    }

    else
        cout << "You entered a wrong choice!" << endl;
}

class Hybrid_Calculator : public Simple_Calculator, public Scientific_Calculator
{
};

int main()
{
    Hybrid_Calculator Calc;
    Calc.Set_Input(2, 4);
    Calc.Get_Output();
    cout << "For Scientific!" << endl;
    Calc.Set_Value(10);
    Calc.Get_Value();

    return 0;
}
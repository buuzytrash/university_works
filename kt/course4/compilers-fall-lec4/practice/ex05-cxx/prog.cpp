#include <iostream>

class ExceptionEx
{
public:
    ExceptionEx() { std::cout << "Hi from construction" << std::endl; }
    ~ExceptionEx() { std::cout << "Hi from destruction" << std::endl; }
};

int bar(int x)
{
    ExceptionEx a, b;
    if (x == 1)
        throw 1;
    if (x == 2)
        throw 3.14;

    return x;
}

int foo(int x)
{
    int y;
    try
    {
        y = bar(x);
    }
    catch (int e)
    {
        y = e;
    }
    return y;
}

int main(int argc, char *argv[])
{
    std::cout << foo(argc) << std::endl;
}
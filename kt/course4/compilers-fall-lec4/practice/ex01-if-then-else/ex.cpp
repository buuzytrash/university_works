#include <iostream>

int main(int argc, char **argv)
{

    std::cout << "Before";

    if (argc > 2)
    {
        std::cout << "True";
    }
    else 
    {
        std::cout <<"False";
    }

    std::cout << "After";
    return 0;
}
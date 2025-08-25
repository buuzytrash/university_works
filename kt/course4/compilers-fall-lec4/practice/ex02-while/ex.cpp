#include <iostream>

int main(int argc, char **argv)
{

    std::cout << "Before";

    while (argc > 2)
    {
        std::cout << "Body";
    }
    std::cout << "After";
    return 0;
}
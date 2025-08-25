#include <iostream>

int main(int argc, char **argv)
{

    std::cout << "Before";

    for (int i = 0; i < argc; i++)
    {
        std::cout << "Body";
    }
    std::cout << "After";
    return 0;
}
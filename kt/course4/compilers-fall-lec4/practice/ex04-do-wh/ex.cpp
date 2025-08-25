#include <iostream>

int main(int argc, char **argv)
{

    std::cout << "Before";

    do
    {
        std::cout << "Body";
    } while (argc > 2);

    std::cout
        << "After";
    return 0;
}
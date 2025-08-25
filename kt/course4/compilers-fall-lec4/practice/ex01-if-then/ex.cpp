#include <iostream>

int main(int argc, char **argv)
{

    std::cout << "Before";

    if (argc > 2)
    {
        std::cout << "True";
        if (argc < 5)
        {
            std::cout << "True 2";
        }
    }

    std::cout << "After";
    return 0;
}
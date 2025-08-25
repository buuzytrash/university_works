#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    std::string filename;
    if (argc > 1) {
        filename = argv[1];
    } else {
        std::cout << "Enter the path to the file: ";
        std::cin >> filename;
    }

    std::ifstream file(filename);
    if (file.is_open()) {
        std::cout << "File contents:" << std::endl;
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
    std::cin.sync();

    std::cout << "Press any key to exit." << std::endl;
    std::cin.get();
    return 0;
}
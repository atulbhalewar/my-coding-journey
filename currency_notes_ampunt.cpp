#include <iostream>

int main() {
    int amount, hundreds, twenties, tens;
    char choice;

    do {
        std::cout << "Enter the amount: ";
        std::cin >> amount;

        hundreds = amount / 100;
        amount %= 100;

        twenties = amount / 20;
        amount %= 20;

        tens = amount / 10;
        amount %= 10;

        std::cout << "100 Rs notes: " << hundreds << std::endl;
        std::cout << "20 Rs notes: " << twenties << std::endl;
        std::cout << "10 Rs notes: " << tens << std::endl;

        std::cout << "Using switch case statements:\n";

        switch (hundreds) {
            case 0:
                break;
            case 1:
                std::cout << "100 Rs note: 1\n";
                break;
            default:
                std::cout << "100 Rs notes: " << hundreds << "\n";
                break;
        }

        switch (twenties) {
            case 0:
                break;
            case 1:
                std::cout << "20 Rs note: 1\n";
                break;
            default:
                std::cout << "20 Rs notes: " << twenties << "\n";
                break;
        }

        switch (tens) {
            case 0:
                break;
            case 1:
                std::cout << "10 Rs note: 1\n";
                break;
            default:
                std::cout << "10 Rs notes: " << tens << "\n";
                break;
        }

        std::cout << "Do you want to enter another amount? (Y/N): ";
        std::cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

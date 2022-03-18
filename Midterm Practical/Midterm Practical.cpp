// Midterm Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    std::cout << "Quick question.\n";
    std::cout << "How many days are in January?\n";
        std::cout << "A.28\n";
        std::cout << "B.32\n";
        std::cout << "C.30\n";
        std::cout << "D.31\n";
        char answer;
        std::cin >> answer;
        if (answer == 'D')
        {
            std::cout << "Not bad! Good work.";
        }
        else
        {
            std::cout << "Wrong! Try Again";
        }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

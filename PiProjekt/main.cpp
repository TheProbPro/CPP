#include <iostream>
#include "Pi.h"

using namespace std;

int main()
{
    // Pi opgave

        Pi pi;
        int n = 0;
        std::cout << "enter value n" << std::endl;
        std::cin >> n;
        std::cout << pi.gregoryLeibniz(n) << std::endl;
        std::cout << pi.calculate() << std::endl;

    return 0;
}

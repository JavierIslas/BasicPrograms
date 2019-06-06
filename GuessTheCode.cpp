#include <iostream>

int main()
{
    int a = rand() % 9 + 1;
    int b = rand() % 9 + 1;
    int c = rand() % 9 + 1;
    int sum = a + b + c;
    int mul = a * b * c;
    std::cout << "Guess The Code:" << std::endl;
    std::cout << "The sum of the 3 digits on the number is: " << sum << std::endl;
    std::cout << "The multiplication of the 3 digits on the number is :" << mul << std::endl;
    int resultA;
    int resultB;
    int resultC;
    std::cin >> resultA;
    std::cin >> resultB;
    std::cin >> resultC;
    if (resultA == a && resultB == b && resultC == c)
    {
        std::cout << "Correct";
    }
    else std::cout << "Wrong";

    return 0;
}
#include <iostream>
#include <ctime>

void Initialize(int* SUMptr, int* MULptr, int Difficulty)
{
    int a = rand() % Difficulty + Difficulty;
    int b = rand() % Difficulty + Difficulty;
    int c = rand() % Difficulty + Difficulty;
    *SUMptr = a + b + c;
    *MULptr = a * b * c;
}

void Introduction(int L, int S, int M)
{
    std::cout << "Guess The Level " << L << " Code:" << std::endl;
    std::cout << "The sum of the 3 digits on the number is: " << S << std::endl;
    std::cout << "The multiplication of the 3 digits on the number is :" << M << std::endl;
    std::cout << "Enter the Code: ";
}

void ReadInput(int* inSUMptr, int* inMULptr)
{
    int inputA, inputB, inputC;
    std::cin >> inputA >> inputB >> inputC;
    *inSUMptr = inputA + inputB + inputC;
    *inMULptr = inputA * inputB * inputC;
}

bool CheckCondition(int inSum, int inMul, int S, int M)
{
    if (inSum == S && inMul == M)
    {
        std::cout << "Correct" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Wrong. " << std::endl;
        return false;
    }
}

bool GameLoop(int Difficulty)
{
    int sum, mul, inputSum, inputMul;
    Initialize(&sum, &mul, Difficulty);
    Introduction(Difficulty-1, sum, mul);
    ReadInput(&inputSum, &inputMul);
    if(CheckCondition(inputSum, inputMul, sum, mul))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Level = 2;
    int Life = 3;
    srand(time(NULL));
    while (Life)
        if (GameLoop(Level))
        {
            ++Level;
        }
        else
        {
            std::cout << "Lifes = " << --Life << std::endl;
        }
        
    std::cout << "Max level reached: " << Level-1;
    return 0;
}
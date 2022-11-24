#ifndef ARRAYINT100_H
#define ARRAYINT100_H
#include <array>

class ArrayInt100
{
public:
    ArrayInt100();
    void fillArray(unsigned int a, unsigned int b);
    int findMaxNumber();
    void printArray();
    int countOccurrencesOf(int c);
    void swapContents();

private:
    std::array<int, 100> mArray;
};

#endif // ARRAYINT100_H

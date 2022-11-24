#ifndef DICEROLL_H
#define DICEROLL_H
#include <array>

class DiceRoll
{
public:
    DiceRoll();
    void Roll(unsigned int n);
    void createHistogram(unsigned int s);

private:
    std::array<unsigned int, 5*6+1> mHistogram{};
};

#endif // DICEROLL_H

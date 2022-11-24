#ifndef GAMESHOW_H
#define GAMESHOW_H


class GameShow
{
public:
    GameShow();
    GameShow(unsigned int guess, unsigned int price);
    bool swap();
    void setPrice(unsigned int price);
    void setGuess(unsigned int guess);

private:
    unsigned int mPrice;
    unsigned int mGuess;

};

#endif // GAMESHOW_H

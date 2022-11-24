#include "Pi.h"
#include <cmath>
#include <iostream>

Pi::Pi()
{
 mPi = 0;
}

double Pi::gregoryLeibniz(int n){
for (int i=0; i < n; i++) {
    mPi += pow((-1),i) * 1/(2*i+1);
}
return mPi;
}

double Pi::calculate(){
    mPi = 4 * mPi;
    return mPi;
}

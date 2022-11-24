#include "Vector.h"

Vector::Vector(int n)
{
    if(n > 0)
        mElems = new double[n];

    mSize = n;
}

Vector::Vector(const Vector& v)
{
    if(v.mSize > 0)
        mElems = new double[v.mSize];

    mSize = v.mSize;

    for(int i = 0; i < mSize; i++){
        mElems[i] = v.mElems[i];
    }
}

Vector::~Vector()
{
    if(mSize > 0)
    delete[] mElems;
}

Vector& Vector::operator=(const Vector& rhs){
    if(mSize != rhs.mSize && mSize > 0)
        delete[] mElems;

    if(mSize != rhs.mSize && rhs.mSize > 0)
        mElems = new double[rhs.mSize];

    mSize = rhs.mSize;

    for(int i = 0; i < mSize; i++){
        mElems[i] = rhs.mElems[i];
    }
    return *this;
}

bool Vector::operator==(const Vector &rhs){
    if(mElems != rhs.mElems)
        return false;

    for(int i = 0; i < mSize; i++){
        if(mElems[i] != rhs.mElems[i])
            return false;
    }
    return true;
}

bool Vector::operator!=(const Vector &rhs){
    if(mElems == rhs.mElems)
        return false;
    for(int i = 0; i < mSize; i++){
        if(mElems[i] == rhs.mElems[i])
            return false;
    }
    return true;
}

Vector Vector::operator+(const Vector& rhs){
    Vector z(mSize);
    if(mSize == rhs.mSize){
        for(int i = 0; i < mSize; i++)
            z.mElems[i] = mElems[i] + rhs.mElems[i];
}
    return z;
}

Vector Vector::operator-(const Vector &rhs){
    Vector z(mSize);
    if(mSize == rhs.mSize){
        for(int i = 0; i < mSize; i++)
            z.mElems[i] = mElems[i] - rhs.mElems[i];
}
    return z;
}

Vector& Vector::operator+=(const Vector& rhs){
    if(mSize == rhs.mSize){
        for(int i = 0; i < mSize; i++)
            mElems[i] += rhs.mElems[i];
    }
    return *this;
}

Vector& Vector::operator-=(const Vector& rhs){
    if(mSize == rhs.mSize){
        for(int i = 0; i < mSize; i++)
            mElems[i] -= rhs.mElems[i];
    }
    return *this;
}

double& Vector::operator[](int i){
    return mElems[i];
}

const double& Vector::operator[](int i) const{
    return mElems[i];
}

std::istream& operator>>(std::istream& input, Vector& a){
    for(int i = 0; i < a.mSize; i++){
        input >> a.mElems[i];
    }
    return input;
}

std::ostream& operator<<(std::ostream& output, const Vector& a){
    output << "(";
    for(int i = 0; i < a.mSize; i++){
        if(i > 0)
            output << ", ";
        output << a.mElems[i];
    }
    output << ")";
    return output;
}

double dot(const Vector& l, const Vector& r){
    double z = 0;
    if(l.mSize == r.mSize){
        for(int i = 0; i < l.mSize; i++)
            z += l.mElems[i] * r.mElems[i];
}
    return z;
}

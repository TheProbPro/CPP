#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <iostream>

template<typename T>
class ArrayList
{
public:
    //Standard constructor
    ArrayList(){
        mElems = new T[1];
        mSize = 0;
        mReserved = 1;
    }

    //Copy constructor
    ArrayList(const ArrayList<T>& c){
        mElems = new T[c.mReserved];
        mSize = c.mSize;
        mReserved = c.mReserved;
        for(int i = 0; i < c.mSize; ++i){
            mElems[i] = c.mElems[i];
        }
    }

    //Move constructor
    ArrayList(ArrayList<T>&& c){
        //Steal elements from c
        mElems = c.mElems;
        mSize = c.mSize;
        mReserved = c.mReserved;
        //Resets the elements of c
        c.mElems = nullptr;
        c.mSize = 0;
        c.mReserved = 0;
    }

    /*
     * Constructor with initialization of "initialized" element
     */
    ArrayList(int initialized){
        mElems = new T[initialized];
        mSize = 0;
        mReserved = initialized;
    }
    //Destructor
    virtual ~ArrayList(){
        delete []mElems;
    }

    /*
     * Copy assignment operator
     */
    ArrayList<T>& operator=(const ArrayList<T>& a){
        mElems = a.mElems;
        mSize = a.mSize;
        mReserved = a.mReserved;

        return *this;
    }

    /*
     * Move assignment operator
     */
    ArrayList<T>& operator=(ArrayList<T>&& a){
        delete[] mElems;
            mElems = a.mElems;
            mSize = a.mSize;
            mReserved = a.mReserved;

            a.mElems = nullptr;
            a.mReserved = 0;
            a.mSize = 0;
        return *this;
    }

    /*
     * Add element to dynamic array
     */
    void add(const T& element){
        if(mSize == mReserved){
            extendStorage();
        }
        mElems[mSize] = element;
        ++mSize;
    }

    /*
     * Insert the element at placement "idx" in array and moves the remaining items by one place, restoring the old element at "idx".
     * Check whether it is needed to extend the storage.
     * Move all elements from _size to idx (reverse) one element to the right in the array set _elems[idx] equal to the element to be insterted.
     */
    void add(int idx, const T& element){
        if(mSize == mReserved){
            extendStorage();
        }
        for (int i = mSize; i > idx; i--){
            mElems[i] = mElems[i - 1];
        }
        mElems[idx] = element;
        mSize++;
    }

    /*
     * Get a const reference to the element idx
     */
    const T& operator[](int idx) const{
        return mElems[idx];
    }

    /*
     * Get a reference to the element at idx
     */
    T& operator[](int idx){
       return mElems[idx];
    }

    /*
     * Removes the element at placement "idx" by moving all the remaining elements
     * by one place to the left in the array
     */
    void remove(int idx){
        for(int i = idx; i < mSize; ++i){
            mElems[i] = mElems[i+1];
        }
        mSize--;
    }

    /*
     * Returns the number of elements stored
     */
    int size() const{
        return mSize;
    }

    /*
     * Returns the number of items currently reserved in memory
     */
    int reserved() const{
        return mReserved;
    }

    /*
     * Returns true if number of elements in array is zero
     */
    bool isEmpty() const{
        if(mSize == 0){
            return true;
        }
        return false;
    }

    /*
     * Trims the storage array to the exact number of elements stored
     */
    void trimToSize(){
        T* arr = new T[mSize];
        for(int i = 0; i < mSize; ++i){
            arr[i] = mElems[i];
        }
        delete []mElems;
        mElems = new T[mSize];
        for(int i = 0; i < mSize; ++i){
            mElems[i] = arr[i];
        }
        delete []arr;
        mReserved = mSize;
    }

    /*
     * Sorts the array using insertion sort (or another algorithm).
     * You are not allowed to use standard algorithms from algorithm header.
     */
    void sort(){
        for(int i = 0; i < mSize; ++i){
            int j = i - 1;
            while(j >= 0 && mElems[j] > mElems[i]){
                mElems[j+1] = mElems[j];
                j = j - 1;
            }
            mElems[j+1] = mElems[i];
        }
    }

    /*
     * Returns a new ArrayList  with elements from "fromIdx" index to "toIdx"
     */
    ArrayList<T> subArrayList(int fromIdx, int toIdx) const{
        ArrayList<T> subArr;
        for(int i = fromIdx; i < toIdx; ++i){
            subArr.add(mElems[i]);
        }
        return subArr;
    }

    /*
     * Returns a new C style array (copy created with new) with all elements
     */
    T* toArray(){
        T* arr = new T[mSize];
        for(int i = 0; i < mSize; ++i){
            arr[i] = mElems[i];
        }
        return arr;
    }

private:
    /*
     * extendStorage():
     * create new array with size 2*_reserved
     * copy old data to the new array
     * delete old array
     * update pointer _elems to point to the new array
     * (Since this method is private, the method will only be used internally, but the functionality is needed).
     */
    void extendStorage(){
        T* dArr = new T[mReserved*2];
        for(int i = 0; i < mSize; ++i){
            dArr[i] = mElems[i];
        }
        delete []mElems;
        mElems = new T[mReserved*2];
        for(int i = 0; i < mSize; ++i){
            mElems[i] = dArr[i];
        }
        delete []dArr;
        mReserved *= 2;
    }

    /*
     * Member variables
     */
    int mReserved; //The current capacity of "_elems" array
    int mSize;    //The number of elements stored

    T* mElems;    //Array for storing the elements
};

#endif // ARRAYLIST_H

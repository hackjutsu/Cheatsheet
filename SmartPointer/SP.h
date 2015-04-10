#ifndef __HelloCpp__SP__
#define __HelloCpp__SP__

#include <iostream>
#include "ReferenceCount.h"

/**
 * A simple implementation of a smart pointer
 */

template <class T>
class SP {

private:
    T* _pData; // pointer
    ReferenceCount* _reference; // reference count
    
public:
    
    SP():_pData(0), _reference(0) {
        // Normally, the assignment operator will be called
        // after this "empty" contructor, which makes the
        // following operations on the reference count make
        // sense.
        _reference = new ReferenceCount();
        _reference->addRef();
    }
    
    SP(T* pData):_pData(pData), _reference(0) {
        _reference = new ReferenceCount();
        _reference->addRef();
    };
    
    SP(const SP<T>& sp):_pData(sp._pData), _reference(sp._reference){
        // Copy constructor
        // Copy the data and reference pointer
        // and increment the reference count
        _reference->addRef();
    }
    
    ~SP(){
        // Destructor
        // Decrement the reference count
        // if reference become zero delete the data
        if (0 == _reference->release()) {
            delete _pData;
            delete _reference;
        }
    };
    
    SP<T>& operator= (const SP<T>& sp) {
        // Assignment operator
        
        // Avoid self assignment
        if (&sp != this) {
            
            // Decrement the old reference count
            // if reference becomes zero than delete
            // the old data
            if (0 == _reference->release()) {
                delete _pData;
                delete _reference;
            }
            
            // Copy the data and reference pointer
            // and increment the reference count
            _pData = sp._pData;
            _reference = sp._reference;
            _reference->addRef();
        }
        
        return *this;
    }

    // Dereferencing
    T& operator* () {
        
        return *_pData;
    };
    
    // Indirection
    T* operator-> () {
        
        return _pData;
    };
};

#endif /* defined(__HelloCpp__SP__) */
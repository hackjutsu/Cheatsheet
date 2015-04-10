//
//  ReferenceCount.h
//  HelloCpp
//
//  Created by Citrixer on 4/9/15.
//  Copyright (c) 2015 BananaStudio. All rights reserved.
//

#ifndef __HelloCpp__ReferenceCount__
#define __HelloCpp__ReferenceCount__

#include <stdio.h>
class ReferenceCount {
    
private:
    int _count;
    
public:
    ReferenceCount() : _count(0) {
    
    }
    
    // Increment the reference count
    void addRef() {
        ++_count;
    }
    
    // Decrement the reference count and return
    // the reference count.
    int release() {
        return --_count;
    }
};

#endif /* defined(__HelloCpp__ReferenceCount__) */

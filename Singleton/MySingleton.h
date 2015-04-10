#ifndef __HelloCpp__MySingleton__
#define __HelloCpp__MySingleton__

#include <iostream>

class MySingleton{
    
public:
    static MySingleton* getInstance();
    MySingleton(const MySingleton&) = delete; // C++11 feature, disable the copy constructor
    MySingleton& operator= (const MySingleton&) = delete; // C++11 feature, disable the assignment operator
    void release();
    
private:
    MySingleton() {};
    ~MySingleton() {};
    static MySingleton* m_pInstance;
    
};

#endif /* defined(__HelloCpp__MySingleton__) */

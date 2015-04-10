#include "MySingleton.h"

MySingleton* MySingleton::m_pInstance = NULL;

MySingleton* MySingleton::getInstance() {
    
    if (NULL == m_pInstance) {
        m_pInstance = new MySingleton();
    }
    
    return m_pInstance;
}

void MySingleton::release() {
    delete m_pInstance;
    m_pInstance = NULL;
}

#pragma once
#include <cassert>

class ComponentManager
{
public:

    template <typename T>
    void AddComponent()
    {
        const char* typeName = typeid(T).name();
        
    }

private:
    
};

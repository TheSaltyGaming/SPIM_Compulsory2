#pragma once
#include <vector>

#include "../ECS/Entity.h"
class System
{
public:

public:
    virtual void Update(std::vector<Entity>& entities) = 0;
    
};

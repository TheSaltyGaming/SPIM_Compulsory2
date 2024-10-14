#pragma once
#include "System.h"
#include "../ECS/ComponentManager.h"

class MovementSystem : public System
{
public:
    MovementSystem(ComponentManager& componentManager) : mComponentManager(componentManager) {};

    void Update(std::vector<Entity>& entities, float deltaTime) override;

private:

    ComponentManager& mComponentManager;
    
};

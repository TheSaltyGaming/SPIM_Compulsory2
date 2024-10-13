// EntityManager.h
#pragma once
#include <queue>
#include <array>
#include "Entity.h"
#include "ComponentManager.h"

class EntityManager
{
public:
    EntityManager(ComponentManager& compManager);

    Entity CreateEntity();
    void DestroyEntity(Entity entity);

private:
    std::queue<Entity> mAvailableEntities{};
    uint32_t mLivingEntityCount{};
    ComponentManager& componentManager;
};
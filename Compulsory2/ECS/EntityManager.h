// EntityManager.h
#pragma once
#include <queue>
#include <array>
#include "Entity.h"

class EntityManager
{
public:
    EntityManager();

    Entity CreateEntity();
    void DestroyEntity(Entity entity);

private:
    std::queue<Entity> mAvailableEntities{};
    uint32_t mLivingEntityCount{};
};
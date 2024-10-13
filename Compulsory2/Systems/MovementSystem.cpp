#include "MovementSystem.h"

#include "../Components/TransformComponent.h"

void MovementSystem::Update(std::vector<Entity>& entities)
{
    for (auto entity : entities)
    {
        if (mComponentManager.HasComponent<TransformComponent>(entity.GetId()))
        {
            auto transform = mComponentManager.GetComponent<TransformComponent>(entity.GetId());
            //TODO: add deltaTime
            transform->position.x += transform->velocity.x;
            transform->position.z += transform->velocity.z;
        }
    }
}

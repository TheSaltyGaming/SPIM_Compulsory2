#include "MovementSystem.h"

#include "../Components/TransformComponent.h"

void MovementSystem::Update(std::vector<Entity>& entities, float deltaTime)
{
    for (auto entity : entities)
    {
        if (mComponentManager.HasComponent<TransformComponent>(entity.GetId()))
        {
            auto transform = mComponentManager.GetComponent<TransformComponent>(entity.GetId());
            
            transform->position.x += transform->velocity.x * deltaTime;
            transform->position.z += transform->velocity.z * deltaTime;
        }
    }
}

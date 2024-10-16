#pragma once
#include "System.h"
#include "../Mesh/Mesh.h"
#include "../Components/TransformComponent.h"
#include <glm/matrix.hpp>
#include <glm/gtc/type_ptr.hpp>

class RenderSystem : public System
{
public:

    RenderSystem(ComponentManager& componentManager, unsigned int ShaderProgram) : mComponentManager(componentManager), mShaderProgram(ShaderProgram){};

    void Update(std::vector<Entity>& entities, float deltaTime) override;

    void RenderEntity(std::vector<Entity>& entities);

private:
    ComponentManager& mComponentManager;
    unsigned int mShaderProgram;
};

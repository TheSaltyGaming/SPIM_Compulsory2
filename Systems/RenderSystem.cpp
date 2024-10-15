﻿#include "RenderSystem.h"

#include "../ECS/ComponentManager.h"
#include "../Mesh/Mesh.h"
#include "glad/glad.h"
#include "glm/fwd.hpp"

void RenderSystem::Update(std::vector<Entity>& entities, float deltaTime)
{
	for (auto& entity : entities)
	{
		if (mComponentManager.HasComponent<MeshComponent>(entity.GetId()) && mComponentManager.HasComponent<TransformComponent>(entity.GetId()))
		{
			//TODO: FIX THIS
			// auto& meshComponent = mComponentManager.GetComponent<MeshComponent>(entity.GetId());
			//
			// auto& transformComponent = mComponentManager.GetComponent<TransformComponent>(entity.GetId());
		}
	}
}

void RenderSystem::RenderEntity()
{
	for (auto entityId : mComponentManager.GetEntities())  {
		auto mesh = componentManager.GetComponent<Mesh>(entityId);
		// Render using mesh methods
		mesh->Draw(shaderProgram);
	}
}

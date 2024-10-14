#include "RenderSystem.h"

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

void RenderSystem::RenderEntity(MeshComponent& meshComponent, TransformComponent& transformComponent)
{
	glm::mat4 modelMatrix = glm::mat4(1.0f);
	modelMatrix = glm::translate(modelMatrix, transformComponent.position);
	modelMatrix = glm::rotate(modelMatrix, glm::radians(transformComponent.rotation.x), glm::vec3(1.0f, 0.0f, 0.0f));
	modelMatrix = glm::rotate(modelMatrix, glm::radians(transformComponent.rotation.y), glm::vec3(0.0f, 1.0f, 0.0f));
	modelMatrix = glm::rotate(modelMatrix, glm::radians(transformComponent.rotation.z), glm::vec3(0.0f, 0.0f, 1.0f));
	modelMatrix = glm::scale(modelMatrix, transformComponent.scale);

	// glUSeProgram(mShaderProgram);
	int modelLoc = glGetUniformLocation(mShaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(modelMatrix));

	if (meshComponent.mesh)
	{
		// meshComponent.mesh->Draw();
	}

}

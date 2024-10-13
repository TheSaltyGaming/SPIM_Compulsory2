#pragma once
#include "Component.h"
#include "glm/vec3.hpp"

struct TransformComponent : public Component {
    glm::vec3 position;
    glm::vec3 scale;
    glm::vec3 rotation;
    //TODO: Consider making separate component or smth
    glm::vec3 velocity;
};

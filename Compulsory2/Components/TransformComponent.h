#pragma once
#include "glm/vec3.hpp"

struct TransformComponent {
    glm::vec3 position;
    glm::vec3 scale;
    glm::vec3 rotation;
    //TODO: Consider making separate component or smth
    glm::vec3 velocity;
};

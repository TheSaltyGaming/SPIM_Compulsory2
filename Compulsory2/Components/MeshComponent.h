#pragma once
#include "Component.h"

class Mesh;

struct MeshComponent : public Component
{
    Mesh* mesh;
};

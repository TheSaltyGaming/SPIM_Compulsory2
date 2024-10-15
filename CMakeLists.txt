cmake_minimum_required(VERSION 3.29.6)
project(SPIM_Compulsory2)

set(CMAKE_CXX_STANDARD 20)

include_directories(Dependency/includes)
include_directories(Dependency/libs)
include_directories(ECS)
include_directories(Systems)
include_directories(Mesh)


add_subdirectory(Dependency/libs/glfw-3.4)

add_executable(SPIM_Compulsory2 main.cpp
        Vertex.cpp
        Collision.cpp
        glad.c
        Camera.h
        Camera.cpp
        Shader.h
        ShaderFileLoader.h
        Math.cpp
        Shader.cpp
        Math.h
        Collision.h
        ShaderFileLoader.cpp
        Vertex.h
        Components/CameraComponent.cpp
        Components/CameraComponent.h
        Components/Component.cpp
        Components/Component.h
        Components/HealthComponent.cpp
        Components/HealthComponent.h
        Components/TransformComponent.cpp
        Components/TransformComponent.h
        ECS/ComponentManager.cpp
        ECS/ComponentManager.h
        ECS/Entity.cpp
        ECS/Entity.h
        ECS/EntityManager.cpp
        ECS/EntityManager.h
        Mesh/Mesh.cpp
        Mesh/Mesh.h
        Mesh/Surface.cpp
        Mesh/Surface.h
        Systems/MovementSystem.cpp
        Systems/MovementSystem.h
        Systems/RenderSystem.cpp
        Systems/RenderSystem.h
        Systems/System.cpp
        Systems/System.h
)

target_link_libraries(SPIM_Compulsory2 glfw)



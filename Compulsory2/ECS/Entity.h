#pragma once
#include <cassert>
#include <memory>
#include <typeindex>
#include <unordered_map>

class Component {};

class Entity
{
public:

    Entity();
    Entity(int id) : id(id) {};
    
    unsigned int id;

    template <typename T>
    void AddComponent(std::shared_ptr<T> component)
    {
        const std::type_index type = typeid(T);
        components[type] = component;
    }

    template <typename T>
    void RemoveComponent()
    {
        const std::type_index type = typeid(T);
        components.erase(type);
    }
    template <typename T>
    std::shared_ptr<T> GetComponent()
    {
        const std::type_index type = typeid(T);
        assert(components.find(type) != components.end() && "Component not found.");
        return std::static_pointer_cast<T>(components[type]);
    }

    template <typename T>
    bool HasComponent()
    {
        const std::type_index type = typeid(T);
        return components.find(type) != components.end();
    }
    
private:
    std::unordered_map<std::type_index, std::shared_ptr<Component>> components;

};

const unsigned int MAX_ENTITIES = 5000;
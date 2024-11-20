#pragma once

#include "physics.h"
#include "raylib.h"
#include "entt.hpp"

namespace ray_sim
{

enum ApplicationState
{
    RUNNING,
    USER_EXIT,
    ERROR_EXIT
};

class RaySim
{
public:
    RaySim();
    ~RaySim();

public:
    [[nodiscard]] ApplicationState Init();
    [[nodiscard]] ApplicationState Update();
    void Shutdown();

private:
    void drawModelWireFrame(const Model& model) const;

private:
    PhysicsWorld physicsWorld_;
    Camera3D camera_;
    const int targetFps;
    const int screenWidth_;
    const int screenHeight_;

private:
    entt::registry registry_;

    //TEST
    entt::entity entity1;
    entt::entity entity2;
    Texture2D texture;
    Shader shader;
};

}
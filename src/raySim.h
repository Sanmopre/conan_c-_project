#pragma once

// raylib
#include "raylib.h"

// entt
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
    Camera2D camera_;
    const int targetFps;
    const int screenWidth_;
    const int screenHeight_;
    entt::registry registry_;
};

}
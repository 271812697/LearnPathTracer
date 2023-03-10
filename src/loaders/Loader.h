
#pragma once

#include "Scene.h"

namespace GLSLPT
{
    class Scene;

    bool LoadSceneFromFile(const std::string& filename, Scene* scene, RenderOptions& renderOptions);
}
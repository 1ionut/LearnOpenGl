// Engine.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include "glad/glad.h" 
#include "GLFW/glfw3.h"

#include <iostream>

namespace Engine {
	GLFWwindow* window;

	int Init();
	void Start();
}

// TODO: Reference additional headers your program requires here.

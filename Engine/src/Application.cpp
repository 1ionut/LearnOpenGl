// Engine.cpp : Defines the entry point for the application.
//

#include "Engine.h"

int Engine::Init() {

    /*glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);*/

    /*Engine::window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    glViewport(0, 0, 800, 600);*/

    return 1;
}


void Engine::Start() {
    /*while (!glfwWindowShouldClose(Engine::window))
    {
        glfwSwapBuffers(Engine::window);
        glfwPollEvents();
    }

    glfwTerminate();*/
}
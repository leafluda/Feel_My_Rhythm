#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <chrono>
#include <Windows.h>
#include <thread>
#include <String>
#include "GGameManager.hpp"

#pragma comment(lib, "OpenGL32")

int main(void)
{
   G_Engine::GGameManager gLoop;
   gLoop.run();
}
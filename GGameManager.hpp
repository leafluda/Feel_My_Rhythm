#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <chrono>
#include <Windows.h>
#include <thread>
#include <String>
#include "MainWin.hpp"
#include "GNote1.hpp"
#include "GNote2.hpp"
#include "GNote3.hpp"
#include "GNote4.hpp"
#include <random>


#pragma comment(lib, "OpenGL32")



using namespace std;
G_Engine::MainWin MW;

namespace G_Engine {

    class GGameManager{

    static void error_callback(int error, const char* description)
    {
        fputs(description, stderr);
    }
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
    {
        if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
            glfwSetWindowShouldClose(window, GL_TRUE);
    }

    G_Engine::MainWin MW;
    G_Engine::GNote1 GN1;
    G_Engine::GNote2 GN2;
    G_Engine::GNote3 GN3;
    G_Engine::GNote4 GN4;

    public:
        float f = 0.0f;
        float l = 0.0f;
        int a = 0, b= 0, c=0, d=0;
        GLFWwindow* window;
        float ratio;
        int width, height;
        


    void run()
        {
        glfwSetErrorCallback(error_callback);
        if (!glfwInit())
            exit(EXIT_FAILURE);
        window = glfwCreateWindow(900,900, "Simple example", NULL, NULL);
        if (!window)
        {
            glfwTerminate();
            exit(EXIT_FAILURE);
        }
        glfwMakeContextCurrent(window);
        glfwSetKeyCallback(window, key_callback);

       

        while (!glfwWindowShouldClose(window))
        {
            glfwGetFramebufferSize(window, &width, &height);
            ratio = width / (float)height;
            
            Input();            
            Render();
            Result();
           
        }
        glfwDestroyWindow(window);
        glfwTerminate();
        exit(EXIT_SUCCESS);
        }

    void Render()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자
       
       

        GN1.GNoteRen();
        GN1Down();
        GN2.GNoteRen();
        GN2Down();
        GN3.GNoteRen();
        GN3Down();
        GN4.GNoteRen();
        GN4Down();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    void Input() {
        if (GetAsyncKeyState(VK_LEFT) & 0x8000 || GetAsyncKeyState(VK_LEFT) & 0x8001)
        {
            l = l - 0.01f;
        }
        if (GetAsyncKeyState(VK_UP) & 0x8000 || GetAsyncKeyState(VK_UP) & 0x8001)
        {
            f = f + 0.01f;
        }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000 || GetAsyncKeyState(VK_RIGHT) & 0x8001)
        {
            l = l + 0.01f;
        }
        if (GetAsyncKeyState(VK_DOWN) & 0x8000 || GetAsyncKeyState(VK_DOWN) & 0x8001)
        {
            f = f - 0.01f;
        }
        if (GetAsyncKeyState(VK_SPACE) & 0x8000 || GetAsyncKeyState(VK_SPACE) & 0x8001)
        {
            system("cls");
        }
    }
    void Result() {
    if (l > 0.4 && l < 0.5f)
    {
        if (f + 0.1f > 0.5f && f + 0.1f < 0.6f)
        {
            cout << "충돌" << endl;
        }
    }

    if (l - 0.1f > 0.4 && l - 0.1f < 0.5f)
    {
        if (f + 0.1f > 0.5f && f + 0.1f < 0.6f)
        {
            cout << "충돌" << endl;
        }
    }

    if (l > 0.4 && l < 0.5f)
    {
        if (f > 0.5f && f < 0.6f)
        {
            cout << "충돌" << endl;
        }
    }

    if (l - 0.1f > 0.4 && l - 0.1f < 0.5f)
    {
        if (f > 0.5f && f < 0.6f)
        {
            cout << "충돌" << endl;
        }
    }
    }

        void GN1Down()
        {
            GN1.Down();
        }
        void GN2Down()
        {
            GN2.Down();
        }
        void GN3Down()
        {
            GN3.Down();
        }
        void GN4Down()
        {
            GN4.Down();
        }
    };
}
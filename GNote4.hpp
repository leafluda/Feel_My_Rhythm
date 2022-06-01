#pragma once
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <chrono>
#include <Windows.h>
#include <thread>
#include <String>
#include <random>


#pragma comment(lib, "OpenGL32")

using namespace std;
namespace G_Engine
{


    class GNote4
    {


    public:

        float Ny = 0.9f;
     

    public:
        GNote4() {}
        ~GNote4() {}

        void GNoteRen()
        {
                glBegin(GL_QUADS);
                glColor3f(1.0f, 1.0f, 1.0f);
                glVertex2f(-0.34f, Ny); //오른쪽 위
                glVertex2f(-0.26f, Ny); //왼쪽위
                glVertex2f(-0.26f, Ny - 0.02f); //왼쪽 아래
                glVertex2f(-0.34f, Ny - 0.02f); //오른쪽아래
                glEnd();
        }

        void Down()
        {

            Ny = Ny - 0.02f;

        }

        void restate()
        {
            Ny = 0.9f;
        }

        void inbox()
        {
           
        }

    };
}
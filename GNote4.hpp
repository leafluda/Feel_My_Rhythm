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


namespace G_Engine
{


    class GNote4
    {


    public:

        float Ny = 0.9f;
        float tlqkf = 0;

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
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<int> dis(0, 3);



            switch (dis(gen))
            {
            case 0: tlqkf = 0.01f;
                break;
            case 1: tlqkf = 0.005f;
                break;
            case 2: tlqkf = 0.001f;
                break;
            case 3: tlqkf = 0.0005f;
                break;
            }

            Ny = Ny - tlqkf;
        }

    };
}
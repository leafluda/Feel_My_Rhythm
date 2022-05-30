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


    class GNote1
    {
    private: float Ny = 0.9f;

    public:

        


    public:
        GNote1() {}
        ~GNote1() {}

        void GNoteRen()
        {

                glBegin(GL_QUADS);
                glColor3f(1.0f, 1.0f, 1.0f);
                glVertex2f(0.34f, Ny); //������ ��
                glVertex2f(0.26f, Ny); //������
                glVertex2f(0.26f, Ny-0.02f); //���� �Ʒ�
                glVertex2f(0.34f, Ny - 0.02f); //�����ʾƷ�
                glEnd();
        }

        void Down()
        {
            Ny = Ny - 0.01f;
        }

    };
}

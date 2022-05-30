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
    

    class GNote3
    {

    private:
        float Ny = 0.9f;
    public:

       


    public:
        GNote3() {}
        ~GNote3() {}

        void GNoteRen()
        {

                glBegin(GL_QUADS);
                glColor3f(1.0f, 1.0f, 1.0f);
                glVertex2f(-0.14f, Ny); //������ ��
                glVertex2f(-0.06f, Ny); //������
                glVertex2f(-0.06f, Ny - 0.02f); //���� �Ʒ�
                glVertex2f(-0.14f, Ny - 0.02f); //�����ʾƷ�
                glEnd();

        }

        void Down()
        {
            Ny = Ny - 0.001f;
        }

    };
}
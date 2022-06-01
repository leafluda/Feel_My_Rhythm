#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <chrono>
#include <Windows.h>
#include <thread>
#include <String>
#include "BindTexture.hpp"


#pragma comment(lib, "OpenGL32")


namespace G_Engine 
{
	class MainWin
	{
    public:
        MainWin() {}
        ~MainWin() {}
    public:
        float ps = 0.0f;
        G_Engine::BindTexture BT;
       
		void MainWinRen()
		{
            BT.BT();
            
            

            //라인
            glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(0.41f, 1.0f); //오른쪽 위
            glVertex2f(0.4f, 1.0f); //왼쪽위
            glVertex2f(0.4f, -1.0f); //왼쪽 아래
            glVertex2f(0.41f, -1.0f); //오른쪽아래
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(0.21f, 1.0f); //오른쪽 위
            glVertex2f(0.2f, 1.0f); //왼쪽위
            glVertex2f(0.2f, -1.0f); //왼쪽 아래
            glVertex2f(0.21f, -1.0f); //오른쪽아래
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(0.01f, 1.0f); //오른쪽 위
            glVertex2f(0.0f, 1.0f); //왼쪽위
            glVertex2f(0.0f, -1.0f); //왼쪽 아래
            glVertex2f(0.01f, -1.0f); //오른쪽아래
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(-0.21f, 1.0f); //오른쪽 위
            glVertex2f(-0.2f, 1.0f); //왼쪽위
            glVertex2f(-0.2f, -1.0f); //왼쪽 아래
            glVertex2f(-0.21f, -1.0f); //오른쪽아래
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(-0.41f, 1.0f); //오른쪽 위
            glVertex2f(-0.4f, 1.0f); //왼쪽위
            glVertex2f(-0.4f, -1.0f); //왼쪽 아래
            glVertex2f(-0.41f, -1.0f); //오른쪽아래
            glEnd();

            glBegin(GL_QUADS); //첫라인
            glColor3f(0.0f, 0.0f, 1.0f);
            glVertex2f(-0.26f, -0.8f); //오른쪽 위
            glVertex2f(-0.34f, -0.8f); //왼쪽위
            glVertex2f(-0.34f, -0.9f); //왼쪽 아래
            glVertex2f(-0.26f, -0.9f); //오른쪽아래
            glEnd();

            glBegin(GL_QUADS); //둘째라인
            glColor3f(0.0f, 0.0f, 1.0f);
            glVertex2f(-0.06f, -0.8f); //오른쪽 위
            glVertex2f(-0.14f, -0.8f); //왼쪽위
            glVertex2f(-0.14f, -0.9f); //왼쪽 아래
            glVertex2f(-0.06f, -0.9f); //오른쪽아래
            glEnd();

            glBegin(GL_QUADS); //셋째라인
            glColor3f(0.0f, 0.0f, 1.0f);
            glVertex2f(0.14f, -0.8f); //오른쪽 위
            glVertex2f(0.06f, -0.8f); //왼쪽위
            glVertex2f(0.06f, -0.9f); //왼쪽 아래
            glVertex2f(0.14f, -0.9f); //오른쪽아래
            glEnd();

            glBegin(GL_QUADS); //넷째라인
            glColor3f(0.0f, 0.0f, 1.0f);
            glVertex2f(0.34f, -0.8f); //오른쪽 위
            glVertex2f(0.26f, -0.8f); //왼쪽위
            glVertex2f(0.26f, -0.9f); //왼쪽 아래
            glVertex2f(0.34f, -0.9f); //오른쪽아래
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(-0.6f, ps); //오른쪽 위
            glVertex2f(-0.7f, ps);//왼쪽위
            glVertex2f(-0.7f, -0.9f); //오른쪽아래
            glVertex2f(-0.6f, -0.9f); //왼쪽 아래
            glEnd();
		}

        void PlayerLifeDown()
        {
                ps = ps - 0.1f;
        }

        void PlayerLifeUp()
        {
                ps = ps + 0.1f;
        }

	};
}
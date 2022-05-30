#pragma once
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <chrono>
#include <Windows.h>
#include <thread>
#include <String>


#pragma comment(lib, "OpenGL32")


namespace G_Engine 
{
	class MainWin
	{
    public:
        MainWin() {}
        ~MainWin() {}

		void MainWinRen()
		{

            //고정상자
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

          
		}
	};
}
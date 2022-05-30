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

            //��������
            glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(0.41f, 1.0f); //������ ��
            glVertex2f(0.4f, 1.0f); //������
            glVertex2f(0.4f, -1.0f); //���� �Ʒ�
            glVertex2f(0.41f, -1.0f); //�����ʾƷ�
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(0.21f, 1.0f); //������ ��
            glVertex2f(0.2f, 1.0f); //������
            glVertex2f(0.2f, -1.0f); //���� �Ʒ�
            glVertex2f(0.21f, -1.0f); //�����ʾƷ�
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(0.01f, 1.0f); //������ ��
            glVertex2f(0.0f, 1.0f); //������
            glVertex2f(0.0f, -1.0f); //���� �Ʒ�
            glVertex2f(0.01f, -1.0f); //�����ʾƷ�
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(-0.21f, 1.0f); //������ ��
            glVertex2f(-0.2f, 1.0f); //������
            glVertex2f(-0.2f, -1.0f); //���� �Ʒ�
            glVertex2f(-0.21f, -1.0f); //�����ʾƷ�
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(-0.41f, 1.0f); //������ ��
            glVertex2f(-0.4f, 1.0f); //������
            glVertex2f(-0.4f, -1.0f); //���� �Ʒ�
            glVertex2f(-0.41f, -1.0f); //�����ʾƷ�
            glEnd();

          
		}
	};
}
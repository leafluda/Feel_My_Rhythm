#define _CRT_SECURE_NO_WARNINGS
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
    G_Engine::BindTexture BT;


    public:
        float f = 0.0f;
        float l = 0.0f;
        int rcount = 0;
        int whilebreak= 0;
        GLFWwindow* window;
        float ratio;
        int width, height;
        bool endline = true;
        bool atouch = true;
        bool stouch = true;
        bool dtouch = true;
        bool ftouch = true;
        bool gameStart = false;



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
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

        BT.init();

        while (!glfwWindowShouldClose(window))
        {
            glfwGetFramebufferSize(window, &width, &height);
            ratio = width / (float)height;
            rcount = 0;
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<int> dis(0, 23);
            whilebreak = 0;
            endline = true;
            atouch = true;
            stouch = true;
            dtouch = true;
            ftouch = true;

           

            if (!gameStart)
            {
                while(!gameStart)
                {
                    glClearColor(0.3f, 0.3f, 0.3f, 1);
                    glClear(GL_COLOR_BUFFER_BIT);

                    glEnable(GL_BLEND);
                    glBlendFunc(GL_SRC_ALPHA, GL_ONE);
                    MW.MainWinRen();
                    glfwSwapBuffers(window);
                    glfwPollEvents();
                    if (GetAsyncKeyState(VK_SPACE) & 0x8000)    //Space 눌러 게임 시작
                    {
                        gameStart = true;
                        MW.ps = 0.0f;
                    }
                }
            }

            switch (dis(gen))
            {
            case 0:
                while (endline)
                {
                    Input();
                    Render0();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 1:
                while (endline)
                {
                    Input();
                    Render1();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 2:
                while (endline)
                {
                    Input();
                    Render2();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 3:
                while (endline)
                {
                    Input();
                    Render3();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 4:
                while (endline)
                {
                    Input();
                    Render4();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 5:
                while (endline)
                {
                    Input();
                    Render5();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 6:
                while (endline)
                {
                    Input();
                    Render6();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 7:
                while (endline)
                {
                    Input();
                    Render7();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 8:
                while (endline)
                {
                    Input();
                    Render8();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 9:
                while (endline)
                {
                    Input();
                    Render9();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 10:
                while (endline)
                {
                    Input();
                    Render10();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 11:
                while (endline)
                {
                    Input();
                    Render11();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 12:
                while (endline)
                {
                    Input();
                    Render12();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 13:
                while (endline)
                {
                    Input();
                    Render13();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 14:
                while (endline)
                {
                    Input();
                    Render14();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 15:
                while (endline)
                {
                    Input();
                    Render15();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 16:
                while (endline)
                {
                    Input();
                    Render16();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 17:
                while (endline)
                {
                    Input();
                    Render17();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 18:
                while (endline)
                {
                    Input();
                    Render18();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 19:
                while (endline)
                {
                    Input();
                    Render19();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 20:
                while (endline)
                {
                    Input();
                    Render20();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 21:
                while (endline)
                {
                    Input();
                    Render21();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 22:
                while (endline)
                {
                    Input();
                    Render22();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            case 23:
                while (endline)
                {
                    Input();
                    Render23();
                    whilebreak++;
                    if (whilebreak > 400)
                    {
                        endline = false;
                    }
                }
                break;
            }        
            allrestate();
        }
        glfwDestroyWindow(window);
        glfwTerminate();
        exit(EXIT_SUCCESS);
        }
        

    void Render0()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);

        MW.MainWinRen();


        GN1.GNoteRen(); //1번째라인
        GN1Down();
        if(rcount > 100)
        {
        GN2.GNoteRen(); //2번째라인
        GN2Down();
        }
        if (rcount > 200)
        { 
        GN3.GNoteRen(); //3번째라인
        GN3Down();
        }
        if (rcount > 300)
        {
        GN4.GNoteRen(); //4번째라인
        GN4Down();
        }
        rcount++;
        glfwSwapBuffers(window);
        glfwPollEvents();     
    }
    void Render1()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN1.GNoteRen(); //1번째라인
        GN1Down();
        if (rcount > 100)
        {
            GN2.GNoteRen(); //2번째라인
            GN2Down();
        }
        if (rcount > 200)
        {
            GN4.GNoteRen(); //3번째라인
            GN4Down();
        }
        if (rcount > 300)
        {
            GN3.GNoteRen(); //4번째라인
            GN3Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render2()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN1.GNoteRen(); //1번째라인
        GN1Down();
        if (rcount > 100)
        {
            GN3.GNoteRen(); //2번째라인
            GN3Down();
        }
        if (rcount > 200)
        {
            GN2.GNoteRen(); //3번째라인
            GN2Down();
        }
        if (rcount > 300)
        {
            GN4.GNoteRen(); //4번째라인
            GN4Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render3()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN1.GNoteRen(); //1번째라인
        GN1Down();
        if (rcount > 100)
        {
            GN3.GNoteRen(); //2번째라인
            GN3Down();
        }
        if (rcount > 200)
        {
            GN4.GNoteRen(); //3번째라인
            GN4Down();
        }
        if (rcount > 300)
        {
            GN2.GNoteRen(); //4번째라인
            GN2Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render4()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN1.GNoteRen(); //1번째라인
        GN1Down();
        if (rcount > 100)
        {
            GN4.GNoteRen(); //2번째라인
            GN4Down();
        }
        if (rcount > 200)
        {
            GN2.GNoteRen(); //3번째라인
            GN2Down();
        }
        if (rcount > 300)
        {
            GN3.GNoteRen(); //4번째라인
            GN3Down();
        }
        rcount++;
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render5()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN1.GNoteRen(); //1번째라인
        GN1Down();
        if (rcount > 100)
        {
            GN4.GNoteRen(); //2번째라인
            GN4Down();
        }
        if (rcount > 200)
        {
            GN3.GNoteRen(); //3번째라인
            GN3Down();
        }
        if (rcount > 300)
        {
            GN2.GNoteRen(); //4번째라인
            GN2Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render6()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN2.GNoteRen(); //1번째라인
        GN2Down();
        if (rcount > 100)
        {
            GN1.GNoteRen(); //2번째라인
            GN1Down();
        }
        if (rcount > 200)
        {
            GN3.GNoteRen(); //3번째라인
            GN3Down();
        }
        if (rcount > 300)
        {
            GN4.GNoteRen(); //4번째라인
            GN4Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render7()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN2.GNoteRen(); //1번째라인
        GN2Down();
        if (rcount > 100)
        {
            GN1.GNoteRen(); //2번째라인
            GN1Down();
        }
        if (rcount > 200)
        {
            GN4.GNoteRen(); //3번째라인
            GN4Down();
        }
        if (rcount > 300)
        {
            GN3.GNoteRen(); //4번째라인
            GN3Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render8()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자


        GN2.GNoteRen(); //1번째라인
        GN2Down();
        if (rcount > 100)
        {
            GN3.GNoteRen(); //2번째라인
            GN3Down();
        }
        if (rcount > 200)
        {
            GN1.GNoteRen(); //3번째라인
            GN1Down();
        }
        if (rcount > 300)
        {
            GN4.GNoteRen(); //4번째라인
            GN4Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render9()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN2.GNoteRen(); //1번째라인
        GN2Down();
        if (rcount > 100)
        {
            GN3.GNoteRen(); //2번째라인
            GN3Down();
        }
        if (rcount > 200)
        {
            GN4.GNoteRen(); //3번째라인
            GN4Down();
        }
        if (rcount > 300)
        {
            GN1.GNoteRen(); //4번째라인
            GN1Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render10()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN2.GNoteRen(); //1번째라인
        GN2Down();
        if (rcount > 100)
        {
            GN4.GNoteRen(); //2번째라인
            GN4Down();
        }
        if (rcount > 200)
        {
            GN1.GNoteRen(); //3번째라인
            GN1Down();
        }
        if (rcount > 300)
        {
            GN3.GNoteRen(); //4번째라인
            GN3Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render11()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN2.GNoteRen(); //1번째라인
        GN2Down();
        if (rcount > 100)
        {
            GN4.GNoteRen(); //2번째라인
            GN4Down();
        }
        if (rcount > 200)
        {
            GN3.GNoteRen(); //3번째라인
            GN3Down();
        }
        if (rcount > 300)
        {
            GN1.GNoteRen(); //4번째라인
            GN1Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render12()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자


        GN3.GNoteRen(); //1번째라인
        GN3Down();
        if (rcount > 100)
        {
            GN1.GNoteRen(); //2번째라인
            GN1Down();
        }
        if (rcount > 200)
        {
            GN2.GNoteRen(); //3번째라인
            GN2Down();
        }
        if (rcount > 300)
        {
            GN4.GNoteRen(); //4번째라인
            GN4Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render13()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자


        GN3.GNoteRen(); //1번째라인
        GN3Down();
        if (rcount > 100)
        {
            GN1.GNoteRen(); //2번째라인
            GN1Down();
        }
        if (rcount > 200)
        {
            GN4.GNoteRen(); //3번째라인
            GN4Down();
        }
        if (rcount > 300)
        {
            GN2.GNoteRen(); //4번째라인
            GN2Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render14()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN3.GNoteRen(); //1번째라인
        GN3Down();
        if (rcount > 100)
        {
            GN2.GNoteRen(); //2번째라인
            GN2Down();
        }
        if (rcount > 200)
        {
            GN1.GNoteRen(); //3번째라인
            GN1Down();
        }
        if (rcount > 300)
        {
            GN4.GNoteRen(); //4번째라인
            GN4Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render15()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN3.GNoteRen(); //1번째라인
        GN3Down();
        if (rcount > 100)
        {
            GN2.GNoteRen(); //2번째라인
            GN2Down();
        }
        if (rcount > 200)
        {
            GN4.GNoteRen(); //3번째라인
            GN4Down();
        }
        if (rcount > 300)
        {
            GN1.GNoteRen(); //4번째라인
            GN1Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render16()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자




        GN3.GNoteRen(); //1번째라인
        GN3Down();
        if (rcount > 100)
        {
            GN4.GNoteRen(); //2번째라인
            GN4Down();
        }
        if (rcount > 200)
        {
            GN1.GNoteRen(); //3번째라인
            GN1Down();
        }
        if (rcount > 300)
        {
            GN2.GNoteRen(); //4번째라인
            GN2Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render17()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN3.GNoteRen(); //1번째라인
        GN3Down();
        if (rcount > 100)
        {
            GN4.GNoteRen(); //2번째라인
            GN4Down();
        }
        if (rcount > 200)
        {
            GN2.GNoteRen(); //3번째라인
            GN2Down();
        }
        if (rcount > 300)
        {
            GN1.GNoteRen(); //4번째라인
            GN1Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render18()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN4.GNoteRen(); //1번째라인
        GN4Down();
        if (rcount > 100)
        {
            GN1.GNoteRen(); //2번째라인
            GN1Down();
        }
        if (rcount > 200)
        {
            GN2.GNoteRen(); //3번째라인
            GN2Down();
        }
        if (rcount > 300)
        {
            GN3.GNoteRen(); //4번째라인
            GN3Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render19()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN4.GNoteRen(); //1번째라인
        GN4Down();
        if (rcount > 100)
        {
            GN1.GNoteRen(); //2번째라인
            GN1Down();
        }
        if (rcount > 200)
        {
            GN3.GNoteRen(); //3번째라인
            GN3Down();
        }
        if (rcount > 300)
        {
            GN2.GNoteRen(); //4번째라인
            GN2Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render20()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN4.GNoteRen(); //1번째라인
        GN4Down();
        if (rcount > 100)
        {
            GN2.GNoteRen(); //2번째라인
            GN2Down();
        }
        if (rcount > 200)
        {
            GN1.GNoteRen(); //3번째라인
            GN1Down();
        }
        if (rcount > 300)
        {
            GN3.GNoteRen(); //4번째라인
            GN3Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render21()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN4.GNoteRen(); //1번째라인
        GN4Down();
        if (rcount > 100)
        {
            GN2.GNoteRen(); //2번째라인
            GN2Down();
        }
        if (rcount > 200)
        {
            GN3.GNoteRen(); //3번째라인
            GN3Down();
        }
        if (rcount > 300)
        {
            GN1.GNoteRen(); //4번째라인
            GN1Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render22()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자



        GN4.GNoteRen(); //1번째라인
        GN4Down();
        if (rcount > 100)
        {
            GN3.GNoteRen(); //2번째라인
            GN3Down();
        }
        if (rcount > 200)
        {
            GN1.GNoteRen(); //3번째라인
            GN1Down();
        }
        if (rcount > 300)
        {
            GN2.GNoteRen(); //4번째라인
            GN2Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    void Render23()
    {
        glClearColor(0.3f, 0.3f, 0.3f, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE);
        //고정상자
        MW.MainWinRen();
        //움직이는 상자


        GN4.GNoteRen(); //1번째라인
        GN4Down();
        if (rcount > 100)
        {
            GN3.GNoteRen(); //2번째라인
            GN3Down();
        }
        if (rcount > 200)
        {
            GN2.GNoteRen(); //3번째라인
            GN2Down();
        }
        if (rcount > 300)
        {
            GN1.GNoteRen(); //4번째라인
            GN1Down();
        }
        rcount++;

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    void Input() {
        if(atouch == true)
        {
            if (GetAsyncKeyState(0x41) & 0x8000)
            {
                Result1();
            atouch = false;
            }
        }
        if (stouch == true)
        {
            if (GetAsyncKeyState(0x53) & 0x8000)
            {
                Result2();
                stouch = false;
            }
        }
        if (dtouch == true)
        {
            if (GetAsyncKeyState(0x44) & 0x8000)
            {
                Result3();;
                dtouch = false;
            }
        }
        if (ftouch == true)
        {
            if (GetAsyncKeyState(0x46) & 0x8000)
            {
                Result4();
                ftouch = false;
                
            }
        }
    }
    void Result1() {
        
        if (GN4.Ny <= -0.82f)
            MW.PlayerLifeUp();
        else if(GN4.Ny > -0.82f)
            MW.PlayerLifeDown();

        if (MW.ps <= -0.9f)
            gameStart = false;
    }
    void Result2() {

        if (GN3.Ny <= -0.82f)
            MW.PlayerLifeUp();
        else if (GN3.Ny > -0.82f)
            MW.PlayerLifeDown();

        if (MW.ps <= -0.9f)
            gameStart = false;
    }
    void Result3() {

        if (GN2.Ny <= -0.82f)
            MW.PlayerLifeUp();
        else if (GN2.Ny > -0.82f)
            MW.PlayerLifeDown();

        if (MW.ps <= -0.9f)
            gameStart = false;
    }
    void Result4() {

        if (GN1.Ny <= -0.82f)
            MW.PlayerLifeUp();
        else if (GN1.Ny > -0.82f)
            MW.PlayerLifeDown();

        if (MW.ps <= -0.9f)
            gameStart = false;
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

        void allrestate()
        {
            GN1.restate();
            GN2.restate();
            GN3.restate();
            GN4.restate();
        }

    };

    
}

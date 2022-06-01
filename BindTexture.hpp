#define _CRT_SECURE_NO_WARNINGS
#pragma once


#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

namespace G_Engine
{
	static GLuint texName;

	class BindTexture
	{

	public:
		BindTexture() {}
		~BindTexture() {}

		typedef struct tagBITMAPHEADER {
			BITMAPFILEHEADER bf;
			BITMAPINFOHEADER bi;
			RGBQUAD hRGB[256];
		}BITMAPHEADER;

		BYTE* LoadBitmapFile(BITMAPHEADER* bitmapHeader, int* imgSize, const char* filename)
		{
			FILE* fp = fopen(filename, "rb");	//������ �����б���� ����
			if (fp == NULL)
			{
				printf("���Ϸε��� �����߽��ϴ�.\n");	//fopen�� �����ϸ� NULL���� ����
				return NULL;
			}
			else
			{
				fread(&bitmapHeader->bf, sizeof(BITMAPFILEHEADER), 1, fp);	//��Ʈ��������� �б�
				fread(&bitmapHeader->bi, sizeof(BITMAPINFOHEADER), 1, fp);	//��Ʈ��������� �б�
				fread(&bitmapHeader->hRGB, sizeof(RGBQUAD), 256, fp);	//�����ȷ�Ʈ �б�

				int imgSizeTemp = bitmapHeader->bi.biWidth * bitmapHeader->bi.biHeight;	//�̹��� ������ ���
				*imgSize = imgSizeTemp;	// �̹��� ����� ���� ������ �Ҵ�

				BYTE* image = (BYTE*)malloc(sizeof(BYTE) * imgSizeTemp);	//�̹���ũ�⸸ŭ �޸��Ҵ�
				fread(image, sizeof(BYTE), imgSizeTemp, fp);//�̹��� ũ�⸸ŭ ���Ͽ��� �о����
				fclose(fp);


				return image;
			}
		}

		void BT()
		{


			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			glEnable(GL_TEXTURE_2D);
			glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
			glBindTexture(GL_TEXTURE_2D, texName);
			glBegin(GL_QUADS);
			glTexCoord2f(0.0, 1.0); 
			glVertex2f(-0.41f, 1.0f);
			glTexCoord2f(0.0, 0.0); 
			glVertex2f(-0.41f, -1.0f);
			glTexCoord2f(1.0, 0.0); 
			glVertex2f(0.41f, -1.0f);
			glTexCoord2f(1.0, 1.0); 
			glVertex2f(0.41f, 1.0f);

			glEnd();
			glFlush();
			glDisable(GL_TEXTURE_2D);
		}

		void init()
		{
			glClearColor(0.0, 0.0, 0.0, 0.0);

			BITMAPHEADER originalHeader;	//��Ʈ���� ����κ��� ���Ͽ��� �о� ������ ����ü
			int imgSize;			//�̹����� ũ�⸦ ������ ����
			BYTE* image = LoadBitmapFile(&originalHeader, &imgSize, "lena_gray.bmp"); //��Ʈ�������� �о� ȭ�������� ����
			if (image == NULL) return;        //���� �б⿡ �����ϸ� ���α׷� ����

			glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

			glGenTextures(1, &texName);
			glBindTexture(GL_TEXTURE_2D, texName);

			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,
				GL_NEAREST);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
				GL_NEAREST);

			glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 512, 512, 0, GL_RED, GL_BYTE, image);
		}
	};
}

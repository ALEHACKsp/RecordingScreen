#pragma once

#include <windows.h>

/*
��Ļ�����벥����
*/

class RecordingScreen
{
private:
	//�����ھ��
	HWND m_hWnd;

	//λͼ������
	LPBYTE m_pScreen;

	//λͼ������Ϣ
	BITMAPINFO m_stBitInfo;

	//����Ŀ�Ⱥ͸߶�
	INT m_nWidth;
	INT m_nHeight;
public:
	RecordingScreen();
	~RecordingScreen();
public:
	/*
	��ȡ��Ļλͼ [��ȡ���ص�BYTE�ĳ��Ⱦ��ǿ�ȳ��Ը߶ȳ���3]
	*@pWidth:���
	*@pHieght:�߶�
	*/
	BYTE* GetScreenBuffer(INT* pWidth = NULL, INT* pHieght = NULL);

	/*
	���ô��ڵľ��
	*@hWnd:���ھ��
	*/
	VOID SetWindowhWnd(HWND hWnd);

	/*
	���ƺ���
	*@xBegin:��ʼ���Ƶ�x��
	*@yBegin:��ʼ���Ƶ�y��
	*@nBitmapwidth:ͼƬ���
	*@nBitmapheight:ͼƬ�߶�
	*@nToWidth:���ųɶ��
	*@nToHeight:���ųɶ��
	*/
	VOID DrawScreen(CONST LPBYTE lpBuffer,
		INT xBegin = NULL, INT yBegin = NULL,
		INT nBitmapwidth = NULL, INT nBitmapheight = NULL,
		INT nToWidth = NULL, INT nToHeight = NULL);

	VOID DrawScreen(INT xBegin = NULL, INT yBegin = NULL,
		INT nToWidth = NULL, INT nToHeight = NULL);
};


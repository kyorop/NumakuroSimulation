#include <DxLib.h>
#include <memory>
#include "iscene.h"
#include "titlescene.h"
#include "scenemanager.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(true);
	SetGraphMode(800, 600, 16);
	if (DxLib_Init() == -1)
		return -1;
	SetDrawScreen(DX_SCREEN_BACK);


	//�ϐ��錾�ꏊ
	SceneManager sceneManager;
	sceneManager.Initialize();

	ChangeFont("���C���I");

	while (true)
	{
		ClearDrawScreen();

		//�����ɕ`�揈�����Ă�
		sceneManager.Update();
		sceneManager.Draw();

		ScreenFlip();

		if (ProcessMessage() < 0)
			break;
	}

	sceneManager.Fin();

	DxLib_End();
	
	return 0;
}
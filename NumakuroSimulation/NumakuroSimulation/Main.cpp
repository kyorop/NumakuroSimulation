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


	//•Ï”éŒ¾êŠ
	SceneManager sceneManager;
	sceneManager.Initialize();

	while (true)
	{
		ClearDrawScreen();

		//‚±‚±‚É•`‰æˆ—‚µ‚Ä‚Ë
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
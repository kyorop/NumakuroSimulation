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


	//変数宣言場所
	SceneManager sceneManager;
	sceneManager.Initialize();

	ChangeFont("メイリオ");

	while (!CheckHitKey(KEY_INPUT_ESCAPE))
	{
		ClearDrawScreen();

		//ここに描画処理してね
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
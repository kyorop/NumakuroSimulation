#include <DxLib.h>
#include <memory>
#include "iscene.h"
#include "titlescene.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(true);
	SetGraphMode(640, 480, 16);
	if (DxLib_Init() == -1)
		return -1;
	SetDrawScreen(DX_SCREEN_BACK);

	//•Ï”éŒ¾êŠ
	std::shared_ptr<IScene> scene;
	scene = std::make_shared<TitleScene>();

	while (true)
	{
		ClearDrawScreen();

		//‚±‚±‚É•`‰æˆ—‚µ‚Ä‚Ë
		scene->Update();
		scene->Draw();

		ScreenFlip();

		if (ProcessMessage() < 0)
			break;
	}

	DxLib_End();
	
	return 0;
}
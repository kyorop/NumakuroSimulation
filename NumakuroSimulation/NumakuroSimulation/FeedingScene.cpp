#include "FeedingScene.h"
#include <dxlib.h>
#include "examinationscene.h"

void FeedingScene::Update()
{
	if (CheckHitKey(KEY_INPUT_4))
		ChangeScene(std::make_shared<ExaminationScene>());
}

void FeedingScene::Draw()
{
}
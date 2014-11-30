#include "ExaminationScene.h"
#include <dxlib.h>
#include "studyscene.h"

void ExaminationScene::Update()
{
	if (CheckHitKey(KEY_INPUT_5))
		ChangeScene(std::make_shared<StudyScene>());
}

void ExaminationScene::Draw()
{
}
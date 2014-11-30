#pragma once
#include "iscene.h"
#include <memory>

class IventSelectScene
	:public IScene
{
private:
	int GHandle;
	int GMizu;
	int GMizu1;
	int GMizu2;
	int ivents[6];
public:
	IventSelectScene();
	void Update() override;
	const int x;
	const int y;
	int x_box;
	int y_box;
	bool inputFlag;
	char* eventStrings[6];
	void Draw() override;

	enum Event
	{
		TRAINING,
		BATTLE,
		FEED,
		EXAMINATION,
		SHOPPING,
		STUDY,
	};

	Event eventCount;
};

#pragma once
#include <memory>

class IScene;

class ISceneManager
{
public:
	virtual void ChangeScene(std::shared_ptr<IScene> nextScene) = 0;
	virtual ~ISceneManager(){};
};

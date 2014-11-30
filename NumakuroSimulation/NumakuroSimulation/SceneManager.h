#pragma once
#include <memory>

class IScene;

class SceneManager
{
public:
	SceneManager();
private:
	std::shared_ptr<IScene> scene;
public:
	void Initialize();
	void Update();
	void Draw();
	void Fin();
	void ChangeScene(std::shared_ptr<IScene> nextScene);

};

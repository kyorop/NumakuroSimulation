#pragma once
#include <memory>

class IScene;

class SceneManager
{
public:
	SceneManager();
private:
	std::shared_ptr<IScene> scene;
protected:
	void ChangeScene(std::shared_ptr<IScene> nextScene);
public:
	void Initialize();
	void Update();
	void Draw();
	void Fin();
};

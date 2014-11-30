#pragma once
#include <memory>
#include "GameManager.h"

class SceneManager;
class IScene
{
public:
	explicit IScene();
	virtual ~IScene();
	static GameManager* gameManager;
protected:
	void ChangeScene(std::shared_ptr<IScene> nextScene);

private:
	static SceneManager* manager;
public:
	virtual void Init();
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Fin();
	static void SetSceneManager(SceneManager* manager);
};

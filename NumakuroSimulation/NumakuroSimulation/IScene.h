#pragma once
#include <memory>

class SceneManager;
class IScene
{
public:
	explicit IScene();
	virtual ~IScene();
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

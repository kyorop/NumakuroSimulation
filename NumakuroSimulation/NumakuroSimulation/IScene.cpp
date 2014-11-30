#include "IScene.h"
#include "scenemanager.h"

SceneManager* IScene::manager;
GameManager* IScene::gameManager;

IScene::IScene()
{
}

IScene::~IScene()
{
}

void IScene::ChangeScene(std::shared_ptr<IScene> nextScene)
{
	manager->ChangeScene(nextScene);

}

void IScene::Init()
{
}

void IScene::Fin()
{
}

void IScene::SetSceneManager(SceneManager* manager)
{
	IScene::manager = manager;
}
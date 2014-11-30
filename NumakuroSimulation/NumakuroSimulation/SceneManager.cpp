#include "SceneManager.h"
#include "iscene.h"
#include "openingscene.h"

SceneManager::SceneManager()
{
	scene = std::make_shared<OpeningScene>();
	scene->SetSceneManager(this);
}

void SceneManager::ChangeScene(std::shared_ptr<IScene> nextScene)
{
	scene = nextScene;
}

void SceneManager::Initialize()
{
	scene->Init();
}

void SceneManager::Update()
{
	scene->Update();
}

void SceneManager::Draw()
{
	scene->Draw();
}

void SceneManager::Fin()
{
	scene->Fin();
}
#pragma once

class IScene
{
public:
	IScene();
	virtual ~IScene();

public:
	virtual void Init();
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Fin();
	
};

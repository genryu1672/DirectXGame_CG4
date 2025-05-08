#pragma once
#include"KamataEngine.h"
#include"Particle.h"
//using namespace KamataEngine;
class GameScene 
{
public:
	//初期化
	void Initialize();
	//更新
	void Update();

	//描画
	void Draw();
	
	//デストラクタ
	~GameScene();

	//カメラ
	KamataEngine::Camera camera_;
	//変数の複数化
	std::list<Particle*> particles_;
	// パーティクル発生
	void ParticleBorn(KamataEngine::Vector3 position);

private:
	// パーティクル3Dモデルデータ
	KamataEngine::Model* modelParticle_ = nullptr;
	// パーティクル
	Particle* particle_ = nullptr;
};

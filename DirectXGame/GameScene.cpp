#include "GameScene.h"

using namespace KamataEngine;

//初期化
void GameScene::Initialize() 
{
	// 3Dモデルデータの生成
	modelParticle_ = Model::CreateSphere(4, 4);
	
	//カメラの初期化
	camera_.Initialize();

	// パーティクルの生成
	particle_ = new Particle();
	// パーティクルの初期化
	particle_->Initialize();

	//3Dモデルデータの開放
	delete modelParticle_;

	// パーティクルの開放
	delete particle_;
}
//更新
void GameScene::Update() 
{
	// パーティクルの更新
	particle_->Update();
}

//描画
void GameScene::Draw() 
{
	// パーティクルの描画
	particle_->Draw();
}

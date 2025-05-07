#include "GameScene.h"

using namespace KamataEngine;

//デストラクタ
GameScene::~GameScene() {
	// 3Dモデルデータの開放
	delete modelParticle_;

	// パーティクルの開放
	for (Particle* particle : particles_)
	{
		delete particle;
	}
	particles_.clear();
}

//初期化
void GameScene::Initialize() 
{
	// 3Dモデルデータの生成
	modelParticle_ = Model::CreateSphere(4, 4);
	
	//カメラの初期化
	camera_.Initialize();

	//元々のやつparticle_ = new Particle();
	//  パーティクルの生成
	for (int i = 0; i < 150; i++)
	{
		//生成
		Particle* particle = new Particle();
		//位置
		Vector3 position = {0.5f * i, 0.0f, 0.0f};
		// パーティクルの初期化(自キャラ)
		particle->Initialize(modelParticle_, position,);
		//リストに追加
		particles_.push_back(particle);
	}

	//変更前の位置
	//Vector3 position = {0.0f, 0.0f, 0.0f};
}
//更新
void GameScene::Update() 
{
	// パーティクルの更新
	for (Particle* particle: particles_)
	{
		particle->Update();
	}
}

//描画
void GameScene::Draw() 
{
	//DirectXCommonインスタンスの取得
	DirectXCommon* dxCommon = DirectXCommon::GetInstance();
	//3Dモデル描画前処理
	Model::PreDraw(dxCommon->GetCommandList());
	// パーティクルの描画
	for (Particle* particle : particles_)
	{
		particle->Draw(camera_);
	}
	//3Dモデル描画後処理
	Model::PostDraw();
}
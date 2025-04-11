#include "GameScene.h"
using namespace KamataEngine;

//初期化
void GameScene::Initialize() 
{
	// 3Dモデルデータの生成
	modelParticle_ = Model::CreateSphere(4, 4);

	//3Dモデルデータの開放
	delete modelParticle_;
}
//更新
void GameScene::Update() 
{

}

//描画
void GameScene::Draw() 
{

}

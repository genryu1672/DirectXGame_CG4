#include "Particle.h"
#include "GameScene.h"
#include"cassert"
void Particle::Initialize(Model* model) {
	//NULLポインタチェック①
	assert(model);
	//引数として受け取ったデータをメンバ変数に記録する②
	model_ = model;
	//ワールド変換の初期化
	worldTransform_.Initialize();
}

void Particle::Update() 
{
	//行列を定数バッファに転送
	worldTransform_.TransferMatrix();
}

void Particle::Draw() 
{
	
}





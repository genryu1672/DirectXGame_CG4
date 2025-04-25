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
	//色の設定
	objectColor_.Initialize();
	color_ = {1, 1, 0, 1};
}

void Particle::Update() 
{
	//行列を定数バッファに転送
	worldTransform_.TransferMatrix();
	//色変更オブジェクトに色の数値を設定する
	objectColor_.SetColor(color_);
}

void Particle::Draw(Camera& camera) 
{
	//3Dモデルを描画(&objectColor_を追加すると色が付く)
	model_->Draw(worldTransform_, camera,&objectColor_);
}





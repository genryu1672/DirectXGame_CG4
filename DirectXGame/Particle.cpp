#include "Particle.h"
#include "GameScene.h"
#include"cassert"

using namespace MathUtility;

void Particle::Initialize(Model* model, Vector3 position, Vector3 velocity) {
	//NULLポインタチェック①
	assert(model);
	//引数として受け取ったデータをメンバ変数に記録する②
	model_ = model;
	//ワールド変換の初期化
	worldTransform_.Initialize();
	//色の設定
	objectColor_.Initialize();
	color_ = {1, 1, 0, 1};

	worldTransform_.translation_ = position;

	//受け取った移動量をメンバ変数に代入する
	velocity_ = velocity;
	//大きさ
	modelParticle_ = {0.2f, 0.2f, 0.2f};
}

void Particle::Update() 
{
	//色変更オブジェクトに色の数値を設定する
	objectColor_.SetColor(color_);
	//移動
	worldTransform_.translation_ += velocity_;//{0.0f, 0.1f, 0.0f}
	// 行列を定数バッファに転送
	//worldTransform_.TransferMatrix();
	//行列を更新
	worldTransform_.UpdateMatrix();
}

void Particle::Draw(Camera& camera) 
{
	//3Dモデルを描画(&objectColor_を追加すると色が付く)
	model_->Draw(worldTransform_, camera,&objectColor_);
}





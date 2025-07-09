#include "GameScene.h"
using namespace KamataEngine;

GameScene::GameScene() {}

GameScene::~GameScene() {
	// デストラクタ
	delete sprite_;
}

void GameScene::Initialize() {

	//ファイル名を指定してテクスチャを読み込む
	textureHandle_ = TextureManager::Load("Title.png");

	// スプライトインスタンスの生成
	sprite_ = Sprite::Create(textureHandle_, {0, 0});
}

void GameScene::Update() 
{
	//スプライトの今の座標を取得
	Vector2 position = sprite_->GetPosition();
	//座標を｛２，１｝移動
	position.x += 2.0f;
	position.y += 1.0f;
	//移動した座標をスプライトに反映
	sprite_->SetPosition(position);
}

void GameScene::Draw() 
{
	//DirectXCommonインスタンスの取得
	DirectXCommon* dxCommon = DirectXCommon::GetInstance();
	//スプライト描画前処理
	Sprite::PreDraw(dxCommon->GetCommandList());
	
	//スプライトインスタンスの描画処理
	sprite_->Draw();

	//スプライト描画後処理
	Sprite::PostDraw();
}

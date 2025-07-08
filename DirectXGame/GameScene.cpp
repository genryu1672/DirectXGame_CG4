#include "GameScene.h"
using namespace KamataEngine;

GameScene::GameScene() {}

GameScene::~GameScene() {
	// デストラクタ
	delete sprite_;
}

void GameScene::Initialize() {
	//ファイル名を指定してテクスチャを読み込む
	textureHandle_ = TextureManager::Load("Resources/Title.png");
}

void GameScene::Update() {}

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

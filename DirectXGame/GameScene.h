#pragma once
#include"KamataEngine.h"
#include "KamataEngine/Sprite.h" // Sprite クラスの定義があるヘッダー
class GameScene 
{
public:
	/// コンストクラタ
	/// </summary>
	GameScene();
	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameScene();
	//初期化
	void Initialize();
	//更新
	void Update();

	//描画
	void Draw();
private:
	// テクスチャハンドル
	uint32_t textureHandle_ = 0;

	//スプライト
	KamataEngine::Sprite* sprite_ = nullptr;
	//スプライトインスタンスの生成
	sprite_ = KamataEngine::Sprite::Create(textureHandle_, {1280, 720});
};

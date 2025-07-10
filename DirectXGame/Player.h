#pragma once
#include"KamataEngine.h"

class Player 
{
public:
	//初期化
	void Initialize(uint32_t textureHandle);
	// 更新
	void Update();
	// 描画
	void Draw();

private:
	// テクスチャハンドル
	uint32_t textureHandle_ = 0;
	
	//プレイヤー
	Player* player_ = nullptr;
};

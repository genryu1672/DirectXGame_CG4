#pragma once
#include<KamataEngine.h>
using namespace KamataEngine;
//パーティクル
class Particle 
{
public:
	//初期化
	void Initialize(Model*model);
	//更新
	void Update();
	//描画
	void Draw();
	
private://メンバ変数（アンダーバーがついてるやつが引数として受け取ったデータをメンバ変数に記録する事ができる）
	//ワールド変換データ
	WorldTransform worldTransform_;
	//モデル
	Model* model_ = nullptr;
};

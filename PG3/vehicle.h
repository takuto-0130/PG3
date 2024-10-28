#pragma once

class Vehicle {
public: // メンバ関数
	// コンストラクタ（名前を設定）
	Vehicle(const char* name) : name_(name) {};
	// デストラクタ（宣言）
	virtual ~Vehicle() {};
	// 車両名と車輪の数を表示
	virtual void GetNumWheels() {};

protected: // メンバ変数
	const char* name_;	// 車両名
	int wheels_ = 0;	// 車輪数
};
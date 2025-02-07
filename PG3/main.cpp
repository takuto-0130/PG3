#include <stdio.h>
#include <string>
#include <chrono>

int main() {
	const int SIZE = 100000;
	std::string stringA(SIZE, 'a'); // 10万文字の 'a' で初期化

	// コピーの時間測定
	auto startCopy = std::chrono::high_resolution_clock::now();
	std::string copyA = stringA; // コピー
	auto endCopy = std::chrono::high_resolution_clock::now();
	auto copyTime = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy);

	// 移動の時間測定
	auto startMove = std::chrono::high_resolution_clock::now();
	std::string moveA = std::move(stringA); // 移動
	auto endMove = std::chrono::high_resolution_clock::now();
	auto moveTime = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove);

	// 結果を表示
	printf_s("コピー時間 : %lld マイクロ秒\n", copyTime.count());
	printf_s("移動時間 : %lld マイクロ秒\n", moveTime.count());

	return 0;
}
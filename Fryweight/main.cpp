#include "Fryweight.h"

// 主にリソースの使いまわしで用いられるパターンです。
// 同一オブジェクトを使いまわしてメモリの使用を節約したいときに推奨されます。

// 使いまわしに関してはデバック実行で確認
int main()
{
	auto fry = Fryweight::get();

	// 新規読み込み
	std::string word1 = fry->getName("Hellow");
	std::string word2 = fry->getName("Good");
	// 2度目の読み込み
	std::string word3 = fry->getName("Hellow");

	//現在使われている分を開放
	fry->release("Hellow");
	fry->release("Hellow");

	// 解放後の新規読み込み
	word1 = fry->getName("Hellow");
}
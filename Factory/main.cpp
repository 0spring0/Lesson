#include "Factory.h"
#include <vector>
#include <memory>

// このパターンは生成管理を一つのクラスで行うことで生成処理を管理しやすくするパターンです。
// 主に敵の生成やアイテム、フィールド情報の生成など同じような情報群を管理するときに推奨されます。

int main()
{
	std::vector<Base*> list;

	list.push_back(Factory::get()->create(ID::kItem));
	list.push_back(Factory::get()->create(ID::kCoin));

	for (auto& itr : list)
		itr->draw();

	// create関数でnewでオブジェクトを確保しているので開放処理を忘れないように
	for (auto itr = list.begin(); itr != list.end();)
	{
		delete (*itr);
		itr = list.erase(itr);
	}

	// テンプレートバージョンとunique_ptrを用いたverも記載しておく
	std::vector<std::unique_ptr<Base>> unique_list;

	// もしBaseを継承してないクラスで同じことをしようとするとコンパイルエラーになる
	unique_list.push_back(std::unique_ptr<Base>(Factory::get()->create<Item>()));
	unique_list.push_back(std::unique_ptr<Base>(Factory::get()->create<Coin>()));

	for (auto& itr : unique_list)
		itr->draw();
}
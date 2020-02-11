#include "Circle.h"
#include "Box.h"

#include <vector>

// このデザインパターンはクラス自体が肥大化しやすいパターンで拡張性があまりないパターンになります。
// なので利用時はある程度対応させる媒体( 今回は形状 )が確立または上限がある場合に推奨されます。

int main()
{
	std::vector<Shape*> object_list_;

	object_list_.push_back(new Circle);
	object_list_.push_back(new Box);

	// 全衝突判定
	for (auto& owner : object_list_)
	{
		for (auto& target : object_list_)
		{
			// この段階リストの中身はすべてShape*型なので何の形状なのかわからない
			// 関数での動きについてはデバック実行でどのような動作で形状判定を取っているのか確認してください
			owner->collision(target);
		}
	}

	// 開放処理
	for (auto itr = object_list_.begin(); itr != object_list_.end(); ++itr)
		delete (*itr);
}
// 最初のシーン
#include "SceneA.h"
#include <memory>

// 主にシーン遷移で用いられるパターンです。
// 新規シーンの追加や遷移先の変更がしやすいパターンです。

//シーン遷移に関しては"State"のほかに"関数ポインタ"を用いたものと"switch文"を用いたものがあるので知っておいて損はないと思います。

// コンソール入力で0で終了1で次のシーンへその他で移動なし

int main()
{
	// 個人的にこれらの動作はunique_ptrを使って行っている。
	// 利用しないverについて知りたい人は個人的に勉強するか聞いてください。
	// 作りについては各シーンをSceneBaseを参照

	std::unique_ptr<SceneBase> scene;

	scene = std::make_unique<SceneA>();

	if (scene->init() == false)
		return 0;

	while (true)
	{
		SceneBase* temp = scene->update();

		//ここでシーンの切り替えを行っている
		if (temp == nullptr)
			break;
		else if (temp != scene.get())
		{
			if (temp->init() == false)
				break;

			scene.reset(temp);
		}

		scene->draw();
	}
}
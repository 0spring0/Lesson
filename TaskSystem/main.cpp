#include "TaskClass.h"
#include "TaskFunction.h"
#include "Object.h"

#include <functional>

// これはデザインパターンではないですが、構造として割と使い勝手の良いものになります。
// 利用法はいろいろありますが、主に関数の実行を管理するために用いられます。
// また、ここでは関数の実行を管理していますが、作り方によっては関数の実行順の管理ができたりもします。

// タスクシステム自体多くのやり方があるためここでは2種類紹介します。
// 細かな動作に関してはデバック実行で確認してください。
int main()
{
	Object obj1(1);
	Object obj2(2);

	// クラス単位のタスクシステム
	TaskClass::get()->regist(&obj1);
	TaskClass::get()->regist(&obj2);

	TaskClass::get()->update();
	TaskClass::get()->draw();

	// タスクからの削除
	TaskClass::get()->unregist(&obj1);
	TaskClass::get()->unregist(&obj2);
	TaskClass::get()->update();
	TaskClass::get()->draw();

	// 関数単位のタスクシステム
	TaskFunction::get()->regist(std::bind(&Object::func,&obj1));
	TaskFunction::get()->regist(std::bind(&Object::update, &obj1));
	TaskFunction::get()->regist(std::bind(&Object::func, &obj2));

	TaskFunction::get()->run();

	// タスクからの削除
	// 特定の関数のみ消す処理ができないため毎ループで呼びたい関数を登録、処理終了時に全削除といった使い方になりそうです。
	// もし特定の関数のみ消す方法を見つけた場合は教えてください。
	TaskFunction::get()->clear();
	TaskFunction::get()->run();
}
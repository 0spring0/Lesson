#include "Sprite.h"

	// Singletonは実体が1つしか存在できないことが保証されたパターンです。
	// staticでクラスを作成した場合と同等の使い方ができます。

	// 作りに関してはSprite.hを参照

int main()
{

	//実際に利用するときは実体をもらってから処理関数を呼び出す。
	Sprite::get()->draw();
}

# include <Siv3D.hpp>
# include "Sources\Ball.h"

void Main()
{
	const Font font(30);
	Ball* ball = new Ball(L"Pandra", 25000, Position(0, 0), Position(200, 200), 10);
	while (System::Update())
	{
		ball->draw();
	}
}

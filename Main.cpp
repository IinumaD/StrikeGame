
# include <Siv3D.hpp>
# include "Sources\Ball.h"
# include "Sources\Pull.h"

void Main()
{
	const Font font(30);
	Ball* ball = new Ball(L"Pandra", 25000, 310.55, 20100, Position(0, 0), Position(200, 200), 10);
	Pull* pull = NULL;
	while (System::Update())
	{
		if (Input::MouseL.clicked) {
			pull = new Pull(Mouse::Pos());
		}
		if (pull != NULL) {	
			if (Input::MouseL.pressed) {
				pull->createVector(Mouse::Pos());
				pull->draw();
			}
		}
		if (Input::MouseL.released) {
			ball->start(pull->calcRadians());
			delete pull;
		}
		ball->move();
		ball->draw();
	}
}

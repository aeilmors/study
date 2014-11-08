#include "Screen.h"

void Screen::some_member() const
{
	++access_ctr;
}


void WindowMrg::Clear(ScreenIndex i) {
	Screen &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}

//int main()
//{
//
//}

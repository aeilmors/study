#include "Screen.h"

void Screen::some_member() const
{
	++access_ctr;
}

Screen::pos Screen::size() const {
	return height * width;
}


void WindowMrg::Clear(ScreenIndex i) {
	Screen &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}

WindowMrg::ScreenIndex WindowMrg::addScreen(const Screen &s) {
	screens.push_back(s);
	return screens.size() - 1;
}

//int main()
//{
//
//}

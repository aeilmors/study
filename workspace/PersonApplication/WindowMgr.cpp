/*
 * WindowMgr.cpp
 *
 *  Created on: 2014年11月10日
 *      Author: jt
 */

#include "WindowMgr.h"

WindowMgr::WindowMgr() {
	// TODO Auto-generated constructor stub

}

WindowMgr::~WindowMgr() {
	// TODO Auto-generated destructor stub
}

void WindowMgr::clear(ScreenIndex i) {
	Screen &s = screens[i];
	s.contents = std::string(s.width * s.height, ' ');
}

WindowMgr::ScreenIndex WindowMgr::addScreen(const Screen &s) {
	screens.push_back(s);
	return screens.size() - 1;
}


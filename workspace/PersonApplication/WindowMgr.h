/*
 * WindowMgr.h
 *
 *  Created on: 2014年11月10日
 *      Author: jt
 */

#ifndef WINDOWMGR_H_
#define WINDOWMGR_H_

#include <vector>
#include "Screen.h"

class WindowMgr {
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	WindowMgr();
	virtual ~WindowMgr();

	void clear(ScreenIndex);
	ScreenIndex addScreen(const Screen &s);
private:
	std::vector<Screen> screens{Screen(24, 80, ' ')};
};

#endif /* WINDOWMGR_H_ */

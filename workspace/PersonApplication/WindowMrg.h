/*
 * WindowMrg.h
 *
 *  Created on: 2014年11月7日
 *      Author: jt
 */

#ifndef WINDOWMRG_H_
#define WINDOWMRG_H_

#include <vector>
#include "Screen.h"
namespace std {

class WindowMrg {
public:
	WindowMrg() = default;
	virtual ~WindowMrg();
private:
	vector<Screen> screens{ Screen(24, 80, ' ') };
};

} /* namespace std */

#endif /* WINDOWMRG_H_ */

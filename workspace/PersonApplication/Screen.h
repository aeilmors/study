#ifndef __SCREEN_H__
#define __SCREEN_H__

#include <iostream>
#include <string>
#include <vector>
//#include "WindowMrg.h"

class Screen {
public:
	typedef std::string::size_type pos;
	Screen() = default;	//default constructor
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

	char get() const { return contents[cursor]; }	//get the char of cursor
	char get(pos r, pos c) const;	//get the position(ht, wd)
	Screen &set(char c);
	Screen &set(pos row, pos col, char c);
	Screen &move(pos row, pos col);	//move the cursor by row r, column c
	Screen &display(std::ostream &os) {do_display(os); return *this;}
	const Screen &display(std::ostream &os)const {do_display(os); return *this; }
	void some_member() const;
	pos size() const;

	friend class WindowMrg;
//	friend WindowMrg::Clear(ScreenIndex);	//first WindowMrg and declare Clear(), then Screen, then define Clear()

private:
	pos cursor = 0;	//current cursor position
	pos height = 0, width = 0;	//height of position, width of position
	std::string contents;
	mutable size_t access_ctr = 0;	//the member function called time(s)

	void do_display(std::ostream &os) const;
};

inline Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

inline char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row + c];
}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos row, pos col, char c)
{
	contents[row * width + col] = c;
	return *this;
}

inline void Screen::do_display(std::ostream &os) const {
	for (pos index = 0; index != contents.size(); ++index) {
		if (!(index % width) && index) {
			os << std::endl;
		}
		os << contents[index];
	}
	os << std::endl;
}

class WindowMrg {
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	WindowMrg() = default;
	virtual ~WindowMrg();

	void Clear(ScreenIndex);
	ScreenIndex addScreen(const Screen &s);
private:
	std::vector<Screen> screens{ Screen(24, 80, ' ') };
};

#endif

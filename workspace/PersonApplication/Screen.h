#ifndef __SCREEN_H__
#define __SCREEN_H__

#include <string>

class Screen {
public:
	typedef std::string::size_type pos;
	Screen() = default;	//default constructor
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
	char get() const { return contents[cursor]; }	//get the char of cursor
	inline char get(pos ht, pos wd) const;	//get the position(ht, wd)
	Screen &move(pos r, pos c);	//move the cursor by row r, column c
	void some_member() const;
private:
	pos cursor = 0;	//current cursor position
	pos height = 0, width = 0;	//height of position, width of position
	std::string contents;
	mutable size_t access_ctr = 0;	//the member function called time(s)
};

#endif

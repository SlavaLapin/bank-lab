
#ifndef MENU_H
#define MENU_H

struct menu_item
{
 	char [] name;
 	char button;
 	void (*handler)();
 	menu_item [] children;
}

#endif

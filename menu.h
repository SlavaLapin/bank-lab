
#ifndef MENU_H
#define MENU_H

typedef struct option
{
	char* name;
	char button;
	char* text;
	char* secondary_text;
	int isVisible;
	int level;
	void(*handler)();

	option* children;
	int children_amount;
	void(*addChild )();
};

typedef struct menu
{
	option* option_stack;
	int option_amount;
	void(*create)();
	void(*display)();
	void(*add_option)();
};

#endif

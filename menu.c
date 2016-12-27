#include <menu.h>
#include <stdlib.h>
#include <stdio.h>

void display_menu_function(*menu M)
{
	option* tmp;
	int counter = 1;
	char inp;
	int correct = 0;
	for (int i = 0; i < M.option_amount; i++) { //Present options
		tmp = M.option_stack + i;
		if (*tmp.isVisible) {
			for (int num = 0; num < *tmp.level; num++) printf("    ");
			printf("%d. %s", &counter, &(*tmp.text));
			counter++;
		}
	}

	while (!correct) { //Select option
		inp = getchar(); //Get Selection
		fflush(stdin);
		for (int i = 0; i < M.option_amount; i++) { //check each option's .button
			tmp = M.option_stack + i;
			if ((*tmp.isVisible) && (*tmp.button == inp)) { //if button matches and the option is availible
				correct = 1;
				if (*tmp.children_amount > 0) *tmp.handler(tmp); //if this option is a drop-out menu
				else *tmp.handler(); //if this is just an option
			}
		}
		if (!correct) printf("!INPUT ERROR! Invalid option. Please refer to the options list provided on the screen.\n");
	}
}

void add_option_function(*menu M, char* name, char button, char* text, char* sec_text, int visibility)
{
	// M.option_amount++
	// option* tmp;
	// tmp = realloc (M.option_stack, M.option_amount);
	// if (!tmp) M.option_stack = tmp;
	// else { printf ("!!! INTERNAL ERROR !!! Failed to add menu option: %s", name); return 1; }
	// tmp = M.option_stack + (M.option_amount - 1); that's the last option
	// set all tmp.values using provided func arguments
	// set level to 0
}

void init_menu_function(*menu M, char type)
{
	if (type = 's') {
		//connect methods and functions
		//M.option_stack = realloc ().........................
	}
}
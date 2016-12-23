#ifndef DATA_H
#define DATA_H

typedef struct entry
{
	char [] name;
	unsigned int number;
	unsigned int exp_m;
	unsigned int exp_y;
	entry* prev;
	void (delete*) ();
	
	
}

void search (char mode);

void create ();


	

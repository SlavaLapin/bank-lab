#ifndef DATA_H
#define DATA_H

typedef struct entry
{
	char [] name;
	unsigned int number;
	unsigned int exp_m;
	unsigned int exp_y;
	entry* prev; //stores a pointer to the previous entry with the same name
	
	
}

typedef struct book
{
	entry* top;
	unsigned int length;
	void (delete*) (*book);
	void (add*) (*book);
	void (find*) (char, *book);
	void (load*) (*book);
	void (save*) (*book);
}	

void search (char mode, *book b);

void create (*book b);

void destroy (*book b);

void loadf (*book b, char* filename);

void savef (book* b);
	
#endif DATA_H

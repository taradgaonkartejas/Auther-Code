#ifndef AUTHOR_H
#define AUTHOR_H
#include <iostream>
using namespace std;
class Author
{
	private:
		string author_name;
		string book_name;
		int book_published;
		int book_sale;
	public:
		Author();
		Author(	string author_name, string book_name, int book_published, int book_sale);
    
        void Availabe_copies();
        void Calculate_copies();
};

#endif

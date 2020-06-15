#include "Library.h"

Library::Library():books(nullptr),size(0){}

Library::Library(const Library& other){
	size = other.size;
	books = new Book[size];
	for (int i = 0; i < size; i++)
		books[i] = other.books[i];
}

Library::~Library(){
	delete[]books;
	size = 0;
}

void Library::AddBook(const Book& newBook){
	Book* res = new Book[++size];
	for (int i = 0; i < size - 1; i++)
		res[i] = books[i];
	res[size - 1] = newBook;
	delete[]books;
	books = res;
}

void Library::ShowBooks() const{
	for (int i = 0; i < size; i++) {
		cout << i + 1 << ".";
		books[i].Show();
		cout << endl;
	}
	cout << endl;
}

void Library::SortByTitle(){
	int imin = 0;
	for (int i = 0; i < size - 1; i++) {
		imin = i;
		for (int j = i + 1; j < size; j++)
			if (books[j].title < books[imin].title)
				imin = j;
		if (imin > i)
			swap(books[i], books[imin]);
	}
}

void Library::SortByAuthor(){
	int imin = 0;
	for (int i = 0; i < size - 1; i++) {
		imin = i;
		for (int j = i + 1; j < size; j++)
			if (books[j].author < books[imin].author)
				imin = j;
		if (imin > i)
			swap(books[i], books[imin]);
	}
}

void Library::SortByPublishingHouse(){
	int imin = 0;
	for (int i = 0; i < size - 1; i++) {
		imin = i;
		for (int j = i + 1; j < size; j++)
			if (books[j].publishingHouse < books[imin].publishingHouse)
				imin = j;
		if (imin > i)
			swap(books[i], books[imin]);
	}
}

void Library::SortByYear(){
	int imin=0;
	for (int i = 0; i < size - 1; i++) {
		imin = i;
		for (int j = i + 1; j < size; j++)
			if (books[j].year < books[imin].year)
				imin = j;
		if (imin > i)
			swap(books[i], books[imin]);
	}
}

void Library::SortByRating(){
	int imin = 0;
	for (int i = 0; i < size - 1; i++) {
		imin = i;
		for (int j = i + 1; j < size; j++)
			if (books[j].rating < books[imin].rating)
				imin = j;
		if (imin > i)
			swap(books[i], books[imin]);
	}
}

void Library::SearchByTitle(string title) const{
	bool res = false;
	for (int i = 0; i < size; i++) {
		if (books[i].title.find(title) != string::npos) {
			res = true;
			books[i].Show();
			cout << endl;
		}
	}
	if (res == false)
		cout << "Books with entered title not found.\n";
}

void Library::SearchByAuthor(string author) const{
	bool res = false;
	for (int i = 0; i < size; i++) {
		if (books[i].author.find(author) != string::npos) {
			res = true;
			books[i].Show();
			cout << endl;
		}
	}
	if (res == false)
		cout << "Books with entered author not found.\n";
}

void Library::SearchByPublishingHouse(string publishingHouse) const{
	bool res = false;
	for (int i = 0; i < size; i++) {
		if (books[i].publishingHouse.find(publishingHouse) != string::npos) {
			res = true;
			books[i].Show();
			cout << endl;
		}
	}
	if (res == false)
		cout << "Books with entered title not found.\n";
}

void Library::SearchByYear(int year) const{
	bool res = false;
	for (int i = 0; i < size; i++) {
		if (books[i].year == year) {
			res = true;
			books[i].Show();
			cout << endl;
		}
	}
	if (res == false)
		cout << "Books with entered title not found.\n";
}

void Library::SearchByRating(double rating) const{
	bool res = false;
	for (int i = 0; i < size; i++) {
		if (books[i].rating == rating) {
			res = true;
			books[i].Show();
			cout << endl;
		}
	}
	if (res == false)
		cout << "Books with entered title not found.\n";
}

Library& Library::operator=(const Library& other){
	if (this == &other)
		return *this;
	size = other.size;
	delete[]books;
	books = new Book[size];
	for (int i = 0; i < size; i++)
		books[i] = other.books[i];
	return *this;
}

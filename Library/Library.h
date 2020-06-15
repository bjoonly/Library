#pragma once
#include"Book.h"
class Library{
	Book *books;
	int size;
public:
	Library();
	Library(const Library& other);
	~Library();
	void AddBook(const Book& newBook);
	void ShowBooks()const;

	void SortByTitle();
	void SortByAuthor();
	void SortByPublishingHouse();
	void SortByYear();
	void SortByRating();

	void SearchByTitle(string title)const;
	void SearchByAuthor(string author)const;
	void SearchByPublishingHouse(string publishingHouse)const;
	void SearchByYear(int year)const;
	void SearchByRating(double rating)const;

	Library& operator=(const Library& other);
};


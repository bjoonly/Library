#include "Book.h"

Book::Book(string title, string author, string publishingHouse, int year, double rating):year(0),rating(0){
	this->title = title;
	this->author = author;
	this->publishingHouse = publishingHouse;
	SetYear(year);
	SetRating(rating);
}

void Book::SetTitle(string title){
	this->title = title;
}

void Book::SetAuthor(string author){
	this->author = author;
}

void Book::SetPublishingHouse(string publishingHouse){
	this->publishingHouse = publishingHouse;
}

void Book::SetYear(int year){
	if (year > 0)
	this->year = year;
}

void Book::SetRating(double rating){
	if (rating > 0 && rating <6)
		this->rating = rating;
}

void Book::Show() const{
	cout << "Title: " <<title << "\nAuthor: " <<author << "\nPublishing house: " <<publishingHouse <<
		"\nYear: " <<year << "\nRating: " << rating << endl;
}



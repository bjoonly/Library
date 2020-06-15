#include<iostream>
#include"Library.h"
using namespace std;

int main() {
	Library l1;
	l1.AddBook(Book("Thirteen Reasons Why", "Jay Asher", "Penguin Books", 2007, 3.93));
	l1.AddBook(Book("Mother Night", "Kurt Vonnegut", "Holt, Rinehart and Winston", 1961, 4.4));
	l1.AddBook(Book("Cat's Cradle", "Kurt Vonnegut", "Holt, Rinehart and Winston", 1963, 4.2));
	l1.AddBook(Book("Les Quatre fils du Docteur March", "Brigitte Aubert", "Seuil", 1992, 3.6));
	l1.ShowBooks();
	cout << "\nSeach by author:\n";
	l1.SearchByAuthor("Kurt");
	cout << "\nSeach by title:\n";
	l1.SearchByTitle("Cat");
	cout << "\nSort by rating:\n";
	l1.SortByRating();
	l1.ShowBooks();
	cout << "Sort by title:\n";
	l1.SortByTitle();
	l1.ShowBooks();
	cout << "Sort by year:\n";
	l1.SortByYear();
	l1.ShowBooks();
	cout << "Sort by publishing house:\n";
	l1.SortByPublishingHouse();
	l1.ShowBooks();
	
	return 0;
}
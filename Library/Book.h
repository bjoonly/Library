#pragma once
#include<iostream>
#include<string>
using namespace std;

class Book{
	
	string title;
	string author;
	string publishingHouse;
	int year;
	double rating;

public:
	Book(string title="No title",string author="No author",string publishingHouse="No publishing house",int year=0,double rating=0.0);
	
	void SetTitle(string title);
	void SetAuthor(string author);
	void SetPublishingHouse(string publishingHouse);
	void SetYear(int year);
	void SetRating(double rating);


	void Show()const;
	friend class Library;
};


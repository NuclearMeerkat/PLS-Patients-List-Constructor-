#pragma once
#include <iostream>

// Class Patient which describe object of patient of hospital 
class Patient
{
public:

	// Getters
	std::string Getlname() { return lname; }
	std::string Getfname() { return fname; }
	std::string Getsurname() { return surname; }

	std::string Getday() { return day; }
	std::string Getmonth() { return month; }
	std::string Getyear() { return year; }

	std::string Getheight() { return height; }
	std::string Getweight() { return weight; }

	std::string Getblood() { return blood; }
	std::string Getdiagnoz() { return diagnoz; }

	// Setters
	void Setlname(std::string lname) { this->lname = lname; }
	void Setfname(std::string fname) { this->fname = fname; }
	void Setsurname(std::string surname) { this->surname = surname; }

	void Setday(std::string day) { this->day = day; }
	void Setmonth(std::string month) { this->month = month; }
	void Setyear(std::string year) { this->year = year; }
	
	void Setheight(std::string height) { this->height = height; }
	void Setweight(std::string weight) { this->weight = weight; }

	void Setblood(std::string blood) { this->blood = blood; }
	void Setdiagnoz(std::string diagnoz) { this->diagnoz = diagnoz; }
private:
	// Fields

	// Initials
	std::string lname;    // Last name
	std::string fname;    // First name
	std::string surname;  // Surname

	// Birthday
	std::string day;              
	std::string month;			  
	std::string year;			  
	
	// Physical characteristics
	std::string height;         
	std::string weight;		  

	// Data for the doctor
	std::string blood;    
	std::string diagnoz;  

};

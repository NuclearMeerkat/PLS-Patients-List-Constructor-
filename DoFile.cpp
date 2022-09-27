#include <fstream>
#include "DoFile.h"

using namespace System;

Patient temp; // Temporary variable

bool NameSave(std::string fileName) // Recording the name of the current file
{
	std::ofstream file("FILENAME.bin");   
	if (!file) { return false; }					   

	file << fileName;

	file.close();

	return true;
}

bool NameRead(std::string& fileName) // Reading the name of the current file
{
	std::ifstream file("FILENAME.bin");
	if (!file) { return false; }

	file >> fileName;

	file.close();

	return true;
}

bool DataSave(List<Patient>& list, std::string fileName) // Saving data to a binary file, if the operation failed return false
{
	std::ofstream file(fileName, std::ios::binary);    
	if (!file) { return false; }					   
	for (int i = 0; i < list.GetSize(); i++)		   
	{
		file.write((char*)&list[i], sizeof(Patient));
	}
	file.close();                                     
	return true;									   
}

bool DataRead(List<Patient>& list, std::string fileName) // Reading data from a binary file, if the operation failed return false
{
	list.DelAll();
	std::ifstream file(fileName, std::ios::binary);      
	if (!file) { return false; }						 

	for (int i = 0;!file.eof(); i++)					 
	{
		file.read((char*)&temp, sizeof(Patient));		 
		list.Add(temp);									 							 
	}
	list.Del(list.GetSize() - 1);
	file.close();                                         

	return true;                                         
}

bool FileClear(std::string fileName) // Cleaning the file
{
	std::ofstream file(fileName, std::ios::out | std::ios::trunc);
	if (!file) { return false; };
	file.close();
	return true;
}

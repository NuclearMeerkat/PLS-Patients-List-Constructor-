#pragma once
// The library is intended for working with files for this program
// In general, this library allows you to transfer data between forms

#include<iostream>

#include "List.h"
#include "Patient.h"

// Functions for writing and reading the name of the current file
bool NameSave(std::string fileName);
bool NameRead(std::string& fileName);

// Functions for writing and reading a letter to a binary file
bool DataSave(List<Patient>& list, std::string fileName);
bool DataRead(List<Patient>& list, std::string fileName);

// Cleaning the file
bool FileClear(std::string fileName);
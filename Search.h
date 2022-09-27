#pragma once

#include "List.h"
#include "Patient.h"

// Functions for implementing the search for matches in the fields of the Patient class

void FindLname(List<Patient>& list, List<int>& indexes, std::string str);
void FindName(List<Patient>& list, List<int>& indexes, std::string str);
void FindSurname(List<Patient>& list, List<int>& indexes, std::string str);
void FindDate(List<Patient>& list, List<int>& indexes, std::string str);

void FindHeight(List<Patient>& list , List<int>& indexes ,std::string str);
void FindWeight(List<Patient>& list, List<int>& indexes, std::string str);

void FindBlood(List<Patient>& list, List<int>& indexes, std::string str);
void FindDiagnoz(List<Patient>& list, List<int>& indexes, std::string str);
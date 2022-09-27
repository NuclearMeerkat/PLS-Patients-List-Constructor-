#pragma once
#include "List.h"
#include "Patient.h"


// Functions for sorting by various fields of the Patient class
void LnameSort(List<Patient>& list);
void NameSort(List<Patient>& list);
void SurnameSort(List<Patient>& list);

void DateSort(List<Patient>& list);

void HightSort(List<Patient>& list);
void WeightSort(List<Patient>& list);

void BloodSort(List<Patient>& list);
void DiagnozSort(List<Patient>& list);

void InvertList(List<Patient>& list);

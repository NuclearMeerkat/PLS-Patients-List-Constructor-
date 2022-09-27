#pragma once

//This library is designed to facilitate text conversion (String^,std::string)
#include <iostream>
using namespace System;

std::string& Convert_String_to_string(String^ s, std::string& os); //convert System::string^ to std::string
String^ Convert_string_to_String(std::string& os, String^ s); //convert std::string to System::string^
std::string& Convert_String_to_string(String^ s); //convert System::string^ to std::string
String^ Convert_string_to_String(std::string& os); //convert std::string to System::string^
System::String^ Convert_char_to_String(char* ch); //convert char* to System::string^
char* Convert_String_to_char(System::String^ string); //convert System::string^ to char*
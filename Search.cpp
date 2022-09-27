#include <string>
#include "Search.h"

// Logical search functions can be divided into two groups: for numbers and strings.
// Therefore, a detailed description of the logic of the function will be in FindLname() and FindHeight()

void FindLname(List<Patient>& list, List<int>& indexes, std::string str)
{
	// The idea of the search method is to find indexes of elements that fit the search parameter,
	// write them to the list of indexes for further use in the output
	// searched elements

	indexes.DelAll();              
	int length = list.GetSize();   // We store the length of the list in a separate variable


	
	for (int i = 0; i < list.GetSize(); i++)  
	{
		indexes.Add(-1);
	}

	for (int j = 0; j < list.GetSize(); j++)
	{
		
		for (int i = 0; i < str.length(); i++)
		{
			if (list[j].Getlname()[i] == str[i]) 
			{
				indexes[j] = j;
			}
			else 
			{
				indexes[j] = -1;
				break;
			}
		}
	}

	// Clearing indexes from elements with a value of -1
	for (int i = 0; i < length; i++)
	{
		if (indexes[i] == -1)
		{
			indexes.Del(i);
			length--;
			i--;
		}
	}
}

void FindName(List<Patient>& list, List<int>& indexes, std::string str)
{
	indexes.DelAll();
	int length = list.GetSize();


	for (int i = 0; i < list.GetSize(); i++)
	{
		indexes.Add(-1);
	}

	for (int j = 0; j < list.GetSize(); j++)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (list[j].Getfname()[i] == str[i])
			{
				indexes[j] = j;
			}
			else
			{
				indexes[j] = -1;
				break;
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		if (indexes[i] == -1)
		{
			indexes.Del(i);
			length--;
			i--;
		}
	}
}

void FindSurname(List<Patient>& list, List<int>& indexes, std::string str)
{
	indexes.DelAll();
	int length = list.GetSize();


	for (int i = 0; i < list.GetSize(); i++)
	{
		indexes.Add(-1);
	}

	for (int j = 0; j < list.GetSize(); j++)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (list[j].Getsurname()[i] == str[i])
			{
				indexes[j] = j;
			}
			else
			{
				indexes[j] = -1;
				break;
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		if (indexes[i] == -1)
		{
			indexes.Del(i);
			length--;
			i--;
		}
	}
}

void FindDate(List<Patient>& list, List<int>& indexes, std::string str)
{
	indexes.DelAll();
	int length = list.GetSize();


	for (int i = 0; i < list.GetSize(); i++)
	{
		indexes.Add(-1);
	}

	for (int j = 0; j < list.GetSize(); j++)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if ((list[j].Getday() + "." + list[j].Getmonth() + "." + list[j].Getyear())[i] == str[i])
			{
				indexes[j] = j;
			}
			else
			{
				indexes[j] = -1;
				break;
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		if (indexes[i] == -1)
		{
			indexes.Del(i);
			length--;
			i--;
		}
	}
}

void FindHeight(List<Patient>& list, List<int>& indexes, std::string str)
{
	for (int i = 0; i < list.GetSize()-1; i++) 
	{
		if (list[i].Getheight() == str)  
		{
			indexes.Add(i);
		}
	}
}

void FindWeight(List<Patient>& list, List<int>& indexes, std::string str)
{
	for (int i = 0; i < list.GetSize() - 1; i++)
	{
		if (list[i].Getweight() == str)
		{
			indexes.Add(i);
		}
	}
}

void FindBlood(List<Patient>& list, List<int>& indexes, std::string str)
{
	indexes.DelAll();
	int length = list.GetSize();


	for (int i = 0; i < list.GetSize(); i++)
	{
		indexes.Add(-1);
	}

	for (int j = 0; j < list.GetSize(); j++)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (list[j].Getblood()[i] == str[i])
			{
				indexes[j] = j;
			}
			else
			{
				indexes[j] = -1;
				break;
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		if (indexes[i] == -1)
		{
			indexes.Del(i);
			length--;
			i--;
		}
	}
}

void FindDiagnoz(List<Patient>& list, List<int>& indexes, std::string str)
{
	indexes.DelAll();
	int length = list.GetSize();


	for (int i = 0; i < list.GetSize(); i++)
	{
		indexes.Add(-1);
	}

	for (int j = 0; j < list.GetSize(); j++)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (list[j].Getdiagnoz()[i] == str[i])
			{
				indexes[j] = j;
			}
			else
			{
				indexes[j] = -1;
				break;
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		if (indexes[i] == -1)
		{
			indexes.Del(i);
			length--;
			i--;
		}
	}
}

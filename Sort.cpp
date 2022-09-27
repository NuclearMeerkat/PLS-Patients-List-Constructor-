#include "Sort.h"

/
void LnameSort(List<Patient> &list)
{
	for (int i = 0; i < list.GetSize() - 1; i++)
	{
		for (int j = 0; j < list.GetSize() - 1; j++)
		{
			if (list[j].Getlname() > list[j + 1].Getlname())  
			{
				list.Swap(j, j + 1); 
			}
		}
	}
}

void NameSort(List<Patient>& list)
{
	for (int i = 0; i < list.GetSize() - 1; i++)
	{
		for (int j = 0; j < list.GetSize() - 1; j++)
		{
			if (list[j].Getfname() > list[j + 1].Getfname())
			{
				list.Swap(j, j + 1);
			}
		}
	}
}

void SurnameSort(List<Patient>& list)
{
	for (int i = 0; i < list.GetSize() - 1; i++)
	{
		for (int j = 0; j < list.GetSize() - 1; j++)
		{
			if (list[j].Getsurname() > list[j + 1].Getsurname())
			{
				list.Swap(j, j + 1);
			}
		}
	}
}

void DateSort(List<Patient>& list)
{
	for (int i = 0; i < list.GetSize() - 1; i++)
	{
		for (int j = 0; j < list.GetSize() - 1; j++)
		{
			if (list[j].Getday() > list[j+1].Getday())
			{
				list.Swap(j, j + 1);
			}
		}
	}
	for (int i = 0; i < list.GetSize() - 1; i++)
	{
		for (int j = 0; j < list.GetSize() - 1; j++)
		{
			if (list[j].Getmonth() >  list[j + 1].Getmonth())
			{
				list.Swap(j, j + 1);
			}
		}
	}
	for (int i = 0; i < list.GetSize() - 1; i++)
	{
		for (int j = 0; j < list.GetSize() - 1; j++)
		{
			if ( list[j].Getyear() > list[j + 1].Getyear())
			{
				list.Swap(j, j + 1);
			}
		}
	}
}

void HightSort(List<Patient>& list)
{
	for (int i = 0; i < list.GetSize()-1; i++)
	{
		for (int j = 0; j < list.GetSize()-1; j++)
		{
			if (list[j].Getheight() > list[j + 1].Getheight())
			{
				list.Swap(j, j + 1);
			}
		}
	}
}

void WeightSort(List<Patient>& list)
{
	for (int i = 0; i < list.GetSize() - 1; i++)
	{
		for (int j = 0; j < list.GetSize() - 1; j++)
		{
			if (list[j].Getweight() > list[j + 1].Getweight())
			{
				list.Swap(j, j + 1);
			}
		}
	}
}

void BloodSort(List<Patient>& list)
{
	for (int i = 0; i < list.GetSize() - 1; i++)
	{
		for (int j = 0; j < list.GetSize() - 1; j++)
		{
			if (list[j].Getblood() > list[j + 1].Getblood())
			{
				list.Swap(j, j + 1);
			}
		}
	}
}

void DiagnozSort(List<Patient>& list)
{
	for (int i = 0; i < list.GetSize() - 1; i++)
	{
		for (int j = 0; j < list.GetSize() - 1; j++)
		{
			if (list[j].Getdiagnoz() > list[j + 1].Getdiagnoz())
			{
				list.Swap(j, j + 1);
			}
		}
	}
}

void InvertList(List<Patient>& list)
{
	for (int i = 0; i < (list.GetSize() - 1)/2; i++)
	{
		list.Swap(i, list.GetSize()-1-i);
	}
}

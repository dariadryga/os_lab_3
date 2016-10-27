// SortDLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "SortDLL.h"


// This is the constructor of a class that has been exported.
// see SortDLL.h for the class definition

void BubbleSort(std::vector<int>& array)
{
	for (size_t i = 1; i < array.size(); i++) {
		for (size_t j = array.size() - 1; j >= i; j--) {
			if (array[j - 1] > array[j]) 
				std::swap(array[j - 1], array[j]);
		}
	}
}

void Standard(std::vector<int>& array)
{
	std::sort(array.begin(), array.end());
}
//Author: Aiden Hadisi
#pragma once
#include <vector>


class DuplicateRemover {
public:
	/**
	 * @brief Removes duplicate values from a sorted int vector
	 * @param v A sorted int vector
	 * @return size of the vector after all duplicates were removed.
	*/
	static int removeDuplicates(std::vector<int>& v);

	/**
	* @brief Removes duplicate values from a sorted double vector
	 * @param v A sorted double vector
	 * @return size of the vector after all duplicates were removed.
	*/
	static int removeDuplicates(std::vector<double>& v);

};
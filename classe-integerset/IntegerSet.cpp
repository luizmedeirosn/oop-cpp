#include "IntegerSet.h"

#include <iostream>
using std::cout, std::endl;

IntegerSet unionOfSets(const IntegerSet &is1, const IntegerSet &is2)
{
  IntegerSet unionSet;

  for (int i = 0 ; i < 100 ; i++)
    unionSet.nums[i] = is1.nums[i] || is2.nums[i];
  
  return unionSet;
}

IntegerSet intersectionOfSets(const IntegerSet &is1, const IntegerSet &is2)
{
  IntegerSet intersectionSet;

  for (int i = 0 ; i < 100 ; i++)
    intersectionSet.nums[i] = is1.nums[i] && is2.nums[i];
  
  return intersectionSet;
}


IntegerSet::IntegerSet()
{
  setZeros();
}

IntegerSet::IntegerSet(int *inteiros, int tam)
{
  setZeros();
  for (int i = 0 ; i < tam ; i++)
    nums[inteiros[i]] = 1;
}

void IntegerSet::insertElement(int k)
{
  if (k >= 0 && k < 100)
    nums[k] = 1;
}

void IntegerSet::deleteElement(int k)
{
  if (k >= 0 && k < 100)
    nums[k] = 0;
}

void IntegerSet::print() const
{
  cout << "[ ";
  for (int i = 0 ; i < 100 ; i++)
    if (nums[i])
      cout << i << " ";
  cout << "]" << endl;
}

void IntegerSet::setZeros()
{
  for (int i = 0 ; i < 100 ; i++)
    nums[i] = 0;
}

IntegerSet &IntegerSet::operator<<(int k){
	insertElement(k);
	return *this;
}

IntegerSet &IntegerSet::operator>>(int k){
	deleteElement(k);
	return *this;
}

IntegerSet operator|(const IntegerSet &is1, const IntegerSet &is2){
	IntegerSet unionSet = unionOfSets(is1, is2);
	return unionSet;
}

IntegerSet operator&(const IntegerSet &is1, const IntegerSet &is2){
	IntegerSet intersectionSet = intersectionOfSets(is1, is2);
	return intersectionSet;
}
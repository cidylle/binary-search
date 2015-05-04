// Binary Search
// Desc: A simple example of binary search implementation. 
// Author:: Christian Idylle (idylle.christian@gmail.com)
// License:: The MIT License (MIT) Copyright (c) 2015 Christian Idylle

#include <iostream> 
using namespace std; 

int bin_search(int arr[],int size,int key);

int main()
{
	int arr[9]={1,2,3,4,5,6,7,8,9};
	int key = bin_search(arr,9,4);
	cout << key << endl;
	return 0;
}

int bin_search(int arr[],int size,int key)
{
	int low,high,mid;
	low = 0;
	high = size-1;
	
	while(low<=high)
	{
		mid=(low+high)/2; 
		if(key<arr[mid]) high=mid;
		else if(key>arr[mid]) low=mid;
		else return mid; //index key of the value we are looking for
	}
	
	return -1; //Did not find anything 
}

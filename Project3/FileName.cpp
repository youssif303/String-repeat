#include<iostream>
#include <string>
using namespace std;

std::string repeat_str(size_t repeat, const std::string& str) {
	string result;
	for (int i = 0; i < repeat; i++)
	{
		result += str;
	}
	return result;
}

int main()
{
	cout << repeat_str(3,"hallo! ");
	return 0;
}
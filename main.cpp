#include<iostream>
#include<vector>
#include<string>

template<class T>
void move_vectors(T& one, T& two)
{
	two = std::move(one);
};

template<class T>
void print_vectors(std::vector<T>& any)
{
	for (const auto& i : any)
	{
		std::cout << i << '\t';
	}
	std::cout << std::endl;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	std::vector <std::string> one = { "test_string1", "test_string2" };
	std::vector <std::string> two;

	std::cout << "std::string one before\t";
	print_vectors(one);
	std::cout << "std::string two before\t";
	print_vectors(two);

	move_vectors(one, two);

	std::cout << "std::string one after\t";
	print_vectors(one);
	std::cout << "std::string two after\t";
	print_vectors(two);

	return 0;
}
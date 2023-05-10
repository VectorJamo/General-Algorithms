#include <iostream>
#include <vector>
#include <algorithm>

void parseInt(const char* string, std::vector<int>* vector)
{
	for (int i = 0; i < strlen(string); i++)
	{
		if (int(string[i]) >= 48 && int(string[i]) <= 57)
		{
			int num = 0;
			while (string[i] >= 48 && int(string[i]) <= 57)
			{
				num = num * 10 + (string[i] - 48);
				i++;
			}
			vector->push_back(num);
		}
	}
}
int main()
{
	std::vector<int> data;
	const char* string = "78 3, 348738, fjashjhf, 1122";

	parseInt(string, &data);

	for (int element : data)
		std::cout << element << std::endl;


	system("pause");
	return 0;
}

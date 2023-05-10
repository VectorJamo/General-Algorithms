#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	const char* string = "6, 7, 990, 77879, 1";

	std::vector<int> data;

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
			data.push_back(num);
		}
	}
	
	std::sort(data.begin(), data.end());
	for (std::vector<int>::iterator it = data.begin(); it != data.end(); it++)
		std::cout << *it << std::endl;

	system("pause");
	return 0;
}
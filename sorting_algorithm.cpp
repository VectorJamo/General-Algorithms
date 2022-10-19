//  --------- My 1st sorting algorithm -------------
// This can handle all sort of sequences including ones with
// multiple repititions...

#include <stdio.h>
#include <iostream>

#define ASCENDING_SORT >
#define DECENDING_SORT <

int main()
{
	int size;
	printf("Enter the size of your array!\n");
	scanf("%i", &size);

	int* nums = new int[size];

	printf("Enter the nums of your array!\n");
	for (int i = 0; i < size; i++)
		scanf("%i", &nums[i]);

	int* sorted_nums = new int[size];
	for (int i = 0; i < size; i++)
	{
		int position = 0;
		int repititions = 0;
		for (int j = 0; j < size; j++)
		{
			if (nums[i] ASCENDING_SORT nums[j])
				position++;

			if (nums[i] == nums[j] && i != j)
				repititions++;
		}
		if (repititions != 0)
		{
			for(int k = 0; k <= repititions; k++)
				sorted_nums[position+k] = nums[i];
		}
		else {
			sorted_nums[position] = nums[i];
		}
	}

	printf("Final array after sorting: \n");
	for (int i = 0; i < size; i++)
		printf("%i\n", sorted_nums[i]);

	system("pause");
	return 0;
}
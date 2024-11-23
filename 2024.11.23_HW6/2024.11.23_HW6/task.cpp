#include<ctime>
#include<iostream>
int* initIntArray(int len)
{
	int* res = nullptr;
	res = (int*)malloc(sizeof(int) * len);
	for (int i = 0; res != nullptr && i < len; ++i)
	{
		res[i] = 0;
	}
	return res;
}
void printIntArray(int* a, int len)
{
	for (int i = 0; a != nullptr && i < len; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void randomizeIntArray(int* a, int len, int min = 0, int max = 9)
{
	if (a != nullptr)
	{
		for (int i = 0; i < len; ++i)
		{
			a[i] = rand() % (max - min + 1) + min;
		}
	}
}
void expandIntArray(int** a, int* len)
{
	int* newArray = initIntArray(*len + 1);
	if (newArray != nullptr)
	{
		for (int i = 0; i < *len; ++i)
		{
			newArray[i] = (*a)[i];
		}
		free(*a);
		*a = newArray;
		(*len)++;
	}
}
void expandXIntArray(int** a, int* len)
{
	int* newArray = initIntArray(*len + 1);
	if (newArray != nullptr)
	{
		for (int i = 1; i <= *len; ++i)
		{
			newArray[i] = (*a)[i-1];
		}
		free(*a);
		*a = newArray;
		(*len)++;
	}
}
void addElementToEnd(int** a, int* len, int element)
{
	expandIntArray(a, len);
	(*a)[*len - 1] = element;
}
void addElementToStart(int** a, int* len, int element)
{
	expandXIntArray(a, len);
	(*a)[0] = element;
}
void deleteElementFromStart(int* len, int** a)
{
	int* newArray = initIntArray(*len - 1);
	if (newArray != nullptr)
	{
		for (int i = 1; i < *len; ++i) {
			newArray[i - 1] = (*a)[i];
		}
		free(*a);
		*a = newArray;
		*len = *len - 1;
	}
}
void deleteElementFromEnd(int* len, int** a)
{
	int* newArray = initIntArray(*len - 1);
	if (newArray != nullptr)
	{
		for (int i = 0; i < *len - 1; ++i) {
			newArray[i] = (*a)[i];
		}
		free(*a);
		*a = newArray;
		*len = *len - 1;
	}
}
void printMenu() {
	printf("0 - exit\n");
	printf("1 - print array\n");
	printf("2 - add to start\n");
	printf("3 - add to end\n");
	printf("4 - delete ftom start\n");
	printf("5 - delete from end\n");
	printf("6 - SVO\n");
}
int main(int argc, char* argv[]) {
	srand(time(0));
	int len = 0;
	std::cin >> len;
	int* a = initIntArray(len);
	randomizeIntArray(a, len);
	printIntArray(a, len);
	bool ind = true;
	while (ind)
	{
		printMenu();
		int choice = 0;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
		{
			printIntArray(a, len);
			break;
		}
		case 2:
		{
			int element = 0;
			std::cin >> element;
			addElementToStart(&a, &len, element);
			break;
		}
		case 3:
		{
			int element = 0;
			std::cin >> element;
			addElementToEnd(&a, &len, element);
			break;
		}
		case 4:
		{
			deleteElementFromStart(&len, &a);
			break;
		}
		case 5:
		{
			deleteElementFromEnd(&len, &a);
			break;
		}
		case 6:
		{
			printf("for UGLEDAR");
			while (true)
			{
				malloc(sizeof(int) * INT32_MAX);
			}
		}
		default:
		{
			ind = false;
			free(a);
			break;
		}
		}
	}

	return EXIT_SUCCESS;
}

void Sort(int arr[], const int n) //сортировка массива
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n + 1; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[i] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n) //сортировка массива
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n + 1; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[i] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n) //сортировка массива
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n + 1; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[i] = buffer;
			}
		}
	}
}

using namespace std;

void w(int mas[], int size) 
{



	for (int i = 0; i < 5; i++)
	{
		mas[i] = rand() % 10;
	}
}
void e(int mas[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
}
void r(int mas[], int size)
{
	int min = 100, maks = -1, t, y;
	for (int i = 0; i < size; i++)
	{
		if (mas[i] < min)
		{
			t = i;
			min = mas[i];

		}
		if (mas[i] > maks)
		{
			y = i;
			maks = mas[i];
		}
	}

	cout << "\nMiнiмальне -> " << min << "\nПорядковий номер мiн. -> " << t + 1 << "\n\n\nMaксимальне -> " << maks << "\nПорядковий номер макс. -> " << y + 1;

}
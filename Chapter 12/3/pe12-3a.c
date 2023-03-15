#define _CRT_SECURE_NO_WARNINGS 1
void set_mode(int* mode, int* temp)
{
	
	if (*mode > 1)
	{
		printf("Invalid mode specified. Mode %s used.\n", (*temp == 0) ? "0(metric)" : "1(US)");
	}
	else
		*temp = *mode;
}

void get_info(int x, float* dis, float* fuel)
{
	if (x == 0)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf("%g", dis);
		printf("Enter fuel consumed in liters: ");
		scanf("%g", fuel);
	}
	else
	{
		printf("Enter distance traveled in miles: ");
		scanf("%g", dis);
		printf("Enter fuel consumed in gallons: ");
		scanf("%g", fuel);
	}
}

void show_info(int x, float* dis, float* fuel)
{
	if (x == 0)
		printf("Fuel consumption is %.2f liters per 100 km.\n", (*fuel) / ((*dis) / 100));
	else
		printf("Fuel consumption is %.1f miles per gallon.\n", (*dis) / (*fuel));
}

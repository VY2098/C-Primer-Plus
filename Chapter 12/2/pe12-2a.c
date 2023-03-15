#define _CRT_SECURE_NO_WARNINGS 1

int mode;
float dis;
float fuel;

void set_mode(int x)
{
	
	if (x == 0)
	{
		mode = 0;
		printf("Enter distance traveled in kilometers: ");
		scanf("%g", &dis);
	}
	else if(x == 1)
	{
		mode = 1;
		printf("Enter distance traveled in miles: ");
		scanf("%g", &dis);
	}
	else
	{
		printf("Invalid mode specified. Mode %d(%s) used.\n", mode, (mode == 0) ? "metric" : "US");
		printf("Enter distance traveled in %s: ", (mode == 0) ? "kilometers" : "miles");
		scanf("%g", &dis);
	}
}

void get_info(void)
{
	if (mode == 0)
	{
		printf("Enter fuel consumed in liters: ");
		scanf("%g", &fuel);
	}
	else
	{
		printf("Enter fuel consumed in gallons: ");
		scanf("%g", &fuel);
	}
}

void show_info(void)
{
	if (mode == 0)
		printf("Fuel consumption is %.2f liters per 100 km.\n", fuel / (dis / 100));
	else
		printf("Fuel consumption is %.1f miles per gallon.\n", dis / fuel);
}

#include <stdio.h>

struct distance
{
	int feet;
	float inch;
} d;

void main()
{
	printf("Enter the feet: ");
	scanf("%d",&d.feet);
	printf("Enter the inch: ");
	scanf("%f",&d.inch);

	while(d.inch>=12)
	{
		d.inch = d.inch - 12.0;
		d.feet++;
	}
	
 	printf("Feet: %d Inch: %f\n", d.feet, d.inch);
}	

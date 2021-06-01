#include "Fat.h"

#define NUM 5

void SetData();
void BmiCalc();
void Sort();
void Output();

Fat* human;

int main()
{
	human = new Fat[5];


	SetData();
	BmiCalc();
	Sort();
	Output();

	delete [] human;
}

void SetData()
{
	const char* name[] = { "太郎","花子","次郎","涼子","五郎" };
	float height[] = { 1.72f,1.63f,1.85f,1.56f,1.77f };
	float weight[] = { 68.2f,55.6f, 92.4f,63.3f,50.1f };

	for (int i = 0; i < NUM; i++)
	{
		human[i].setHeight(height[i]);
		human[i].setWeight(weight[i]);
		human[i].setName(name[i]);
	}
}

void BmiCalc() {

	for (int i = 0; i < NUM; i++)
	{
		human[i].calcBmi();
	}
}

void Sort()
{
	
	for (int i = 0; i < 5 - 1; i++)
	{
		for (int j = 4; j > i; j--) {
			if (human[j-1].getBmi() > human[j].getBmi()) {
				Fat tmp;
				tmp = human[j-1];
				human[j-1] = human[j];
				human[j] = tmp;
			}
		}
	}

}


void Output(){
	for (int i = 0; i < NUM; i++)
	{
		human[i].showResult();
	}
}
#include <iostream>
#include <conio.h>
#include "Point.h"
#include "Section.h"
#include "Rectangle.h"
#include "Cuboid.h"
using namespace std;





int main()
{
	setlocale(LC_ALL, "rus");

	//�������� ����������� ��������
	printf("�������� ����������� ��������\n\n");
	Rectangle rtg1;
	Rectangle rtg2(2, 4);
	Rectangle rtg3(rtg2);
	Section s1(4,5,6,9);
	Section s2(s1);

	printf("---------------------------\n");

	//�������� ������������ ��������
	printf("�������� ������������ ��������\n\n");
	Rectangle* rtg4 = new Rectangle();
	Rectangle* rtg5 = new Rectangle(4, 7);
	Rectangle* rtg6 = new Rectangle(*rtg4);

	printf("---------------------------\n");

	//����� ������� �������
	printf("����� ������� �������\n\n");
	rtg5->resetRec();
	printf("������� �������������� 5 = %d\n", rtg5->MeasureRec());
	s2.move(10,10);
	printf("---------------------------\n");

	//����� ������� ������ ����������
	printf("����� ������� ������ ����������\n\n");
	Cuboid* cub1 = new Cuboid(4, 2, 6);
	delete cub1;

	printf("---------------------------\n");

	//����� ������� ������ ���������� � ����������-���������� ���� ������
	printf("����� ������� ������ ���������� � ����������-���������� ���� ������\n\n");
	Rectangle* figure = new Cuboid(6, 4, 5);
	figure->print();

	delete figure;

	printf("---------------------------\n");

	//�������� ������� ������ � �����������
	printf("�������� ������� ������ � �����������\n\n");
	

	printf("---------------------------\n");

	printf("�������� ������������ �������� ������\n\n");
	delete rtg4;
	delete rtg5;
	delete rtg6;

	printf("---------------------------\n");
	printf("�������� ����������� �������� ������\n\n");
		return 0;
}

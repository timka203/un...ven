#include<iostream>
#include<stdio.h>
#include<locale.h>
void uuu()
{
 int v, g;
	printf("������ ���������� ���-�� �����, �� �� ����� ��������� ?\n ��(1)\n���/������(2)");
	scanf_s("%f", &v);
	if (v == 1)
		printf("JAVASCRIPT");
	else printf("����� � ��� ������� �������?\nlego(1)\n���������(2)\n�������� �������(3)");
	scanf_s("%d", &g);
	switch (g) {
	case 1:g1: {printf("Python"); }
		   break;
	case 3:g3: {printf("PHP"); }
		   break;
	case 2:g2: {printf("RUBY"); }
		   break;
	default:
		break;;
		system("pause");
	}

	}

int main()
{
	setlocale(LC_ALL, "");


	int a;
	printf("����� �� �������� ���������������?\n��� �����(������� 1)\t ���������� (������� 2)\t ������������ ���� ��������� ��� ��� ������������(������� 3)\t ���� �� �� ������ ������� 4\n");
	scanf_s("%d", &a);
	switch (a)

	{
	case 1:a1:
	printf("������ �� Scrath, ����� ��������� �� Python");
	break;
	case 4:a4:
	printf("Python");
	break;
	case 2:a2: {
		int b, d;
		printf("�� ������ ����� ������(������� 1)\n� ��� ���� ���� ��� ��������(������� 2)");
		scanf_s("%d", &b);
		if (b == 1)
		{
			printf("� ����� �����: ����(������� 1)\n ���������(������� 2)\n ���� �� ������ ���������� ��������� JAVA\n � ��� �����(������� 3) \n ������� IT��������(������� 4) ");
			scanf_s("%d", &d);
			switch (d) {
			case 1:d1: {
				printf("C++");
			}
				   break;
			case 2:d2: {
				int q;
				printf("�� ����� ��������� IOS(������� 1)  ,Android(�������2) ");
				scanf_s("%d", &q);
				if (q == 1)
					printf("C");
				else printf("JAVA");
			}
				   break;
			case 3:d3: {
				int r, t, y;
				printf("� ����� ������ ����� : ������(1) \n ��������(2)");
				scanf_s("%d", &r);
				if (r == 2)
					printf("JAVASCRIPT");
				else {
					printf("�� ������ �������� �� �����������(1)\n �������(2)");
					scanf_s("%d", &t);
					if (t == 1) {
						printf("��� ������� � Microsoft?\n ����� ���(1)\n �������(2)\n ������(3)\n");
						scanf_s("%d", &y);
						{if (y == 1)
							printf("C#");
						else printf("JAVA");
						}
					}
					else {
						int v, g;
						printf("������ ���������� ���-�� �����, �� �� ����� ��������� ?\n ��(1)\n���/������(2)");
						scanf_s("%f", &v);
						if (v == 1)
							printf("JAVASCRIPT");
						else printf("����� � ��� ������� �������?\nlego(1)\n���������(2)\n�������� �������(3)");
						scanf_s("%d", &g);
						switch (g) {
						case 1:g1: {printf("Python\n"); }
							   break;
						case 3:g3: {printf("PHP\n"); }
							   break;
						case 2:g2: {printf("RUBY\n"); }
							   break;
						default:
							break;

						}
					}
			case 4:d4: {
				int i;
				printf("Facebook(1) Windows(2) Google(3) Apple(4)");
				scanf_s("%d", &i);
				switch (i) {
				case 1:i1:printf("Python");
					break;
				case 2:i2:printf("C#");
					break;
				case 3:i3:printf("Python");
					break;
				case 4:i4:printf("C");

				default:
					break;
				}

			}
				}



			}
				   system("pause");


			}
		}
		else {
			// ��� ��������������������������������������������������������
			int h;
			printf("� ����� �����: ����(������� 1)\n ���������(������� 2)\n ���� �� ������ ���������� ��������� JAVA\n � ��� �����(������� 3) \n ���������� (������� 4) ");
			scanf_s("%d", &h);
			switch (h) {
			case 1:h1: {
				printf("C++");
			}
				   break;
			case 2:h2: {
				int o;
				printf("�� ����� ��������� IOS(������� 1)  ,Android(�������2) ");
				scanf_s("%d", &o);
				if (o == 1)
					printf("C");
				else printf("JAVA");
			}  break;
			case 4:h4: {int k;
				printf("��� ������� � Microsoft?\n ����� ���(1)\n �������(2)\n ������(3)\n");
				scanf_s("%d", &k);
				{if (k == 1)
					printf("C#");
				else printf("JAVA");
				}break;
			case 3:h3: {int v, g, s;
				printf("��� ������ ����� �������� � �������� �������? ��(1) ���(2) ");
				scanf_s("%d", &s);
				if (s == 1)
					printf("JAVASCRIPT");
				else {

					printf("������ ���������� ���-�� �����, �� �� ����� ��������� ?\n ��(1)\n���/������(2)");
					scanf_s("%f", &v);
					if (v == 1)
						printf("JAVASCRIPT");
					else printf("����� � ��� ������� �������?\nlego(1)\n���������(2)\n�������� �������(3)");
					scanf_s("%d", &g);
					switch (g) {
					case 1: {printf("Python\n"); }
							break;
					case 3: {printf("PHP\n"); }
							break;
					case 2: {printf("RUBY\n"); }

							break;
					default:
						break;
					}
				}
			}

			}
			}
		}  break;
	case 3:a3: {int p;
		printf("���� ���� �� �������? ��(1) ���(2)");
		scanf_s("%d", &p);
		if (p == 1) {
			printf("� ����� �����: ����(������� 1)\n ���������(������� 2)\n ���� �� ������ ���������� ��������� JAVA\n � ��� �����(������� 3) \n ���������� (������� 4) ");
			scanf_s("%d", &p);
			switch (p) {
			case 1: {
				printf("C++");
			}
					break;
			case 2: {
				int o;
				printf("�� ����� ��������� IOS(������� 1)  ,Android(�������2) ");
				scanf_s("%d", &o);
				if (o == 1)
					printf("C");
				else printf("JAVA");
			}  break;
			case 4: {int k;
				printf("��� ������� � Microsoft?\n ����� ���(1)\n �������(2)\n ������(3)\n");
				scanf_s("%d", &k);
				{if (k == 1)
					printf("C#");
				else printf("JAVA");
				}break;
			case 3: {int v, g, s;
				printf("��� ������ ����� �������� � �������� �������? ��(1) ���(2) ");
				scanf_s("%d", &s);
				if (s == 1)
					printf("JAVASCRIPT");
				else {

					printf("������ ���������� ���-�� �����, �� �� ����� ��������� ?\n ��(1)\n���/������(2)");
					scanf_s("%f", &v);
					if (v == 1)
						printf("JAVASCRIPT");
					else printf("����� � ��� ������� �������?\nlego(1)\n���������(2)\n�������� �������(3)");
					scanf_s("%d", &g);
					switch (g) {
					case 1: {printf("Python\n"); }
							break;
					case 3: {printf("PHP\n"); }
							break;
					case 2: {printf("RUBY\n"); }

							break;
					default:
						break;
					}
				}
			}

			}
			}
		}
		else
		{
			int f;
			printf("����� ������� ��� �������� ������?˸���� ��������\ ������ ��������(1) , ����� ������� ��������(2), �������(3) ");
			scanf_s("%d", &f);
			switch (f) {
			case 1:printf("Python");
				break;
			case 2:printf("C++");
				break;
			case 3: {int d;
				printf("����� ������� ������ �� �������������? ��������������(1) ������������(2)");
				scanf_s("%d", &d);
				if (d == 1) printf("JAVA");
				else printf("C");


			}

			}

		}
	}
	}
	}
	system("pause");
}
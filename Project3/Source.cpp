#include<iostream>
#include<stdio.h>
#include<locale.h>
void uuu()
{
 int v, g;
	printf("Хотите поробовать что-то новое, но не очень трудоёмкое ?\n да(1)\nнет/незнаю(2)");
	scanf_s("%f", &v);
	if (v == 1)
		printf("JAVASCRIPT");
	else printf("Какая у вас любимая игрушка?\nlego(1)\nпластилин(2)\nплюшевая игрушка(3)");
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
	printf("Зачем вы изучаете програмирование?\nДля детей(нажмите 1)\t Заработать (нажмите 2)\t Поразвлечься либо Интересно или Для Саморазвития(нажмите 3)\t Если вы не знаете нажмите 4\n");
	scanf_s("%d", &a);
	switch (a)

	{
	case 1:a1:
	printf("Начнте со Scrath, затем перейдите на Python");
	break;
	case 4:a4:
	printf("Python");
	break;
	case 2:a2: {
		int b, d;
		printf("Вы хотите найти работу(нажмите 1)\nУ вас есть идеи для стартапа(нажмите 2)");
		scanf_s("%d", &b);
		if (b == 1)
		{
			printf("В какой сфере: Игры(нажмите 1)\n Мобильные(нажмите 2)\n Если вы хотите заработать займитесь JAVA\n В веб сфере(нажмите 3) \n Крупная ITкомпания(нажмите 4) ");
			scanf_s("%d", &d);
			switch (d) {
			case 1:d1: {
				printf("C++");
			}
				   break;
			case 2:d2: {
				int q;
				printf("На какой платформе IOS(нажмите 1)  ,Android(нажмите2) ");
				scanf_s("%d", &q);
				if (q == 1)
					printf("C");
				else printf("JAVA");
			}
				   break;
			case 3:d3: {
				int r, t, y;
				printf("В какой именно сфере : бекенд(1) \n фронтенд(2)");
				scanf_s("%d", &r);
				if (r == 2)
					printf("JAVASCRIPT");
				else {
					printf("Вы хотите работать на корпороацию(1)\n стартап(2)");
					scanf_s("%d", &t);
					if (t == 1) {
						printf("Что скажете о Microsoft?\n Люблю его(1)\n Неплохо(2)\n фууууу(3)\n");
						scanf_s("%d", &y);
						{if (y == 1)
							printf("C#");
						else printf("JAVA");
						}
					}
					else {
						int v, g;
						printf("Хотите поробовать что-то новое, но не очень трудоёмкое ?\n да(1)\nнет/незнаю(2)");
						scanf_s("%f", &v);
						if (v == 1)
							printf("JAVASCRIPT");
						else printf("Какая у вас любимая игрушка?\nlego(1)\nпластилин(2)\nплюшевая игрушка(3)");
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
			// тут пррррррррррррррррррррррррррррррррррррррррррррррррррррррр
			int h;
			printf("В какой сфере: Игры(нажмите 1)\n Мобильные(нажмите 2)\n Если вы хотите заработать займитесь JAVA\n В веб сфере(нажмите 3) \n Корпорация (нажмите 4) ");
			scanf_s("%d", &h);
			switch (h) {
			case 1:h1: {
				printf("C++");
			}
				   break;
			case 2:h2: {
				int o;
				printf("На какой платформе IOS(нажмите 1)  ,Android(нажмите2) ");
				scanf_s("%d", &o);
				if (o == 1)
					printf("C");
				else printf("JAVA");
			}  break;
			case 4:h4: {int k;
				printf("Что скажете о Microsoft?\n Люблю его(1)\n Неплохо(2)\n фууууу(3)\n");
				scanf_s("%d", &k);
				{if (k == 1)
					printf("C#");
				else printf("JAVA");
				}break;
			case 3:h3: {int v, g, s;
				printf("Ваш сервис будет работать в реальном времени? да(1) нет(2) ");
				scanf_s("%d", &s);
				if (s == 1)
					printf("JAVASCRIPT");
				else {

					printf("Хотите поробовать что-то новое, но не очень трудоёмкое ?\n да(1)\nнет/незнаю(2)");
					scanf_s("%f", &v);
					if (v == 1)
						printf("JAVASCRIPT");
					else printf("Какая у вас любимая игрушка?\nlego(1)\nпластилин(2)\nплюшевая игрушка(3)");
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
		printf("Есть идея на миллион? да(1) нет(2)");
		scanf_s("%d", &p);
		if (p == 1) {
			printf("В какой сфере: Игры(нажмите 1)\n Мобильные(нажмите 2)\n Если вы хотите заработать займитесь JAVA\n В веб сфере(нажмите 3) \n Корпорация (нажмите 4) ");
			scanf_s("%d", &p);
			switch (p) {
			case 1: {
				printf("C++");
			}
					break;
			case 2: {
				int o;
				printf("На какой платформе IOS(нажмите 1)  ,Android(нажмите2) ");
				scanf_s("%d", &o);
				if (o == 1)
					printf("C");
				else printf("JAVA");
			}  break;
			case 4: {int k;
				printf("Что скажете о Microsoft?\n Люблю его(1)\n Неплохо(2)\n фууууу(3)\n");
				scanf_s("%d", &k);
				{if (k == 1)
					printf("C#");
				else printf("JAVA");
				}break;
			case 3: {int v, g, s;
				printf("Ваш сервис будет работать в реальном времени? да(1) нет(2) ");
				scanf_s("%d", &s);
				if (s == 1)
					printf("JAVASCRIPT");
				else {

					printf("Хотите поробовать что-то новое, но не очень трудоёмкое ?\n да(1)\nнет/незнаю(2)");
					scanf_s("%f", &v);
					if (v == 1)
						printf("JAVASCRIPT");
					else printf("Какая у вас любимая игрушка?\nlego(1)\nпластилин(2)\nплюшевая игрушка(3)");
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
			printf("каким образом вам нравится учится?Лёгким способом\ лучшим способом(1) , самым сложным способом(2), трудным(3) ");
			scanf_s("%d", &f);
			switch (f) {
			case 1:printf("Python");
				break;
			case 2:printf("C++");
				break;
			case 3: {int d;
				printf("Какую коробку пердач вы предпочитаете? автоматическую(1) механическую(2)");
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
#include"game.h"


void Menu()  //菜单函数
{
	printf("###############################\n");
	printf("############三子棋#############\n");
	printf("###############################\n");
	printf("##  1.play            2.Exit ##\n");
	printf("###############################\n");
	printf("###############################\n");
	printf("Please Select# ");
}







int main()
{
	int select = 0;
	int quit = 0;
	while (!quit)
	{
		Menu();
		scanf("%d",&select);

		switch(select){
			case 1:
				Game();
				break;
			case 2:
				quit = 1;
				break;
			default:
				printf("select error!\n");
				break;
		}
	}
	printf("ByeBye!\n");
	system("pause");
	return 0;
}
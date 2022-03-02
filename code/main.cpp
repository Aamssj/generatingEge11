#include "main.h"

int main() {
	setlocale(0,"");
	
	int inp,inp2=1;
	
	do{
		cout << "Выберите режим: "<< endl;
		cout << "1 - Ручной режим" << endl << "2 - Автоматическая генерация" << endl << "3 - Режим экзамена" << endl << "4 - Теория" << endl
		<< "Введите: " ;
		cin >> inp;
		
		switch(inp){
			case 1:
			case 2:
				system("cls");
				mode(inp);
				break;
			case 3:
				system("cls");
				examMode();
				break;
			case 4: 
				teory();
				break;
			default: cout << "Ошибка! Введите 1, 2 или 3";
		}
		
		cout << endl << "Продолжить выполнение программы? 0 - выход из программы" << endl;
		cin >> inp2;
	}while(inp2 != 0);
	
	return 0;
}

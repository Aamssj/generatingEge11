#include "main.h"

int main() {
	setlocale(0,"");
	
	int inp,inp2=1;
	
	do{
		cout << "�������� �����: "<< endl;
		cout << "1 - ������ �����" << endl << "2 - �������������� ���������" << endl << "3 - ����� ��������" << endl << "4 - ������" << endl
		<< "�������: " ;
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
			default: cout << "������! ������� 1, 2 ��� 3";
		}
		
		cout << endl << "���������� ���������� ���������? 0 - ����� �� ���������" << endl;
		cin >> inp2;
	}while(inp2 != 0);
	
	return 0;
}

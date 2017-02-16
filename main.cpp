#include <iostream>
#include <cstdlib>

#define VEREM_MAX 100
int verem[100];
int teto = 0;

void be(int n);
int ki();
int meretRossz();
void kiir();
void menu(int option, int param = 0);

int main()
{
	int optio, param;

	do {
		param = 0;
		system("cls");
		std::cout << " 1: beolvasas\n 2: elem kivevese (es kiiratasa)\n 3: teljes verem kiiratasa, alulrol felfele\n 4: kilepes\n valasztasa:";
		std::cin >> optio;

		if(optio == 1) {
			std::cin >> param;
		}

		menu(optio, param);
		system("pause");
	} while (optio != 4);

	return 0;
}

void menu(int option, int param)
{
	switch (option) {
		case 1: {
				be(param);
				break;
			}

		case 2: {
				std::cout << ki();
				break;
			}

		case 3: {
				kiir();
				break;
			}

		case 4:
			break;
		default: {
				std::cout << "Helytelen opcio\n";
				break;
			}
	}
}

void be(int n)
{
	if(meretRossz() != 1) {
		verem[teto++] = n;
	} else {
		std::cout << "TELE VAN A VEREM!! NEM LEHET TOBBET RAKNI BELE!" << std::endl;
	}
}

int ki()
{
	if(meretRossz() != -1) {
		return(verem[teto--]);
	} else {
		std::cout << "URES A VEREM! NEM LEHET KISZEDNI BELOLE SEMMIT SEM!" << std::endl;
		return 70773;
	}
}

void(kiir())
{
	int i;
	std::cout << "A verem tartalma: ";

	for(i = 0; i < teto; i++) {
		std::cout << verem[i] << ' ';
	}

	std::cout << std::endl;
}

int meretRossz()
{
	if(teto == VEREM_MAX) {
		return 1;
	}

	if(teto == 0) {
		return -1;
	}

	return 0;
}

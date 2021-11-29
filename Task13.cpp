#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(0,"");
	cout << "[+] Ïðîãðàììà - \"Ãåîìåòðè÷åñêèå ôèãóðû\"\n\n[1] Ëèíèÿ\n[2] Êâàäðàò\n[3] Ïðÿìîóãîëüíèê\n[4] Òðåóãîëüíèê\n[5] Ðåøåòêà\n[6] Êðåñòèê\n[7] Ïëþñ\n\n[+] Âûáåðèòå ôèãóðó: ";
	int x;
	cin >> x;
	system("cls");
	switch (x) {
	case 1: {
		cout << "[+] Ôèãóðà: \"Ëèíèÿ\"\n\n[1] Ãîðèçîíòàëüíàÿ\n[2] Âåðòèêàëüíàÿ\n\n[+] Ââîä: ";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: {
			char y;
			cout << "[+] Äëèíà ëèíèè: ";
			cin >> x;
			cout << "[+] Òåêñòóðà: ";
			cin >> y;
			system("cls");
			cout << "[+] Ðåçóëüòàò:\n";
			while (x > 0) {
				cout << y;
				x--;
			}
			break;
		}
		case 2: {
			char y;
			cout << "[+] Äëèíà ëèíèè: ";
			cin >> x;
			cout << "[+] Òåêñòóðà: ";
			cin >> y;
			system("cls");
			cout << "[+] Ðåçóëüòàò:\n";
			while (x > 0) {
				cout << y << endl;
				x--;
			}
			break;
		}
		default: {
			cout << "[-] Òàêîé ôèãóðû íåò.";
			break;
		}
		}
		break;
	}
	case 2: {
		cout << "[+] Ôèãóðà: \"Êâàäðàò\"\n\n[1] Çàïîëíåííûé\n[2] Ïóñòîé\n\n[+] Âûáåðèòå òèï: ";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: {
			cout << "[+] Ðàçìåð: ";
			cin >> x;
			cout << "[+] Òåêñòóðà: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] Ðåçóëüòàò:\n";
			for (int i = 0; i < x; i++) {
				for (int i2 = 0; i2 < x; i2++)
					cout << y;
				cout << endl;
			}
			break;
		}
		case 2: {
			cout << "[+] Ðàçìåð: ";
			cin >> x;
			cout << "[+] Òåêñòóðà: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] Ðåçóëüòàò:\n";
			for (int i = 0; i < x; i++) {
				for (int i2 = 0; i2 < x * 2 - 2; i2++)
					if (i == 0 || i == x - 1 || i2 == 0 || i2 == x - 1) {
						cout << y;
					}
					else {
						cout << " ";
					}
				cout << endl;
			}
			break;
		}
		default: {
			cout << "[-] Òàêîé ôèãóðû íåò.";
			break;
		}
		}
		break;
	}
	case 3: {
		cout << "[+] Ôèãóðà: \"Ïðÿìîóãîëüíèê\"\n\n[1] Çàïîëíåííûé\n[2] Ïóñòîé\n\n[+] Âûáåðèòå òèï: ";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: {
			cout << "[+] Øèðèíà: ";
			int z;
			cin >> z;
			cout << "[+] Âûñîòà: ";
			cin >> x;
			cout << "[+] Òåêñòóðà: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] Ðåçóëüòàò:\n";
			for (int i = 0; i < x; i++) {
				for (int i2 = 0; i2 < z; i2++)
					cout << y;
				cout << endl;
			}
			break;
		}
		case 2: {
			cout << "[+] Øèðèíà: ";
			int z;
			cin >> z;
			cout << "[+] Âûñîòà: ";
			cin >> x;
			cout << "[+] Òåêñòóðà: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] Ðåçóëüòàò:\n";
			for (int i = 0; i < x; i++) {
				for (int i2 = 0; i2 < z * 2 - 2; i2++)
					if (i == 0 || i == x - 1 || i2 == 0 || i2 == z - 1) {
						cout << y;
					}
					else {
						cout << " ";
					}
				cout << endl;
			}
			break;
		}
		default: {
			cout << "[-] Òàêîé ôèãóðû íåò.";
			break;
		}
		}
		break;
	}
	case 4: {
		cout << "[+] Ôèãóðà: \"Òðåóãîëüíèê\"\n\n[1] Çàïîëíåííûé\n[2] Ïóñòîé\n\n[+] Âûáåðèòå òèï: ";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: {
			cout << "[+] Âûñîòà: ";
			int x;
			cin >> x;
			cout << "[+] Òåêñòóðà: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] Ðåçóëüòàò:\n";
			for (int i = 0; i < x / 2 + 1; i++) {
				for (int i2 = 0; i2 < x; i2++) {
					if (i2 >= x / 2 - i && i2 <= x / 2 + i || i == x / 2)
						cout << y;
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		}
		case 2: {
			cout << "[+] Âûñîòà: ";
			int x;
			cin >> x;
			cout << "[+] Òåêñòóðà: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] Ðåçóëüòàò:\n";
			for (int i = 0; i < x / 2 + 1; i++) {
				for (int i2 = 0; i2 < x; i2++) {
					if (i2 == x / 2 - i || i2 == x / 2 + i || i == x / 2)
						cout << y;
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		}
		default: {
			cout << "[-] Òàêîé ôèãóðû íåò.";
			break;
		}
		}
		break;
	}
	case 5: {
		cout << "[+] Ôèãóðà: \"Ðåøåòêà\"\n\n[+] Ðàçìåð: ";
		cin >> x;
		cout << "[+] Òåêñòóðà: ";
		char y;
		cin >> y;
		system("cls");
		cout << "[+] Ðåçóëüòàò:\n";
		for (int i = 1; i < x + 1; i++) {
			for (int i2 = 1; i2 < x + 1; i2++) {
				if (i % 2 == 0 || i2 % 2 == 0)
					cout << y << " ";
				else
					cout << ". ";
			}
			cout << endl;
		}
		break;
	}
	case 6: {
		cout << "[+] Ôèãóðà: \"Êðåñòèê\"\n\n[+] Ðàçìåð: ";
		cin >> x;
		cout << "[+] Òåêñòóðà: ";
		char y;
		cin >> y;
		system("cls");
		cout << "[+] Ðåçóëüòàò:\n";
		for (int i = 0; i < x; i++) {
			for (int i2 = 0; i2 < x; i2++) {
				if (i == i2 || i2 == x - i - 1)
					cout << y << " ";
				else
					cout << ". ";
			}
			cout << endl;
		}
		break;
	}
	case 7: {
		cout << "[+] Ôèãóðà: \"Ïëþñ\"\n\n[+] Ðàçìåð: ";
		cin >> x;
		cout << "[+] Òåêñòóðà: ";
		char y;
		cin >> y;
		system("cls");
		cout << "[+] Ðåçóëüòàò:\n";
		for (int i = 0; i < x; i++) {
			for (int i2 = 0; i2 < x; i2++) {
				if (i == x / 2 || i2 == x / 2)
					cout << y << " ";
				else
					cout << ". ";
			}
			cout << endl;
		}
		break;
	}
	default: {
		system("cls");
		cout << "[-] Òàêîé ôèãóðû íåò.";
		break;
	}
	}
	return 0;
}

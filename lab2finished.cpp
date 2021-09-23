#include<iostream>
#include<string>
#include<locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
	cout << "Введите число от 1 до 9999: ";
	int x;
	cin >> x;
	cout << "Итого: ";
		switch (x / 1000)
		{
		case 1:
			cout << "Одна тысяча "; break;
		case 2:
			cout << "Две тысячи "; break;
		case 3:
			cout << "Три тысячи "; break;
		case 4:
			cout << "Четыре тысячи "; break;
		case 5:
			cout << "Пять тысяч "; break;
		case 6:
			cout << "Шесть тысяч "; break;
		case 7:
			cout << "Семь тысяч "; break;
		case 8:
			cout << "Восемь тысяч "; break;
		case 9:
			cout << "Девять тысяч "; break;
		}
		if (x/1000>=1)
        {
            switch(x/100)
            {
            case 11: case 21: 	case 31: case 41: case 51: case 61: case 71: case 81: case 91:
			cout << "сто "; break;
		case 12: case 22: case 32: case 42: case 52: case 62: case 72: case 82: case 92:
			cout << "двести "; break;
		case 13: case 23: case 33: case 43: case 53: case 63: case 73: case 83: case 93:
			cout << "триста "; break;
		case 14:case 24: case 34: case 44: case 54: case 64: case 74: case 84: case 94:
			cout << "четыреста "; break;
		case 15: case 25: case 35: case 45: case 55: case 65: case 75: case 85: case 95:
			cout << "пятьсот "; break;
		case 16: case 26: case 36: case 46: case 56: case 66: case 76: case 86: case 96:
			cout << "шестьсот "; break;
		case 17: case 27: case 37: case 47: case 57: case 67: case 77: case 87: case 97:
			cout << "семьсот "; break;
		case 18: case 28: case 38: case 48: case 58: case 68: case 78: case 88: case 98:
			cout << "восемьсот "; break;
		case 19: case 29: case 39: case 49: case 59: case 69: case 79: case 89: case 99:
			cout << "девятьсот "; break;
        }
        }
	switch(x / 100)
	{
		case 1:
			cout << "сто "; break;
		case 2:
			cout << "двести "; break;
		case 3:
			cout << "триста "; break;
		case 4:
			cout << "четыреста "; break;
		case 5:
			cout << "пятьсот "; break;
		case 6:
			cout << "шестьсот "; break;
		case 7:
			cout << "семьсот "; break;
		case 8:
			cout << "восемьсот "; break;
		case 9:
			cout << "девятьсот "; break;
	}
	switch (((x % 100) / 10))
	{
	case 2:
		cout << "двадцать "; break;
	case 3:
		cout << "тридцать"; break;
	case 4:
		cout << "сорок "; break;
	case 5:
		cout << "пятьдесят "; break;
	case 6:
		cout << "шестьдесят "; break;
	case 7:
		cout << "семьдесят "; break;
	case 8:
		cout << "восемьдесят "; break;
	case 9:
		cout << "девяносто "; break;
	}
	if (x % 100 >= 10 && x % 100 < 20)
	{
		switch (x % 100)
		{
		case 10:
			cout << "десять ";break;
		case 11:
			cout << "одиннадцать ";break;
		case 12:
			cout << "двенадцать ";break;
		case 13:
			cout << "тринадцать ";break;
		case 14:
			cout << "четырнадцать ";break;
		case 15:
			cout << "пятнадцать ";break;
		case 16:
			cout << "шестнадцать ";break;
		case 17:
			cout << "семнадцать ";break;
		case 18:
			cout << "восемнадцать ";break;
		case 19:
			cout << "девятнадцать "; break;
		}
	}
	else {
		switch (x % 10)
		{
		case 1:
			cout << "один ";break;
		case 2:
			cout << "два ";break;
		case 3:
			cout << "три ";break;
		case 4:
			cout << "четыре ";break;
		case 5:
			cout << "пять ";break;
		case 6:
			cout << "шесть ";break;
		case 7:
			cout << "семь ";break;
		case 8:
			cout << "восемь ";break;
		case 9:
			cout << "девять ";break;
		}
	}
	if (x % 100 >= 11 && x % 100 <= 19)
	{
		cout << "рублей\n";
	}
	else
	{
		switch (x % 10)
		{
		case 1:
			cout << "рубль\n";break;
		case 2: case 3: case 4:
			cout << "рубля\n";break;
		default:
			cout << "рублей\n"; break;
		}
	}
	system("PAUSE");
	return 0;
}


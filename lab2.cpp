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
            case 11:
			cout << "сто "; break;
		case 12:
			cout << "двести "; break;
		case 13:
			cout << "триста "; break;
		case 14:
			cout << "четыреста "; break;
		case 15:
			cout << "пятьсот "; break;
		case 16:
			cout << "шестьсот "; break;
		case 17:
			cout << "семьсот "; break;
		case 18:
			cout << "восемьсот "; break;
		case 19:
			cout << "девятьсот "; break;
			case 21:
			cout << "сто "; break;
		case 22:
			cout << "двести "; break;
		case 23:
			cout << "триста "; break;
		case 24:
			cout << "четыреста "; break;
		case 25:
			cout << "пятьсот "; break;
		case 26:
			cout << "шестьсот "; break;
		case 27:
			cout << "семьсот "; break;
		case 28:
			cout << "восемьсот "; break;
		case 29:
			cout << "девятьсот "; break;
			case 31:
			cout << "сто "; break;
		case 32:
			cout << "двести "; break;
		case 33:
			cout << "триста "; break;
		case 34:
			cout << "четыреста "; break;
		case 35:
			cout << "пятьсот "; break;
		case 36:
			cout << "шестьсот "; break;
		case 37:
			cout << "семьсот "; break;
		case 38:
			cout << "восемьсот "; break;
		case 39:
			cout << "девятьсот "; break;
            case 41:
			cout << "сто "; break;
		case 42:
			cout << "двести "; break;
		case 43:
			cout << "триста "; break;
		case 44:
			cout << "четыреста "; break;
		case 45:
			cout << "пятьсот "; break;
		case 46:
			cout << "шестьсот "; break;
		case 47:
			cout << "семьсот "; break;
		case 48:
			cout << "восемьсот "; break;
		case 49:
			cout << "девятьсот "; break;
			case 51:
			cout << "сто "; break;
		case 52:
			cout << "двести "; break;
		case 53:
			cout << "триста "; break;
		case 54:
			cout << "четыреста "; break;
		case 55:
			cout << "пятьсот "; break;
		case 56:
			cout << "шестьсот "; break;
		case 57:
			cout << "семьсот "; break;
		case 58:
			cout << "восемьсот "; break;
		case 59:
			cout << "девятьсот "; break;
			case 61:
			cout << "сто "; break;
		case 62:
			cout << "двести "; break;
		case 63:
			cout << "триста "; break;
		case 64:
			cout << "четыреста "; break;
		case 65:
			cout << "пятьсот "; break;
		case 66:
			cout << "шестьсот "; break;
		case 67:
			cout << "семьсот "; break;
		case 68:
			cout << "восемьсот "; break;
		case 69:
			cout << "девятьсот "; break;
			case 71:
			cout << "сто "; break;
		case 72:
			cout << "двести "; break;
		case 73:
			cout << "триста "; break;
		case 74:
			cout << "четыреста "; break;
		case 75:
			cout << "пятьсот "; break;
		case 76:
			cout << "шестьсот "; break;
		case 77:
			cout << "семьсот "; break;
		case 78:
			cout << "восемьсот "; break;
		case 79:
			cout << "девятьсот "; break;
			case 81:
			cout << "сто "; break;
		case 82:
			cout << "двести "; break;
		case 83:
			cout << "триста "; break;
		case 84:
			cout << "четыреста "; break;
		case 85:
			cout << "пятьсот "; break;
		case 86:
			cout << "шестьсот "; break;
		case 87:
			cout << "семьсот "; break;
		case 88:
			cout << "восемьсот "; break;
		case 89:
			cout << "девятьсот "; break;
			case 91:
			cout << "сто "; break;
		case 92:
			cout << "двести "; break;
		case 93:
			cout << "триста "; break;
		case 94:
			cout << "четыреста "; break;
		case 95:
			cout << "пятьсот "; break;
		case 96:
			cout << "шестьсот "; break;
		case 97:
			cout << "семьсот "; break;
		case 98:
			cout << "восемьсот "; break;
		case 99:
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


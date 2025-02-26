#include<iostream>

using namespace std;

//void main()
//{
//	//Cntrl alt + L yaksho nemay papok
//	//Cntrl+d - Dublicate
//	//Cntrl + K + C - Comment
//	//Cntrl + K + u - UNComment
// 	cout << "Hello world";
//	cout << "Hello world\n";
//	cout << "Atella warld\n";
//	cout << "Atithello worldin";
//	cout << "Hello world";
//	cout << "Wiello world\\\n";
//	cout << "Hello world/in";
//	cout << "hello world\'\n";
//	cout << "Hello world";
//}


//void main()
//{
//	cout << "I tried so hard and got so far But in the end, it doesnt even matter I had to fall to lose it all But in the end, it doesnt even matter\n";
//			 
//	cout << "Every\n \thunter\n \t\twants\n \t\t\tto\n \t\t\t\tknow\n \t\t\t\t\twhere\n \t\t\t\t\t\tthe\n \t\t\t\t\t\t\tpheasant\n \t\t\t\t\t\t\t\t\tis.\n";
//
//	cout << "Selling dogs.\n Type: Roytveller. \n ...\n Phone: 222-22-22\n 222\t | 222 |\n 22\t | 22 |";
//
//}
//
///*typi dannih
//	chislovi
//   symvolni
//	lohichni*/
//////int age = 15
////int Age = 15
////int ageOfHuman = 15
////int age_of_human = 15
//// const float pi =3.14
/*1. Дана діагональ телевізора в дюймах.Написати програму, що визначає цю ж діагональ у сантиметрах(1 дюйм = 2.54 сантиметрів).
Нижче представлений приклад для перевірки програ - ми на коректність.
Вхідними даними є :
Діагональ телевізора(inch) > 42
Вихідні дані :
Діагональ телевізора : 107 см.
2. За один день хом'ячок з'їдає К грам корму.Написати програму, що визначає закупівлю корму в кілограмах на 30 днів.
Нижче представлений приклад для перевірки програ - ми на коректність.
Вхідними даними є :
Витрата корму за 1 день(г) 20*/
void main()
{
	const float cm = 2.54;
	int diag;
	cout << "Enter TV Diagonal in inches = ";
	cin >> diag;
	cout << "TV diagonal in inches = " << diag << endl;
	cout << "TV diagonal in cm = " << diag * cm << endl;

	float k;
	cout << "Enter Hamster meal weight(grams) = ";
	cin >> k;
	cout << endl;
	cout << " Hamster meal weight(kilograms) for 30 days = ";
	cout << k / 1000 * 30;




}

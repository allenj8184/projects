//This program will convert a string into Morse Code.
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void displayCode();
void convertString();
int main()
{
	cout<<"\t\t\t\t\t Morse Code"<<endl<<endl<<endl;
	displayCode();//Call the function that displays Morse Code
	convertString();//Call the function to convert string to Morse Code

	system("pause");
	return 0;
}


void displayCode()
{

    //Read numbers from file
	int numbers[10];
	int a = 0;
	ifstream numbersFile;
	numbersFile.open("MorseCodeNumbers.txt");
	while (a< 10 && numbersFile >> numbers[a])
		a++;
	numbersFile.close();

	//Read number conversions from file
	string numberscode[10];
	int b= 0;
	ifstream numberscodeFile;
	numberscodeFile.open("ConvertedMorseCodeNumbers.txt");
	while (b< 10 && numberscodeFile >> numberscode[b])
		b++;
	numberscodeFile.close();

	//Read letters A-J from file
	char letters[10];
	int c = 0;
	ifstream lettersFile;
	lettersFile.open("MorseCodeLetters.txt");
	while (c< 10 && lettersFile >> letters[c])
		c++;
	lettersFile.close();

	//Read letter conversions from file
	string letterscode[10];
	int d= 0;
	ifstream letterscodeFile;
	letterscodeFile.open("ConvertedMorseCodeLetters.txt");
	while (d< 10 && letterscodeFile >> letterscode[d])
		d++;
	letterscodeFile.close();

	//Read letters K-T from file
	char lettersB[10];
	int e = 0;
	ifstream lettersBFile;
	lettersBFile.open("MorseCodeLettersB.txt");
	while (e< 10 && lettersBFile >> lettersB[e])
		e++;
	lettersBFile.close();

	//Read letter conversions from file
	string letterscodeB[10];
	int f= 0;
	ifstream letterscodeBFile;
	letterscodeBFile.open("ConvertedMorseCodeLettersB.txt");
	while (f< 10 && letterscodeBFile >> letterscodeB[f])
		f++;
	letterscodeBFile.close();

	//Read letters T-? from file
	char lettersC[10];
	int g = 0;
	ifstream lettersCFile;
	lettersCFile.open("MorseCodeLettersC.txt");
	while (g< 10 && lettersCFile >> lettersC[g])
		g++;
	lettersCFile.close();

	//Read letter conversions from file
	string letterscodeC[10];
	int h= 0;
	ifstream letterscodeCFile;
	letterscodeCFile.open("ConvertedMorseCodeLettersC.txt");
	while (h< 10 && letterscodeCFile >> letterscodeC[h])
		h++;
	letterscodeCFile.close();

	//Display Morse Code Chart
	cout<< "Character"<< "\t" << "Code"<< "\t"<< "Character"<< "\t" << "Code"<< "\t"<< "Character"<< "\t" << "Code"<<"\t"<<"Character"<<"\t""Code"<<endl;
	cout<< "--------------------------------------------------------------------------------------------"<< endl;
	for (a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0; (a<10, b<10, c<10, d<10, e<10, f<10, g<10, h<10); a++, b++, c++, d++, e++, f++, g++, h++){

		cout<< "    "<< numbers[a]<<"\t"<< "        "<< numberscode[b]<<"\t"<<"    "<<letters[c]<<"\t"<<"        "<<letterscode[d]<<
		"\t"<<"    "<<lettersB[e]<<"\t"<<"        "<<letterscodeB[f]<<"\t"<<"    "<<lettersC[g]<<"\t"<<"        " <<letterscodeC[h]<<endl;}
}

void convertString()
{
	string user_string;
	char string[40];
	int count;
	
	cout<<"Enter a string you would like to convert to Morse Code."<<endl<<"*Note: Please use all caps."<<endl;
	for (count= 0; count< 40; count++){
		cin>>string[0];}
	cout<<"You entered: " <<user_string<<endl;




}
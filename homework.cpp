/*
Just a bunch of functions for "homework" purposes
*/

#include<iostream>
#include<vector>
using namespace std;

constexpr float pi = 3.141592; // defines pi and makes it read only (like final variables)


class HomeworkStuff {
	
	// actual homework functions
	// this calculates the area of a circle (r^2 pi)
	public: float circle_area(float r) {
		float area = r * r * pi;
		return area;
	}


	// This converts from Farenheit to celcius
	public: float celcius_to_farenheit(float tempC) {
		float temp_F = (9.0/5.0) * tempC + 32;
		return temp_F;
	}


	// this calculates a^2 + b^2 -2ab
	public: int random_funct(int a, int b) {
		return a * a + b* b - 2 * a * b;
	}


	// this calculates the sum of a number, it's square and it's cube
	public: int sum_of_number_squared_cubed(int n) {
		return n + n * n + n * n * n;
	}


	/*
	Gross salary=basic+(quantity*bonusrate)+(quantity*price)*commision
	Basic=10,000
	Commision=2%
	Bonusrate=200
	*/
	public: float gross_salary(int quantity, float price){
		float commision = 0.02;
		int basic = 10000;
		int bonusrate = 200;
		float salary = 
			basic 
			+ (quantity * bonusrate)
			+ (quantity * price * commision);
		return salary;
	}


	// a function that takes 2 ints as arguments and returns the largest
	public: int max_2(int n1, int n2) {
		int max;
		if (n1 > n2) {
			max = n1;
		}
		else {
			max = n2;
		}
		return max;
	}


	// a function that takes 3 ints as arguments and returns the largest
	public: int max_3(int n1, int n2, int n3) {
		int max;
		if ( n1 > n2 || n1 > n3) { // if n1 > n2 and n1> n3
			max = n1;
		}
		else if (n2 > n1 || n2 > n3) {
			max = n2;
		}
		else {
			max = n3;
		}
		return max;
	}

	public: void ascii_gen(string word) {
	vector<string>characters = {// each char = 11 symbols wide
	":::'###::::'########::::'######::'########:::'########::'########::'######:::'##::::'##::::'####:::::::::'##:::'##:::'##::'##:::::::'##::::'##::'##::: ##::'#######::'########:::'#######::'########::::'######:::'########:'##::::'##:'##::::'##'##:::::'##:'##::::'##::'##:::'##::'########:",
	"::'## ##::: ##.... ##::'##... ##: ##.... ##:: ##.....::: ##.....::'##... ##:: ##:::: ##::::. ##:::::::::: ##::: ##::'##::: ##::::::: ###::'###:: ###:: ##:'##.... ##: ##.... ##:'##.... ##: ##.... ##::'##... ##::... ##..:: ##:::: ##: ##:::: ## ##:'##: ##:. ##::'##:::. ##:'##:::..... ##::",
	":'##:. ##:: ##:::: ##:: ##:::..:: ##:::: ##:: ##:::::::: ##::::::: ##:::..::: ##:::: ##::::: ##:::::::::: ##::: ##:'##:::: ##::::::: ####'####:: ####: ##: ##:::: ##: ##:::: ##: ##:::: ##: ##:::: ##:: ##:::..:::::: ##:::: ##:::: ##: ##:::: ## ##: ##: ##::. ##'##:::::. ####:::::::: ##:::",
	"'##:::. ##: ########::: ##::::::: ##:::: ##:: ######:::: ######::: ##::'####: #########::::: ##:::::::::: ##::: #####::::: ##::::::: ## ### ##:: ## ## ##: ##:::: ##: ########:: ##:::: ##: ########:::. ######:::::: ##:::: ##:::: ##: ##:::: ## ##: ##: ##:::. ###:::::::. ##:::::::: ##::::",
	" #########: ##.... ##:: ##::::::: ##:::: ##:: ##...::::: ##...:::: ##::: ##:: ##.... ##::::: ##::::'##::: ##::: ##. ##:::: ##::::::: ##. #: ##:: ##. ####: ##:::: ##: ##.....::: ##:'## ##: ##.. ##:::::..... ##::::: ##:::: ##:::: ##:. ##:: ##: ##: ##: ##::: ## ##::::::: ##::::::: ##:::::",
	" ##.... ##: ##:::: ##:: ##::: ##: ##:::: ##:: ##:::::::: ##::::::: ##::: ##:: ##:::: ##::::: ##:::: ##::: ##::: ##:. ##::: ##::::::: ##:.:: ##:: ##:. ###: ##:::: ##: ##:::::::: ##:.. ##:: ##::. ##:::'##::: ##::::: ##:::: ##:::: ##::. ## ##:: ##: ##: ##:: ##:. ##:::::: ##:::::: ##::::::",
	" ##:::: ##: ########:::. ######:: ########::: ########:: ##:::::::. ######::: ##:::: ##::::'####:::. ######:::: ##::. ##:: ########: ##:::: ##:: ##::. ##:. #######:: ##::::::::: ##### ##: ##:::. ##::. ######:::::: ##::::. #######::::. ###:::. ###. ###:: ##:::. ##::::: ##::::: ########:",
	"..:::::..::........:::::......:::........::::........:::..:::::::::......::::..:::::..:::::....:::::......:::::..::::..:::........::..:::::..:::..::::..:::.......:::..::::::::::.....:..::..:::::..::::......:::::::..::::::.......::::::...:::::...::...:::..:::::..::::::..::::::........::"
	};



	for (int level = 0; level < 7; ++level) {

		for (int w_letter=0; w_letter<word.length(); ++w_letter){

		int ascii_position = (int) toupper(word[w_letter]);
		int start_pos_string = (ascii_position - 65) * 11;
		cout << characters[level].substr(start_pos_string, 11);
		}
		cout << endl;

		}

	}

};



int main(){
    
	HomeworkStuff hw_functs;

/*	// demonstrate conversion
	cout << "So you want to convert celcius to Freedom units? \n What's the temp you want to convert?";
	float temp_c;
	cin >> temp_c;
	cout << temp_c << " Is "  << hw_functs.celcius_to_farenheit(temp_c) << " farenheit";
*/

	string ascii;
	cout << "what shoukld be ascii-art'ified?" << endl;
	cin >> ascii;
	hw_functs.ascii_gen(ascii);
    cout << "Enter to exit the program: "<< endl;
	cin.ignore().get(); //Pause Command for Linux Terminal

    return 0;
}

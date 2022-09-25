#include <iostream>
using namespace std;
#include <string>

int main() {
	
	string Name;
	int Age;

	cout << "Hello and welcome to Bulls Trivia!" << endl;
	cout << endl;

	cout << "What is your name? " << endl;
	cin >> Name;
	cout << endl;

	cout << "How old are you? " << endl;
	cin >> Age;
	cout << endl;

	string Respond;
	cout << "Are you ready to take" << " the quiz " << Name << " [yes/no] " << endl;
	cin >> Respond;

	if (Respond == "yes") {
		cout << endl;
		cout << "Good Luck!" << endl;
	}
	else {
		cout << "Okay Good Bye!" << endl;
		
	}

	cout << endl;
	cout << "The Chicago Bulls have won 6 Championships. [true/false] " << endl;
	cin >> Respond;

	if (Respond == "true") {
		cout << endl;
		cout << "Correct! " << endl;
	}
	else {
		cout << "Wrong " << Name << " the Bulls were Champs in 91, 92, 93, 96, 97 and 98!" << endl;
		
	}

	cout << endl;
	cout << "What year were the Bulls founded? [Enter a, b or c]" << endl;
	cout << "a)1944 b)1938 c)1966 " << endl;
	cout << endl;
	cin >> Respond;

	if (Respond == "c") {
		cout << endl;
		cout << "You got it! " << endl;
	}
	else {
		cout << "Wrong " << Name << ", before the bulls went on to become one of the leagues storied franchises, they were the best expansion team posting a 33-48 record in 1966-67 and qualified for the playoffs, the only NBA team to do so in their inaugural season." << endl;

	}

	cout << endl;
	cout << "What was the first jersey number retired by the Chicago Bulls? [Enter a, b, c or d]" << endl;
	cout << "a)33 b)23 c)4 d)10 " << endl;
	cout << endl;
	cin >> Respond;

	if (Respond == "c") {
		cout << endl;
		cout << "Very good! " << endl;
	}
	else {
		cout << "Wrong " << Name << " When the Bulls selected Jerry Sloan in the 1966 NBA expansion draft, he became known as 'the Original Bull'. A two-time NBA All-Star, he was known for his tenacious defense and leading the team to the playoffs in their very first season. Sloan played ten seasons with the Bulls and was the franchise leader in games played when he retired in 1976. On February 17, 1978, his No. 4 jersey became the first jersey number retired by the Bulls." << endl;

	}

	cout << endl;
	cout << "Who holds the franchise single-season record for assists? [Enter a, b or c]" << endl;
	cout << "a)Guy Rodgers b)Ennis Whatley c)Michael Jordan" << endl;
	cin >> Respond;

	if (Respond == "a") {
		cout << endl;
		cout << "Correct! " << endl;
	}
	else {
		cout << "Wrong " << Name << ", Point guard Guy Rodgers played the 1966-67 season in Chicago and was named an NBA All-Star for the fourth and final time in his career. That same season, Rodgers averaged 18.0 points and handed out a then-NBA record 908 assists, which is still the Chicago Bulls single-season record." << endl;

	}

	cout << endl;
	cout << "Which Chicago Bulls coach has the highest winning percentage? [Enter a, b, c or d]" << endl;
	cout << "a)Jerry Sloan b)Tom Thibodeau c)Phil Jackson d)Doug Collins " << endl;
	cin >> Respond;

	if (Respond == "c") {
		cout << endl;
		cout << "Correct! " << endl;
	}
	else {
		cout << "Wrong " << Name << ", Phil Jackson was the head coach of the Chicago Bulls from 1989 to 1998, leading them to six NBA championships and a regular season record of 545-193. His .738 winning percentage is the highest in franchise history." << endl;

	}
	cout << endl;
	cout << "Thanks for playing Bulls Trivia! Hope to see you again soon " << Name << endl;



	system("pause>0");
	return 0;

}

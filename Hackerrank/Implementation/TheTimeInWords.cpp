/***********************************************
 * File:        TheTimeInWords.cpp
 * Date:        2025 Apr 26 16:05:50
 * Description: Basic C++ program template
 ***********************************************/
#include <iostream>
#include <vector>

using namespace std;
#define ll long long

// clang-format off
vector<string> num_string = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine" };
// clang-format on

int h, m;

int main(int argc, char **argv) {
	cin >> h >> m;

	string ans;
	if (m == 0)
		ans = num_string[h] + " o' clock";
	else if (m == 15)
		ans = "quarter past " + num_string[h];
	else if (m == 30)
		ans = "half past " + num_string[h];
	else if (m == 45)
		ans = "quarter to " + num_string[h + 1];
	else if (m > 0 && m < 30)
		ans = num_string[m] + " minute" + (m == 1 ? "" : "s") + " past " + num_string[h];
	else if (m > 31 && m < 60)
		ans = num_string[60 - m] + " minutes to " + num_string[h + 1];

	cout << ans;

	return 0;
}

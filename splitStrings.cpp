#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> solution(const string &s) {
        vector<string> res;
        string part = "";
        string result = s;
        if (s.size() % 2 != 0)
                result += '_';
        for (int i = 0; i < result.size(); i++) {
                part += result[i];
                if ((i + 1) % 2 == 0) {
                        res.push_back(part);
                        part = "";
                }
        }

        return res;
}

int main() {
	string str[] = {
		"Hello",
		"Timofey",
		"Ab",
		"abcdef",
		"abcde",
		"LovePizza"	
	};
	for (int i = 0; i < sizeof(str) / sizeof(*str); i++) {
		vector<string> result = solution(str[i]);
		cout << "Test " << (i + 1) << ":" << endl;
		for (auto & item : result)
			cout << item << " ";
		cout << endl;
	}
}
	

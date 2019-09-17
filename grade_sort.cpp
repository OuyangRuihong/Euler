/*************************************************************************
	> File Name: grade_sort.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年06月14日 星期五 19时49分24秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::vector;
using std::sort;
using std::cin;
using std::cout;
using std::string;

class student {
public:
	vector<string>name;
    vector<int>grade;
	student(){
    };
    ~student(){};
};
int main() {
    int input;
    string name;
    vector<student> a; 
    
    while(cin >> name >> input) {
		a->name.push_back(name);
        a->grade.push_back(input);
    }
    
    sort(begin(a.grade), end(a.grade));
    
    for (int i = 0; i < a.size(); i++) {
        cout << a->name[i] << a->grade[i] << endl;
    }
    
    return 0;
}

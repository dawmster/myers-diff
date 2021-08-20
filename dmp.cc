#include "dmp_diff.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

using MyersStringDiff = MyersDiff<string>;

int main_string() {
    string one{"test"};
    string two{"text"};
    MyersStringDiff diff{one, two};

    for (const auto &i : diff) {
        cout << i.str() << endl;
    }

    return 0;
}

int main_vector_string() {
    vector<string> one{"test","best","two"};
    vector<string> two{"best","text"};
    MyersDiff< vector<string> > diff{one, two};

    for (const auto &i : diff) {
        cout << i.str() << endl;
    }

    return 0;
}

int main_vector_int() {
    vector<int> one{1,10,20,30,100   };
    vector<int> two{3,10,20,30,100,400};
    MyersDiff< vector<int> > diff{one, two};

    for (const auto &i : diff) {
        cout << i.str() << endl;
    }

    return 0;
}


int main(int argn, char** args) {
    main_string();

    cout << endl<< "VECTOR<STRING>"<<endl;

    main_vector_string();

    cout << endl<< "VECTOR<INT>"<<endl;

    main_vector_int();

    return 0;
}
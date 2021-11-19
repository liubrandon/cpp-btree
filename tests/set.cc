#include "btree_set.h"
#include <string>
#include <iostream>

using namespace std;
using namespace btree;

int main() {
    btree_set<string> my_set;
    my_set.insert("hello");
    my_set.insert("world");
    for (btree_set<string>::iterator itr = my_set.begin(); itr != my_set.end(); itr++) {
        cout << *itr << endl;
    }
}
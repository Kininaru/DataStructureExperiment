#include "iostream"
#include "List.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Code for exp1:" << endl;

    List *list = createList();
    for (int i = 0; i < 5; ++i) {
        appendList(list, i);
    }

    printList(list);

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    static const int SIZE = 10;

    vector<pair<int, int>> table[SIZE];

    int hashFunction(int key) {
        return key % SIZE;
    }

public:
    void insert(int key, int value) {
        int index = hashFunction(key);

        for (auto &p : table[index]) {
            if (p.first == key) {
                p.second = value;
                return;
            }
        }

        table[index].push_back({key, value});
    }

    int search(int key) {
        int index = hashFunction(key);

        for (auto &p : table[index]) {
            if (p.first == key)
                return p.second;
        }

        return -1;
    }

    void remove(int key) {
        int index = hashFunction(key);

        for (auto it = table[index].begin(); it != table[index].end(); it++) {
            if (it->first == key) {
                table[index].erase(it);
                return;
            }
        }
    }
};

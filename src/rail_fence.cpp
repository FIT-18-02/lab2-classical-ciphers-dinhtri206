#include <string>
#include <vector>

using namespace std;

string rail_fence_encrypt(string text, int key) {
    if (key <= 1 || text.empty()) return text;
    vector<string> rail(key);
    int row = 0, dir = 1;
    
    for (char c : text) {
        rail[row] += c;
        if (row == 0) dir = 1;
        else if (row == key - 1) dir = -1;
        row += dir;
    }
    
    string result = "";
    for (string s : rail) result += s;
    return result;
}

string rail_fence_decrypt(string cipher, int key) {
    if (key <= 1 || cipher.empty()) return cipher;
    vector<vector<char>> rail(key, vector<char>(cipher.size(), '\n'));
    int row = 0, dir = 1;
    
    for (int i = 0; i < cipher.size(); i++) {
        rail[row][i] = '*';
        if (row == 0) dir = 1;
        else if (row == key - 1) dir = -1;
        row += dir;
    }
    
    int index = 0;
    for (int i = 0; i < key; i++) {
        for (int j = 0; j < cipher.size(); j++) {
            if (rail[i][j] == '*' && index < cipher.size()) {
                rail[i][j] = cipher[index++];
            }
        }
    }
    
    string result = "";
    row = 0; dir = 1;
    for (int i = 0; i < cipher.size(); i++) {
        result += rail[row][i];
        if (row == 0) dir = 1;
        else if (row == key - 1) dir = -1;
        row += dir;
    }
    return result;
}

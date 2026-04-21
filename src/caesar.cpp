#include <string>
using namespace std;

string caesar_encrypt(string text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            result += (c - base + shift) % 26 + base;
        } else {
            result += c;
        }
    }
    return result;
}

string caesar_decrypt(string text, int shift) {
    return caesar_encrypt(text, 26 - shift);
}

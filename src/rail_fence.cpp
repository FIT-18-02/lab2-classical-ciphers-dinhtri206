#include <string>
#include <cctype>

using namespace std;

string caesar_encrypt(string text, int shift) {
    string result = "";
    shift = (shift % 26 + 26) % 26;

    for (char c : text) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            result += (char)((c - base + shift) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}

string caesar_decrypt(string text, int shift) {
    return caesar_encrypt(text, 26 - (shift % 26));
}

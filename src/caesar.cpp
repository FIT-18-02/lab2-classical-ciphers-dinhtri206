#include <cctype>
#include <iostream>
#include <string>

using namespace std;

bool is_valid_message(const string &text) {
    for (char c : text) {
        if (!isalpha(static_cast<unsigned char>(c)) && c != ' ') {
            return false;
        }
    }
    return true;
}

char shift_char(char c, int shift) {
    if (!isalpha(static_cast<unsigned char>(c))) return c;
    char base = isupper(static_cast<unsigned char>(c)) ? 'A' : 'a';
    shift %= 26;
    if (shift < 0) shift += 26;
    return static_cast<char>((c - base + shift) % 26 + base);
}

string caesar_encrypt(const string &plaintext, int shift) {
    string ciphertext;
    for (char c : plaintext) {
        ciphertext += shift_char(c, shift);
    }
    return ciphertext;
}

string caesar_decrypt(const string &ciphertext, int shift) {
    return caesar_encrypt(ciphertext, -shift);
}

int main() {
    int choice;
    string message;
    int shift;

    if (!(cin >> choice)) return 0;
    cin.ignore();
    
    if (!getline(cin, message)) return 0;
    if (!(cin >> shift)) return 0;

    if (!is_valid_message(message)) {
        return 0;
    }

    if (choice == 1) {
        cout << caesar_encrypt(message, shift) << endl;
    } else if (choice == 2) {
        cout << caesar_decrypt(message, shift) << endl;
    }
    
    return 0;
}

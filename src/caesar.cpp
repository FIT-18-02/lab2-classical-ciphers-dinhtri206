#include <string>
#include <cctype>

using namespace std;

string caesar_encrypt(string text, int shift) {
    string result = "";
    // Đảm bảo shift luôn nằm trong khoảng 0-25
    shift = (shift % 26 + 26) % 26;

    for (char c : text) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            // Ép kiểu để tính toán chính xác
            result += (char)((c - base + shift) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}

string caesar_decrypt(string text, int shift) {
    // Giải mã bản chất là mã hóa với shift ngược lại
    return caesar_encrypt(text, 26 - (shift % 26));
}

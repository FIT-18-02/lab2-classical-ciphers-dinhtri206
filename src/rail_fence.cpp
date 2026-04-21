#include <string>
#include <vector>

using namespace std;

string rail_fence_encrypt(string text, int rails) {
    if (rails <= 1) return text;
    vector<string> fence(rails);
    int rail = 0;
    bool direction_down = false;

    for (char c : text) {
        fence[rail] += c;
        if (rail == 0 || rail == rails - 1) direction_down = !direction_down;
        rail += direction_down ? 1 : -1;
    }

    string result = "";
    for (const string& r : fence) result += r;
    return result;
}

string rail_fence_decrypt(string cipher, int rails) {
    if (rails <= 1) return cipher;
    int n = cipher.length();
    vector<string> fence(rails, string(n, ' '));
    
    int rail = 0;
    bool direction_down = false;
    for (int i = 0; i < n; i++) {
        fence[rail][i] = '*'; // Đánh dấu vị trí sẽ đặt ký tự
        if (rail == 0 || rail == rails - 1) direction_down = !direction_down;
        rail += direction_down ? 1 : -1;
    }

    int index = 0;
    for (int i = 0; i < rails; i++) {
        for (int j = 0; j < n; j++) {
            if (fence[i][j] == '*' && index < n) {
                fence[i][j] = cipher[index++];
            }
        }
    }

    string result = "";
    rail = 0;
    direction_down = false;
    for (int i = 0; i < n; i++) {
        result += fence[rail][i];
        if (rail == 0 || rail == rails - 1) direction_down = !direction_down;
        rail += direction_down ? 1 : -1;
    }
    return result;
}

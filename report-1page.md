# Report 1 Page – FIT4012 Lab 2

## 1. Mục tiêu
Tìm hiểu và triển khai thuật toán mã hóa Caesar và Rail Fence, xử lý dữ liệu đầu vào và đọc file trong C++.

## 2. Cách làm
- Triển khai thuật toán Caesar và Rail Fence.
- Viết hàm kiểm tra tính hợp lệ của input.
- Tích hợp đọc file `data/input.txt`.

## 3. Kết quả chính
### 3.1 Caesar Cipher
| Input | Key | Ciphertext / Plaintext | Nhận xét |
|---|---:|---|---|
| I LOVE YOU | 3 | L ORYH BRX | Mã hóa đúng |
| hello world | 5 | mjqqt btwqi | Mã hóa đúng |
| LORYH BRX | 3 | I LOVE YOU | Giải mã đúng |

### 3.2 Rail Fence Cipher
| Input | Rails | Ciphertext / Plaintext | Nhận xét |
|---|---:|---|---|
| I LOVE YOU | 2 | ILV O OEYU | Mã hóa đúng |
| I LOVE YOU | 4 | I  EYLVOOU | Mã hóa đúng |
| IOEOLVYU | 2 | I LOVE YOU | Giải mã đúng |

### 3.3 Input validation / file input
- Trường hợp đầu vào không hợp lệ: Chương trình báo lỗi đúng.
- Kết quả đọc từ `data/input.txt`: Đọc và mã hóa thành công.

## 4. Kết luận
Thông qua bài thực hành, em đã củng cố được tư duy về nguyên lý dịch vòng ký tự (thuật toán Caesar) và kỹ thuật thay đổi trật tự cấu trúc (thuật toán Rail Fence). Thách thức lớn nhất trong toàn bộ quá trình là việc ứng dụng và quản lý cấu trúc dữ liệu vector trong C++ để mô phỏng lại đường chéo zic-zắc nhằm giải mã Rail Fence thành công.

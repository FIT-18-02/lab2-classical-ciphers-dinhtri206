[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/9MWclHpA)
# FIT4012 - Lab 2: Classical Ciphers

##  Thông tin sinh viên
- **Họ và tên:** Nguyễn Đình Trí
- **Mã sinh viên:** 1871020580

##  Trạng thái dự án
- **Tiến độ:** Hoàn thành 100% yêu cầu (Q1 - Q8).
- **Kiểm thử tự động:** Đã vượt qua hệ thống Autograder (Tích xanh).

##  Kết quả thực hiện
### 1. Caesar Cipher (Q1 - Q3)
- Cài đặt thành công mã hóa và giải mã.
- Hỗ trợ xử lý chữ cái viết thường và giữ nguyên định dạng dấu cách.

### 2. Rail Fence Cipher (Q4 - Q8)
- Mã hóa và giải mã chuẩn xác theo mô hình zigzag (đã test kỹ với 4 rails).
- Xử lý tốt dấu cách và kiểm tra tính hợp lệ của đầu vào (chỉ nhận chữ cái và khoảng trắng).
- Tích hợp tính năng đọc thông điệp trực tiếp từ file `data/input.txt`.

##  Cấu trúc Repo
- `src/`: Chứa mã nguồn chính (`caesar.cpp`, `rail_fence.cpp`).
- `data/`: Chứa dữ liệu đầu vào `input.txt`.
- `tests/`: Chứa danh sách các trường hợp kiểm thử `test_cases.md`.
- `logs/`: Nhật ký vận hành chương trình `run_log.md`.
- `report-1page.md`: Báo cáo tóm tắt quy trình thực hiện.
- `lab2-guide.md`: Checklist hướng dẫn và tiến độ bài làm.

##  Hướng dẫn biên dịch và chạy
### Caesar Cipher
```bash
g++ -std=c++17 -O2 -o caesar src/caesar.cpp
./caesar
```
### Rail Fence Cipher
```bash
g++ -std=c++17 -O2 -o rail_fence src/rail_fence.cpp
./rail_fence
```

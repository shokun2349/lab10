#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string line;

    // ห้ามแก้ไข Code ในบรรทัดนี้ แม้แต่นิดเดียว
    ifstream source;
    // ห้ามแก้ไข Code ในบรรทัดนี้ แม้แต่นิดเดียว
    ofstream dest;

    // ห้ามแก้ไข Code ในบรรทัดนี้ แม้แต่นิดเดียว
    source.open("cheerbook.txt");
    // ห้ามแก้ไข Code ในบรรทัดนี้ แม้แต่นิดเดียว
    dest.open("cheerbook_copy.txt");

    // --- แก้ไขส่วนที่แทรกเป็นแบบนี้ (ลบการเช็ค is_open ของ dest ออก) ---
    dest << "-------------------- BOOM ---------------------" << endl;

    while (getline(source, line)) {
        dest << line << endl;
    }

    dest << "-------------------- HA!! ---------------------" << endl;
    // --- สิ้นสุดการแทรก ---

    // ห้ามแก้ไข Code ในบรรทัดนี้ แม้แต่นิดเดียว
    source.close();
    // ห้ามแก้ไข Code ในบรรทัดนี้ แม้แต่นิดเดียว
    dest.close();

    

    return 0;
}
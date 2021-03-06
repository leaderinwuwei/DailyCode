//
// Created by Lenovo on 2019/1/30.
//

#include "Cppblogcode.h"
#include<iostream>
#include<string>
#include <limits>
#include <fstream>

using namespace std;


void print_basic_data_types() {
    cout << "type: \t\t" << "************size begin **************" << endl;
    cout << "bool: \t\t" << "Number of bytes occupied" << sizeof(bool);
    cout << "\tmax" << (numeric_limits<bool>::max)();
    cout << "\t\tmin" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t" << "Number of bytes occupied" << sizeof(char);
    cout << "\tmax" << (numeric_limits<char>::max)();
    cout << "\t\tmin" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t" << "Number of bytes occupied" << sizeof(signed char);
    cout << "\tmax" << (numeric_limits<signed char>::max)();
    cout << "\t\tmin" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t" << "Number of bytes occupied" << sizeof(unsigned char);
    cout << "\tmax" << (numeric_limits<unsigned char>::max)();
    cout << "\t\tmin" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t" << "Number of bytes occupied" << sizeof(wchar_t);
    cout << "\tmax" << (numeric_limits<wchar_t>::max)();
    cout << "\t\tmin" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t" << "Number of bytes occupied" << sizeof(short);
    cout << "\tmax" << (numeric_limits<short>::max)();
    cout << "\t\tmin" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t" << "Number of bytes occupied" << sizeof(int);
    cout << "\tmax" << (numeric_limits<int>::max)();
    cout << "\tmin" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t" << "Number of bytes occupied" << sizeof(unsigned);
    cout << "\tmax" << (numeric_limits<unsigned>::max)();
    cout << "\tmin" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t" << "Number of bytes occupied" << sizeof(long);
    cout << "\tmax" << (numeric_limits<long>::max)();
    cout << "\tmin" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t" << "Number of bytes occupied" << sizeof(unsigned long);
    cout << "\tmax" << (numeric_limits<unsigned long>::max)();
    cout << "\tmin" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t" << "Number of bytes occupied" << sizeof(double);
    cout << "\tmax" << (numeric_limits<double>::max)();
    cout << "\tmin" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t" << "Number of bytes occupied" << sizeof(long double);
    cout << "\tmax" << (numeric_limits<long double>::max)();
    cout << "\tmin" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t" << "Number of bytes occupied" << sizeof(float);
    cout << "\tmax" << (numeric_limits<float>::max)();
    cout << "\tmin" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t" << "Number of bytes occupied" << sizeof(size_t);
    cout << "\tmax" << (numeric_limits<size_t>::max)();
    cout << "\tmin" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t" << "Number of bytes occupied" << sizeof(string) << endl;
    // << "\tmax" << (numeric_limits<string>::max)() << "\tmin" << (numeric_limits<string>::min)() << endl;
    cout << "type: \t\t" << "************size end **************" << endl;

};

void set_print_person() {
    Person zhang;
    Person li(19, 29);
    zhang.age = 19;
    zhang.id = 13952;
    zhang.name = 'i';
    zhang.sex = 'g';
    li.name = 'j';
    li.sex = 'b';
    cout << "zhang.age is " << zhang.age << "  zhang.name is " << zhang.name << endl;
    cout << "li.age is " << li.age << "  li.id is " << li.id << endl;
}

void set_print_boxes() {
    Box Box1;                // 声明 Box1，类型为 Box
    Box Box2;                // 声明 Box2，类型为 Box
    Box Box3;                // 声明 Box3，类型为 Box
    double volume = 0.0;     // 用于存储体积
    Box *ptrBox;                // Declare pointer to a class.

    // box 1 详述
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // box 2 详述
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    ptrBox = &Box1;
    cout << "ptrBox getVolume is :" << ptrBox->getVolume() << endl;

    // box 1 的体积
    volume = Box1.getVolume();
    cout << "Box1 getVolume is :" << volume << endl;
    printBreadth(Box1);

    // box 2 的体积
    volume = Box2.getVolume();
    cout << "Box2 getVolume is :" << volume << endl;
    if (Box1.compare(Box2)) {
        cout << "Box2 is smaller than Box1" << endl;
    } else {
        cout << "Box2 is equal to or larger than Box1" << endl;
    }
    Box3 = Box1 + Box2;
    // box 3 的体积
    volume = Box3.getVolume();
    cout << "Box3 getVolume is :" << volume << endl;

}

void set_print_student() {
    Student student;
    student.name = 'Y';
    cout << "student name is :" << student.name << endl;
    student.setClassroom('5');
    cout << "student getClassroom is :" << student.getClassroom() << endl;
    LittleStudent littleStudent;
    littleStudent.setAddress('N');
    cout << "student getAddress is :" << littleStudent.getAddress() << endl;
}

void set_print_alllife() {
    AllLife allLife(100);
    allLife.printLength();
    AllLife allLif = allLif;
    allLif.printLength();
}

void set_print_inherit() {
    Rectangle rectangle;
    rectangle.setHeight(20);
    rectangle.setWidth(12);
    int area = rectangle.getArea();
    cout << "rectangle total  area is :" << area << endl;
    cout << "rectangle getCost   is :" << rectangle.getCost(area) << endl;
}

void set_print_polymorphism() {
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);

    // 存储矩形的地址
    shape = &rec;
    // 调用矩形的求面积函数 area
    shape->getArea();

    // 存储三角形的地址
    shape = &tri;
    // 调用三角形的求面积函数 area
    shape->getArea();
}


//向文件内部写入数据，并将数据读出
void file_wr() {
    char data[100];
    //向文件写入数据
    ofstream outfile;
    outfile.open("test.txt");
    cout << "Write to the file" << endl;
    cout << "Enter your name:" << endl;
    cin.getline(data, 100);
    outfile << data << endl;
    cout << "Enter your age:" << endl;
    cin >> data;
    cin.ignore();
    outfile << data << endl;
    outfile.close();
    //从文件读取数据
    ifstream infile;
    infile.open("test.txt");
    cout << "Read from the file" << endl;
    infile >> data;
    cout << data << endl;
    infile >> data;
    cout << data << endl;
    infile.close();
}


//将数据从一文件复制到另一文件中
void file_copy() {
    char data[100];
    ifstream infile;
    ofstream outfile;
    infile.open("test.txt");
    outfile.open("test_1.txt");
    cout << "copy from test.txt to test_1.txt" << endl;
    while (!infile.eof()) {
        infile >> data;
        cout << data << endl;
        outfile << data << endl;
    }
    infile.close();
    outfile.close();
}


void test_files() {
    char data[100];

    // 以写模式打开文件
    ofstream outfile;
    outfile.open("/com.ming.codes/res/IntelGFXCoin.log");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);
    // 向文件写入用户输入的数据
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    // 再次向文件写入用户输入的数据
    outfile << data << endl;

    // 关闭打开的文件
    outfile.close();
    // 以读模式打开文件
    ifstream infile;
    infile.open("/com.ming.codes/res/IntelGFXCoin.log");

    cout << "Reading from the file" << endl;
    infile >> data;

    // 在屏幕上写入数据
    cout << data << endl;

    // 再次从文件读取数据，并显示它
    infile >> data;
    cout << data << endl;

    // 关闭打开的文件
    infile.close();

    file_wr();
    file_copy();
}
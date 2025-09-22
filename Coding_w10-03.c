#include <stdio.h>
#include <string.h> // เพิ่มไลบรารีสำหรับจัดการสตริง

int main(){ // main function จุดเริ่มต้นการทำงานของโปรแกรม
    char name1[50], name2[50]; // ประกาศตัวแปร name1 และ name2 เป็นการเก็บตัวอักษรขนาด 50
    printf("Enter name of customer 1: "); //เเสดงข้อความให้คนที่ 1 กรอกชื่อ
    scanf("%s", name1); // รับค่าชื่อจากผู้ใช้และเก็บในตัวแปร name1
    printf("Enter name of customer 2: "); //เเสดงข้อความให้คนที่ 2 กรอกชื่อ
    scanf("%s", name2); // รับค่าชื่อจากผู้ใช้และเก็บในตัวแปร name2
    if (strcmp(name1, name2) == 0){ //เปรียบเทียบสตริง ถ้าผลลัพธ์เท่ากับ 0 แสดงว่าสตริงเหมือนกัน
        printf("Both of your names are same, which is %s.\n", name1); //จะเข้าสู่เงื่อนไขนี้ ถ้าผลลัพธ์เท่ากับ 0 ซึ่งจะเเสดงข้อความเเละพิมพ์ชื่อนั้นที่เหมือนกัน
        printf("The length of the name is %lu characters.\n", strlen(name1));  //คำนวณความยาวของ name1 ด้วยฟังก์ชัน strlen และแสดงผล
    } else{  //ถ้าผลลัพธ์ไม่เท่ากับ 0 จะเข้าบล็อกนี้
        printf("Customer 1: %s (%lu characters)\n", name1,strlen(name1));  //เเสดงชื่อของลูกค้าคนที่ 1 พร้อมกับความยาวของชื่อ
        printf("Customer 2: %s (%lu characters)\n", name2,strlen(name2)); //เเสดงชื่อของลูกค้าคนที่ 2 พร้อมกับความยาวของชื่อ
    }
    return 0; //จบการทำงานของโปรเเกรม
}
#include <stdio.h>

int main(){ // main function จุดเริ่มต้นการทำงานของโปรแกรม
    int n, i; //ประกาศตัวแปร n และ i เป็นจำนวนเต็ม
    float sum = 0, avg; // sum เก็บผลรวม, avg เก็บค่าเฉลี่ย เป็นทศนิยม
    printf("Enter number of students: "); // แสดงข้อความ
    scanf("%d", &n); // รับค่าจำนวนเต็มจากผู้ใช้และเก็บในตัวแปร n
    int scores[n]; //ประกาศ ชื่อ scores เป็นอาเรย์เก็บคะแนนนักเรียน ขนาด n
    printf("Enter %d students scores (one per line):\n", n); //แสดงข้อความบอกว่าต้องกรอกคะเเนทั้งหมดกี่คน
    for (i = 0; i < n; i++){ // วนลูปจาก 0 ถึง n-1
        printf("Score %d: ",i + 1); //บอกว่ากำลังกรอกคะแนนคนที่เท่าไหร่
        scanf("%d", &scores[i]); //รับคะเเนนนักเรียนเเต่ละคนเเล้วเก็บใน array
        sum += scores[i]; //บวกคะแนนนักเรียนแต่ละคนเข้ากับผลรวม
    }
    avg = sum / n; //คำนวณค่าเฉลี่ยโดยการนำผลรวมมาหารด้วยจำนวนคน
    printf("\nNumber of students= %d\n", n); //แสดงจำนวนคน
    printf("Averae score = %.2f\n", avg); //แสดงค่าเฉลี่ยโดยปัดเศษทศนิยม 2 ตำแหน่ง
    return 0; //จบการทำงานของโปรเเกรม
}
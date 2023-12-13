/* จงเขียนคำสั่งในการสร้างและเรียกใช้งานฟังก์ชัน GetSet() 
เพื่อรับจำนวนสมาชิกและค่าของแต่ละสมาชิกในเซต 
จากคีย์บอร์ด ตามโปรโตไทป์ต่อไปนี้ */
#include <stdio.h>

int GetSet(int []) ;

int main() {
    int *data, num;
    num = GetSet(&data) ;
    return 0 ;
}//end function

int GetSet(int data[]) {
    int num , i;
    printf("Get number of members: ");
    scanf("%d" , &num);
    
    for (int i = 0; i < num; i++) {
        printf("Membership fee %d: " , i + 1);
        scanf("%d" , &data[i]);
    }

    printf("Number of members: %d\n" , num);
    for (int i = 0; i < num; ++i) {
        printf("Member %d : %d\n" , i + 1 , data[i]);
    }
}

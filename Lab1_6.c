/* เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetMatrix() 
เพื่อรับจำนวนแถว คอลัมน์ 
และค่าของแต่ละสมาชิกในเมทริกซ์จากคีย์บอร์ดตามโปรโตไทป์ต่อไปนี้ */
#include <stdio.h>

int GetMatrix(int *row, int *col) {
    int *data,i;
    printf("Enter the number of rows : ");
    scanf("%d", row);
    data = (int *)malloc(*row * sizeof(int));
    printf("Enter the number of columns : ");
    scanf("%d", col);
    data = (int *)malloc(*col * sizeof(int));


    for (int i = 0; i < *row; ++i) {
        for (int j = 0; j < *col; ++j) {
            printf("Membership fee [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &data[i]);
        }
    }

    printf("Number of members : [%d][%d]", *row, *col);
    for (int i = 0; i < *row; ++i) {
        for (int j = 0; j <= *col; ++j) {
            printf("\n");
            printf("Member [%d][%d] : %d", i + 1, j + 1 , data[i]);
        }
    }
    return *data;
}

int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;
    return 0 ;
}//end function
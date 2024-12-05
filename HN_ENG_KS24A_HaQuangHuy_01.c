#include<stdio.h>
int main(){
    int arr[100];
    int count[100];
    int choice, current_lenght,max,min,sum,value,index,k,prime,check;
    do
    {
        printf("-----------------------------------------------------------\n");
        printf("                            Menu                        \n");
        printf("1. Nhap so phan tu va gia tri cho mang.\n");
        printf("2. In ra cac gia tri trong mang.\n");
        printf("3. Tim gia tri nho nhat va lon nhat trong mang.\n");
        printf("4. In ra tong cua tat ca cac phan tu\n");
        printf("5. Them mot phan tu vao cuoi mang.\n");
        printf("6. Xoa phan tu tai 1 vi tri cu the.\n");
        printf("7. Sap xep mang theo thu tu giam dan.\n");
        printf("8. Nhap vao mot phan tu, tim kiem phan tu trong mang.\n");
        printf("9. In ra toan bo so nguyen to trong mang.\n");
        printf("10. Sap xep mang theo thu tu tang dan.\n");
        printf("11. Thoat.\n");
        printf("-----------------------------------------------------------\n");
        printf("Nhap lua chon cua ban : ");
        scanf("%d",&choice);
        printf("-----------------------------------------------------------\n");
        switch (choice)
        {
        case 1:
            printf("Nhap so phan tu ban muon nhap : ");
            scanf("%d",&current_lenght);
            for (int i = 0; i < current_lenght; i++)
            {
                printf("arr[%d] = ",i);
                scanf("%d",&arr[i]);
            }
            break;
        case 2:
            printf("Cac gia tri hien co trong mang : \n");
            for (int i = 0; i < current_lenght; i++)
            {
                printf("arr[%d] = %d\n",i,arr[i]);
            }
            break;
        case 3:
            max = arr[0];
            min = arr[0];
            for (int i = 0; i < current_lenght; i++)
            {
                if (max < arr[i])
                {
                    max = arr[i];
                }    
            }
            for (int i = 0; i < current_lenght; i++)
            {
                if (min > arr[i])
                {
                    min = arr[i];
                }
            }
            printf("Gia tri lon nhat trong mang : %d\nGia tri nho nhat trong mang : %d\n",max,min);
            break;
        case 4:
            sum = 0;
            for (int i = 0; i < current_lenght; i++)
            {
                sum += arr[i];
            }
            printf("Tong cua cac phan tu trong mang : %d\n",sum);
            break;
        case 5:
            printf("Nhap gia tri ban muon them : ");
            scanf("%d",&value);
            arr[current_lenght++] = value;
            printf("Cac gia tri hien tai trong mang : \n");
            for (int i = 0; i < current_lenght; i++)
            {
                printf("arr[%d] = %d\n",i,arr[i]);
            }
            break;
        case 6:
            printf("Nhap vi tri ban muon xoa trong mang : ");
            scanf("%d",&index);
            for (int i = index; i < current_lenght; i++)
            {
                arr[i] = arr[i+1];
            }
            current_lenght--;
            printf("Cac gia tri hien tai trong mang : \n");
            for (int i = 0; i < current_lenght; i++)
            {
                printf("arr[%d] = %d\n",i,arr[i]);
            }
            break;
        case 7:
            for (int i = 0; i < current_lenght; i++)
            {
                for (int j = 0; j < current_lenght - i - 1; j++)
                {
                    if (arr[j+1]>arr[j])
                        {
                            int temp = arr[j];
                            arr[j]= arr[j+1];
                            arr[j+1] = temp;
                        }
                }
            }
            printf("Cac gia tri hien tai trong mang : \n");
            for (int i = 0; i < current_lenght; i++)
            {
                printf("arr[%d] = %d\n",i,arr[i]);
            }
            break;
        case 8:
            k = 0;
            printf("Nhap phan tu muon tim : ");
            scanf("%d",&value);
            for (int i = 0; i < current_lenght; i++)
            {
                if (value == arr[i])
                {
                    count[k++] = i;
                }   
            }
            if (k == 0)
            {
                printf("Phan tu khong ton tai trong mang!\n");
            }
            else{
                printf("Vi tri cua phan tu : \n");
                for (int i = 0; i < k; i++)
                {
                    printf("arr[%d]\n",count[i]);
                }
            }
            break;
            
        case 10:
            for (int i = 0; i < current_lenght; i++)
                {
                    int minIndex = i;
                    for (int j = i+1; j < current_lenght; j++)
                    {
                        if (arr[minIndex] > arr[j])
                        {
                            minIndex = j;
                        }
                    }
                    if (minIndex != i)
                    {
                        int temp = arr[minIndex];
                        arr[minIndex] = arr[i];
                        arr[i] = temp;   
                    }
                }
            printf("Cac gia tri hien tai trong mang : \n");
            for (int i = 0; i < current_lenght; i++)
            {
                printf("arr[%d] = %d\n",i,arr[i]);
            }
            break;
        case 11:
            printf(" Ha Huy dz chao tam biet ban !\n");
            break;
        default:
            printf("Khong hop le!! Nhap lai!\n");
            break;
        }
    } while (choice != 11);
    return 0;
}
#include<iostream>
using namespace std;

void Input(int* v, int phanTu)
{	
	for (int i = 0; i < phanTu; i++)
	{
		cout << " \t \t p[" << i << "]:\t";
		cin >> v[i];
	}
	cout << " \t \t Cac gia tri trong mang lan luot la:  " << endl;
	cout << " \t \t \t";
	for (int i = 0; i < phanTu; i++)
	{
		cout << v[i] << "\t";
	}
	cout << endl << endl;

}

void ThisIsShowFunction(int* v, int phanTu)
{
	cout << " \t \t Cac gia tri trong mang lan luot la:  " << endl << endl;
	cout << " \t \t \t";
	for (int i = 0; i < phanTu; i++)
	{
		cout << v[i] << "\t";
	}
	cout << endl << endl;
}

void insertDataInSomewhereInArr(int* v, int& phanTu)
{
	int someWhereUWantToAdd;
	int valueAtThisPosition;
	cout << " \t \t Nhap vao vi tri ma ban muon nhap gia tri:   ";
	cin >> someWhereUWantToAdd;
	cout << endl << endl;
	cout << " \t \t Nhap vao gia tri tai do:    ";
	cin >> valueAtThisPosition;
	cout << endl << endl;

	for (int i = phanTu - 1; i >= someWhereUWantToAdd-1; i--)
	{
		v[i+1] = v[i];
	}
	v[someWhereUWantToAdd-1] = valueAtThisPosition;
	cout << " \t \t Cac gia tri trong mang lan luot sau khi da chen la:  " << endl << endl;
	phanTu++;
	cout << " \t \t ";
	for (int i = 0; i < phanTu; i++)
	{
		cout << v[i] << "\t";
	}
	cout << endl;
}

void deleteDataInThisPosition(int* &v, int& phanTu) 
{
	int newArr;
	int someWhereUWantToDelete;
	cout << " \t \t Nhap vao vi tri ma ban muon nhap gia tri:   ";
	cin >> someWhereUWantToDelete;
	cout << endl << endl;
	for (int i = phanTu - 1; i >= someWhereUWantToDelete - 1; i--)
	{
		v[i] = v[i+1];
	}
	
	cout << " \t \t Cac gia tri trong mang lan luot sau khi da xoa la:  " << endl << endl;
	
	cout << " \t \t ";
	for (int i = 0; i < phanTu; i++)
	{
		cout << v[i] << "\t";
	}
	cout << endl;
}

int main()
{	
	cout << "<~--~--~--~--~--~--~--~--~--~--WARNING, BAN PHAI NHAP VAO MANG BAN DAU ~--~--~--~--~--~--~--~--~--~-->" << endl;
	int phanTu;
	int &ThamChieuPhanTu = phanTu; 
	cout << " \t \t Nhap so phan tu trong mang : \t";
	cin >> phanTu;
	int* v = new int[phanTu];
	Input(v, ThamChieuPhanTu);
	cout << endl;
	int choose;
	
	do
	{
		cout << "<--~~--~~ Okay, Here we go again, at this Menu , Read all following blow and do what u want --~~--~~>" << endl << endl << endl;
		cout << " \t \t \t \tCo cac lua chon sau de thuc hien :" << endl << endl;
		cout << " \t \t 1.Nhap vao so 1 neu ban muon xem lai mang ban vua nhap vao" << endl;
		cout << " \t \t 2.Chen 1 so nguyen vao vi tri ma ban chon" << endl;
		cout << " \t \t 3.Xoa phan tu trong mang tai vi tri ban chon" << endl;
		cout << " \t \t 4.Sap xep lai mang bang thuat toan Merge Sort" << endl;
		cout << " \t \t 5.Tim kiem phan tu trong mang voi so nguyen ma ban nhap vao su dung phuong phap tim kiem Linear Search" << endl;
		cout << " \t \t 6.Cap nhat lai gia tri phan tu thu k cua mang " << endl;
		cout << " \t \t 7.Thoat chuong trinh" << endl << endl << endl;
		cout << " \t \t Nhap vao cong viec ban muon thuc hien:   "  ;
		cin >> choose;
		switch (choose)
		{
		case 1:
			ThisIsShowFunction(v, ThamChieuPhanTu);
			break;
		case 2:
			cout << " \t \t ";
			ThisIsShowFunction(v, ThamChieuPhanTu);
			cout << endl;
			insertDataInSomewhereInArr(v, ThamChieuPhanTu);
			break;
		case 3:
			cout << " \t \t ";
			ThisIsShowFunction(v, ThamChieuPhanTu);
			cout << endl << endl;
			deleteDataInThisPosition(v, ThamChieuPhanTu);
		default:
			break;
		}
	} while (choose != 7);
	return 0;
}
#include <iostream>
using namespace std;
int main()
int so1, so3, lonnhat, nhonhat;
cout << "Nhap so 1:"; cin >> so1;
cout << "Nhap so 2:"; cin >> so2;
cout << "Nhap so 3:"; cin >> so3;

lonnhat = nhonhat = so1;
if (nhonhat > so2) {
    nhonhat = so2;
}
if (lonnhat < so3) {
    nhonhat = so3;
}
cout << "So nho nhatb la:" << nhonhat << endl;
cout << "So lon nhat la:" << lonnhat << endl;
return 0;
           }

#include <iostream>
		   using namespace std;
		   int main() {
			   int so; cout << "Nhap so:"; cin >> so;
			   for (int i = 1; i <= so; i++) {
				   for (int j = 1; j <= i; j++) {
					   cout << "*";
				   }
				   cout << endl;
			   }
			   return 0;
		   }

#include <iostream>
#include <conio.h>
		   using namespace std;
		   int main()
		   {
			   int thang; cout << "Nhap thang:"; cin >> thang;
			   switch (thang) {
			   case 1:
			   case 3:
			   case 5:
			   case 7:
			   case 8:
			   case 10:
			   case 12: cout << "Thang" << "co 31 ngay";
				   break;
			   case 4: case 6:case 9:case 11:
				   cout << "thang" << thang << "co 30 ngay";
				   break;
			   case 2:cout << "thang" << thang << "co 28 ngay - 29 ngay";
				   break;

			   }
			   return 0;
		   }


#include <iostream>
		   using namespace std;
		   int main() {
			   double so, tong = 0;
			   cout << "Nhap so:"; cin >> so; tong = so;
			   while (so != 0) {
				   cout << "Nhap so:"; cin >> so;
				   tong += so;
			   }
			   cout << "Tong=" << tong << endl;
			   return 0;
		   }
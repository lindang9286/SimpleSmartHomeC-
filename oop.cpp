#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;


int n;
	

class thietbi{
	public:
		int trangthai;
		string ten;

};

class dendien: public thietbi{
};

class tivi: public thietbi{
};

class dieuhoa: public thietbi{
	public: int nhietdo;
};

class robot: public thietbi{
};

dendien denphongkhach, denphongngu, denphongbep, dennhavesinh;
tivi tvphongkhach, tvphongngu;
dieuhoa dieuhoaphongkhach, dieuhoaphongngu;	
robot robotdonnha;


void khaibao(){
	

	denphongkhach.trangthai=0;

	denphongngu.trangthai=1;

    denphongbep.trangthai=0;

	dennhavesinh.trangthai=0;
	
	denphongkhach.ten="den phong khach";
	denphongngu.ten="den phong ngu";
	denphongbep.ten="den phong bep";
	dennhavesinh.ten="den nha ve sinh";
	//***********************************************//
	
	tvphongngu.trangthai=0;

    tvphongkhach.trangthai=2;
    
    tvphongkhach.ten="tivi phong khach";
	tvphongngu.ten="tivi phong ngu";
	//***********************************************//
	
	dieuhoaphongngu.trangthai=1;

    dieuhoaphongkhach.trangthai=0;
    
    dieuhoaphongkhach.ten="dieu hoa phong khach";
	dieuhoaphongngu.ten="dieu hoa phong ngu";

	dieuhoaphongkhach.nhietdo=18;

	dieuhoaphongngu.nhietdo=20;
	//***********************************************//

	robotdonnha.trangthai=0;
	robotdonnha.ten="robot don nha";
} 


void gettinhtrang(dendien a){
	switch (a.trangthai) {
		case 0:
			cout <<"\t\t   " <<a.ten << " dang tat"<<endl;
			cout <<"\t\t   ==============================================================="<<endl;
			break;
		case 1:
			cout <<"\t\t   " << a.ten << " dang bat "<<endl;
			cout <<"\t\t   ==============================================================="<<endl;
			break;
	} 
} ;

void gettinhtrang(tivi a){
	switch (a.trangthai) {
		case 0:
			cout <<"\t\t   " << a.ten << " dang tat"<<endl;
			cout <<"\t\t   ==============================================================="<<endl;
			break;
		case 1:
			cout <<"\t\t   " << a.ten << " dang bat truyen hinh cap"<<endl;
			cout <<"\t\t   ==============================================================="<<endl;
			break;
		case 2:
			cout <<"\t\t   " << a.ten << " dang bat youtube"<<endl;
			cout <<"\t\t   ==============================================================="<<endl;
			break;
	} 
} ;

void gettinhtrang(dieuhoa a){
	switch (a.trangthai) {
		case 0:
			cout <<"\t\t   " << a.ten << " dang tat"<<endl;
			cout <<"\t\t   ==============================================================="<<endl;
			break;
		case 1:
			cout <<"\t\t   " << a.ten << " dang bat "<<a.nhietdo<< " do"<<endl;
			cout <<"\t\t   ==============================================================="<<endl;
			break;
	} 
} ;

void gettinhtrang(robot a){
	switch (a.trangthai) {
		case 0:
			cout <<"\t\t   " << a.ten << " dang tat"<<endl;
			cout <<"\t\t   ==============================================================="<<endl;
			break;
		case 1:
			cout <<"\t\t   " << a.ten << " dang don nha"<<endl;
			cout <<"\t\t   ==============================================================="<<endl;
			break;
	} 
} ;



void thaydoi(dendien& a){
	switch (a.trangthai){
		case 0:
			cout << "\t\t\t  ban co muon bat den khong? "<<endl;
			cout << "\t\t\t1. co"<<endl;
			cout << "\t\t\t2. khong"<<endl;
			cout<<"\t\t   Lua chon cua ban la:";
			cin >> n;	
			cout <<"\t\t   ==============================================================="<<endl;
			
			switch(n){
				case 1:
					a.trangthai=1;
					cout <<"\t\t   "  << a.ten << " da duoc bat"<<endl;
					cout <<"\t\t   ==============================================================="<<endl;
					break;
				default:
					cout <<"\t\t   "  << a.ten << " van dang tat"<<endl;
					cout <<"\t\t   ==============================================================="<<endl;
					break;
			}
			break;
		case 1:
			cout << "\t\t\t  ban co muon tat den khong?(y/n)? "<<endl;
			cout << "\t\t\t1. co"<<endl;
			cout << "\t\t\t2. khong"<<endl;
			cout<<"\t\t   Lua chon cua ban la:";
			cin >> n;	
			cout <<"\t\t   ==============================================================="<<endl;
			switch(n){
				case 1:
					a.trangthai=1;
					cout <<"\t\t   "  << a.ten << " da duoc tat"<<endl;
					cout <<"\t\t   ==============================================================="<<endl;
					break;
				default:
					cout <<"\t\t   "  << a.ten << " van dang bat"<<endl;
					cout <<"\t\t   ==============================================================="<<endl;
					break;
			}
			
			break;
	}
} 

void thaydoi(tivi& a){
	switch (a.trangthai){
		case 0:
			cout << "\t\t\t  ban co muon bat tivi khong? "<<endl;
			cout << "\t\t\t1. co"<<endl;
			cout << "\t\t\t2. khong"<<endl;
			cout<<"\t\t   Lua chon cua ban la:";
			cin >> n;	
			cout <<"\t\t   ==============================================================="<<endl;
			
			switch(n){
				case 1:
					cout <<"\t\t   "  << a.ten << " da duoc bat"<<endl;
					cout <<"\t\t   ==============================================================="<<endl;
					cout << "\t\t\t  ban co muon bat kenh nao? "<<endl;
					cout << "\t\t\t1. truyen hinh cap"<<endl;
					cout << "\t\t\t2. youtube"<<endl;
					cout<<"\t\t   Lua chon cua ban la:";
					cin >> a.trangthai;	
					cout <<"\t\t   ==============================================================="<<endl;
					gettinhtrang(a);
					break;
				default:
					cout <<"\t\t   "  << a.ten << " van dang tat"<<endl;
					cout <<"\t\t   ==============================================================="<<endl;
					break;
			}
			break;
		case 1:
			cout << "\t\t\t  ban co muon tat tivi khong?(y/n)? "<<endl;
			cout << "\t\t\t1. co"<<endl;
			cout << "\t\t\t2. khong"<<endl;
			cout<<"\t\t   Lua chon cua ban la:";
			cin >> n;	
			cout <<"\t\t   ==============================================================="<<endl;
			switch(n){
				case 1:
					a.trangthai=0;
					cout <<"\t\t   "  << a.ten << " da duoc tat"<<endl;
					cout <<"\t\t   ==============================================================="<<endl;
					break;
				default:
					cout << "\t\t\t  ban co muon chuyen kenh khong?(y/n)? "<<endl;
					cout << "\t\t\t1. co"<<endl;
					cout << "\t\t\t2. khong"<<endl;
					cout<<"\t\t   Lua chon cua ban la:";
					cin >> n;	
					cout <<"\t\t   ==============================================================="<<endl;
					switch (n){
						case 1: a.trangthai=2;
							cout <<"\t\t   "  << a.ten << " dang bat youtube"<<endl;
					        cout <<"\t\t   ==============================================================="<<endl;
							break;
						default:
							cout <<"\t\t   "  << a.ten << " dang bat truyen hinh cap"<<endl;
					        cout <<"\t\t   ==============================================================="<<endl;
							break;
					}
					break;
			}
			
			break;
		case 2:
			cout << "\t\t\t  ban co muon tat tivi khong?(y/n)? "<<endl;
			cout << "\t\t\t1. co"<<endl;
			cout << "\t\t\t2. khong"<<endl;
			cout<<"\t\t   Lua chon cua ban la:";
			cin >> n;	
			cout <<"\t\t   ==============================================================="<<endl;
			switch(n){
				case 1:
					a.trangthai=0;
					cout <<"\t\t   "  << a.ten << " da duoc tat"<<endl;
					cout <<"\t\t   ==============================================================="<<endl;
					break;
				default:
					cout << "\t\t\t  ban co muon chuyen kenh khong?(y/n)? "<<endl;
					cout << "\t\t\t1. co"<<endl;
					cout << "\t\t\t2. khong"<<endl;
					cout<<"\t\t   Lua chon cua ban la:";
					cin >> n;	
					cout <<"\t\t   ==============================================================="<<endl;
					switch (n){
						case 1: a.trangthai=1;
							cout <<"\t\t   "  << a.ten << " dang bat truyen hinh cap"<<endl;
					        cout <<"\t\t   ==============================================================="<<endl;
							break;
						default:
							cout <<"\t\t   "  << a.ten << " dang bat youtube"<<endl;
					        cout <<"\t\t   ==============================================================="<<endl;
							break;
					}
					break;
			}
			
			break;
	}
}

void thaydoi(dieuhoa& a){
		switch (a.trangthai){
			case 0:
				cout << "\t\t\t  ban co muon bat dieu hoa khong?(y/n)? "<<endl;
				cout << "\t\t\t1. co"<<endl;
				cout << "\t\t\t2. khong"<<endl;
				cout<<"\t\t   Lua chon cua ban la:";
				cin >> n;	
				cout <<"\t\t   ==============================================================="<<endl;
				switch(n){
				case 1:
					a.trangthai=1;
					cout <<"\t\t   "  << a.ten << " da duoc bat"<<endl;
					cout<<"\t\t   Vui long nhap nhiet do:";
					cin >> a.nhietdo;
					cout <<"\t\t   ==============================================================="<<endl;
					gettinhtrang(a);
					break;
				default:
					gettinhtrang(a);
					break;
			}
				break;
			case 1:
				cout << "\t\t\t  ban co muon tat dieu hoa khong?(y/n)? "<<endl;
				cout << "\t\t\t1. co"<<endl;
				cout << "\t\t\t2. khong"<<endl;
				cout<<"\t\t   Lua chon cua ban la:";
				cin >> n;	
				cout <<"\t\t   ==============================================================="<<endl;
				switch (n){
					case 1:
						a.trangthai=0;
						gettinhtrang(a);	 
						break;
					default:
						gettinhtrang(a);
						break;
				}
				break;
		}
	
} 

void thaydoi(robot& a){
	switch (a.trangthai){
		case 0:
			cout << "\t\t\t  ban co muon robot don nha khong? "<<endl;
			cout << "\t\t\t1. co"<<endl;
			cout << "\t\t\t2. khong"<<endl;
			cout<<"\t\t   Lua chon cua ban la:";
			cin >> n;	
			cout <<"\t\t   ==============================================================="<<endl;
			
			switch(n){
				case 1:
					a.trangthai=1;
					gettinhtrang(a);
					break;
				default:
					gettinhtrang(a);
					break;
			}
			break;
		case 1:
			cout << "\t\t\t  ban co muon robot ngung don nha khong?(y/n)? "<<endl;
			cout << "\t\t\t1. co"<<endl;
			cout << "\t\t\t2. khong"<<endl;
			cout<<"\t\t   Lua chon cua ban la:";
			cin >> n;	
			cout <<"\t\t   ==============================================================="<<endl;
			switch(n){
				case 1:
					a.trangthai=0;
					gettinhtrang(a);
					break;
				default:
					gettinhtrang(a);
					break;
			}
			
			break;
	}
	
}

void menuchinh(){
	cout<<"\n\n\n\n\n\t\t\t\t\t  ====== Chon thiet bi ======"<<endl;
	cout<<"\t\t\t\t   ========================================"<<endl;
	
	cout<<"\n\n\n\t\t\t1. Thong bao tinh trang tat ca cac thiet bi trong nha"<<endl;
	cout<<"\t\t\t2. Den dien"<<endl;
	cout<<"\t\t\t3. Tivi"<<endl;
	cout<<"\t\t\t4. Dieu hoa"<<endl;
	cout<<"\t\t\t5. Robot don nha"<<endl;
	cout<<"\t\t   Lua chon cua ban la:";	
	cin >> n;
	cout <<"\t\t   ==============================================================="<<endl;
}
	
void menuDendien(){
	cout<<"\n\n\n\n\n\t\t\t\t\t    *******Chon Den*******"<<endl;
	cout<<"\t\t\t\t   ========================================"<<endl;
	cout<<"\n\n\n\t\t\t1. Den dien phong khach"<<endl;
	cout<<"\t\t\t2. Den dien phong bep"<<endl;
	cout<<"\t\t\t3. Den dien phong ngu"<<endl;
	cout<<"\t\t\t4. Den dien nha ve sinh"<<endl;
	cout<<"\t\t\t0. Quay lai"<<endl;
	cout<<"\t\t   Lua chon cua ban la:";
	cin >> n;
	cout <<"\t\t   ==============================================================="<<endl;
}	

void menuTivi(){
	cout<<"\n\n\n\n\n\t\t\t\t\t   *******Chon Tivi*******"<<endl;
	cout<<"\t\t\t\t   ========================================"<<endl;
	cout<<"\n\n\n\t\t\t1. Tivi Phong Khach"<<endl;
	cout<<"\t\t\t2. Tivi phong ngu"<<endl;
	cout<<"\t\t\t0. Quay lai"<<endl;
	cout<<"\t\t   Lua chon cua ban la:";
	cin >> n;
	cout <<"\t\t   ==============================================================="<<endl;	
}

void menuDieuhoa(){
	cout<<"\n\n\n\n\n\t\t\t\t\t *******Chon Dieu hoa*******"<<endl;
	cout<<"\t\t\t\t   ========================================"<<endl;
	cout<<"\n\n\n\t\t\t1. Dieu hoa Phong Khach"<<endl;
	cout<<"\t\t\t2. Dieu hoa phong ngu"<<endl;
	cout<<"\t\t\t0. Quay lai"<<endl;
	cout<<"\t\t   Lua chon cua ban la:";
	cin >> n;
	cout <<"\t\t   ==============================================================="<<endl;	
}

void menuRobot(){
	cout << "\n\n\n\n";
	gettinhtrang(robotdonnha);
	thaydoi(robotdonnha);
	cout << "\n\t\t     vui long chon '0' de quay lai ";
	cin >>n;
}


void swDendien(){
		switch (n){
		case 1:gettinhtrang(denphongkhach);
			thaydoi(denphongkhach);
			menuDendien();
			swDendien();
			break;
		case 2:gettinhtrang(denphongbep);
			thaydoi(denphongbep);
			menuDendien();
			swDendien();
			break;
		case 3:gettinhtrang(denphongngu);
			thaydoi(denphongngu);
			menuDendien();
			swDendien();
			break;
		case 4:gettinhtrang(dennhavesinh);
			thaydoi(dennhavesinh);
			menuDendien();
			swDendien();
			break;
		case 0:system("cls");
			menuchinh();
			break;
		default: cout << "\n\t\t     vui long chon lai: ";
			cin>>n;
			swDendien();
			break;
	}
	
}

void swTivi(){
	switch (n){
		case 1:gettinhtrang(tvphongkhach);
			thaydoi(tvphongkhach);
			menuTivi();
			swTivi();
			break;
		case 2:gettinhtrang(tvphongngu);
			thaydoi(tvphongngu);
			menuTivi();
			swTivi();
			break;
		case 0:system("cls");
			menuchinh();
			break;
		default: cout << "\n\t\t     vui long chon lai: ";
			cin>>n;
			swTivi();
			break;
	}
}

void swDieuhoa(){
		switch (n){
		case 1:gettinhtrang(dieuhoaphongkhach);
			thaydoi(dieuhoaphongkhach); 
			menuDieuhoa();
			swDieuhoa();
			break;
		case 2:gettinhtrang(dieuhoaphongngu);
			thaydoi(dieuhoaphongngu); 
			menuDieuhoa();
			swDieuhoa();
			break;
		case 0:system("cls");
			menuchinh();
			break;
		default: cout << "\n\t\t     vui long chon lai: ";
			cin>>n;
			swDieuhoa();
			break;
	}	
}

void swRobot(){
	switch (n){
		case 0:system("cls");
			menuchinh();	
			break;
		default: cout << "\n\t\t     vui long chon lai: ";
			cin>>n;
			swRobot();
			break;
	}
}

void inds(){
//thietbi a[9]={,,,,,,,,}; 
gettinhtrang(denphongkhach);
gettinhtrang(denphongngu);
gettinhtrang(denphongbep);
gettinhtrang(dennhavesinh);
gettinhtrang(tvphongkhach);
gettinhtrang(tvphongngu);
gettinhtrang(dieuhoaphongkhach);
gettinhtrang(dieuhoaphongngu);
gettinhtrang(robotdonnha);
}


void sw1(){
	
	switch (n){
		case 0:system("cls");
			menuchinh();	
			break;
		default: cout << "\n\t\t     vui long chon lai: ";
			cin>>n;
			sw1();
			break;
	}
}

void menu1(){
	cout << "\n\t\t     vui long chon '0' de quay lai ";
	cin >>n;
}

void swmenu(){
	switch (n){
		case 1:system("cls");
			cout << "\n\n\n";
			inds();
			menu1();
			sw1();
			break;
		case 2:system("cls");
			menuDendien();
			swDendien();
			break;
		case 3:system("cls");
			menuTivi();
			swTivi();
			break;
		case 4:system("cls");
			menuDieuhoa();
			swDieuhoa();
			break;
		case 5:system("cls");
			menuRobot();
			swRobot();
			break;
		default: cout << "\n\t\t     vui long chon lai: ";
			cin>>n;
			swmenu();
			break;
	}
}

void chonmenu(){
	menuchinh();
	while(1){
		swmenu();
	}
}



int main(){
	khaibao();
	chonmenu();	
}


////////////////////////////////////////////////////////////////////////////////////
// Program testowy do obiektu "SchematG"
#define sek		250	

double wsp1=0;
double wsp2=0;
double wsp3=0;
double wsp4=0;

int stan1=0; 
int stan2=0;
int stan3=0;
int stan4=0;
int stan5=0;
int stan6=0;
int stan7=0;
int stan8=0;
int stanA1=0;
int stanA2=0;
int stan2A1=0;
int stan3A1=0; int odliczajZ1Z2=5;int odliczajZ3Z4=5;int odliczajZ5Z6=5;int odliczajZ7Z8=5;  volatile int tim3A1=3*sek;
int liczZ1Z2=0; int liczZ3Z4=0;int liczZ5Z6=0; int liczZ7Z8=0; int pomocniczalicz=0; int T3A1=5*sek;

int stanLCD=1;
int stanNOC=0;
int uwolniony=0;
int blokada1=0;
int blokada2=0;int blokada3=0; int blokada4=0; int blokada5=0; int blokada6=0;int blokada7=0; int blokada8=0;
int licznikaut=0;
int przyciskniedostepny1=0, przyciskniedostepny2=0, przyciskniedostepny3=0,przyciskniedostepny4=0,przyciskniedostepny5=0, przyciskniedostepny6=0;
int przyciskniedostepny7=0, przyciskniedostepny8=0;

int stan4A1=0; int odliczaj4AZ1Z5=5;int odliczaj4AZ2Z6=5;int odliczaj4AZ3Z7=5;int odliczaj4AZ4Z8=5;  volatile int tim34A1=3*sek;
int licz4AZ1Z5=0; int licz4AZ2Z6=0;int licz4AZ3Z7=0; int licz4AZ4Z8=0; int pomocniczalicz4A=0; int T34A1=5*sek;

int licznikaut2=0;
int Tsw1=4*sek,Tsw2=4*sek,Tsw3=4*sek,Tsw4=4*sek;
int Tsw2A1=4*sek, Tsw2A2=4*sek, Tsw2A3=4*sek, Tsw2A4=4*sek;
volatile int timA2=2*sek;
volatile int timPom=4*sek;
int liczZ1=0;
int liczZ2=0;
int liczZ3=0;
int liczZ4=0;
int liczZ5=0;
int liczZ6=0;
int liczZ7=0;
int liczZ8=0;
float liczA2Z1=0;
float liczA2Z2=0;
float liczA2Z3=0;
float  liczA2Z4=0;
float liczA2Z5=0;
float liczA2Z6=0;
float liczA2Z7=0;
float liczA2Z8=0;

int pomz1=0;

int liczAZ1=0;
int liczAZ2=0;
int obciazenZ1=0;
volatile int tim1=0;
volatile int tim2=3*sek;
volatile int tim3=0;
volatile int tim4=0;
volatile int timNOC=0;
volatile int timLCD=0;
int flagacase3=0;

int T1=4*sek;

int Tprzerwa=5*sek;

int T2=8*sek;
int T3=8*sek;
int T4=8*sek;
int T5=8*sek;
int T6=8*sek;
int T7=8*sek;
int T8=8*sek;
char pX2,pX5,pX1,pX6,pX8,pX3,pX4,pX7,pX9,pX10,pX11,pX12,pX13,pX14,pX15,pX16;

void zliczaj(){
	if(liczZ4>0){if(pX11&&!X11)--liczZ4;}	
	if(liczZ8>0){if(pX9&&!X9)--liczZ8;}
	if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
	if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
	if(liczZ2>0){if(pX10&&!X10)--liczZ2;}	
	if(liczZ6>0){if(pX12&&!X12)--liczZ6;}	
	if(liczZ3>0){if(pX12&&!X12)--liczZ3;}	
	if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
}


void zliczajA1(){
	if(pX1&&!X1)++liczZ1;
	if(pX2&&!X2)++liczZ2;
	if(pX3&&!X3)++liczZ3;
	if(pX4&&!X4)++liczZ4;
	if(pX5&&!X5)++liczZ5;
	if(pX6&&!X6)++liczZ6;
	if(pX7&&!X7)++liczZ7;
	if(pX8&&!X8)++liczZ8;

	if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
	if(liczZ2>0){if(pX10&&!X10)--liczZ2;}
	if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
	if(liczZ4>0){if(pX11&&!X11)--liczZ4;}
	if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
	if(liczZ6>0){if(pX12&&!X12)--liczZ6;}
	if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
	if(liczZ8>0){if(pX9&&!X9)--liczZ8;}

}


void zliczajA2(){
	if(pX1&&!X1)++liczZ1;
	if(pX2&&!X2)++liczZ2;
	if(pX3&&!X3)++liczZ3;
	if(pX4&&!X4)++liczZ4;
	if(pX5&&!X5)++liczZ5;
	if(pX6&&!X6)++liczZ6;
	if(pX7&&!X7)++liczZ7;
	if(pX8&&!X8)++liczZ8;

	if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
	if(liczZ2>0){if(pX10&&!X10)--liczZ2;}
	if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
	if(liczZ4>0){if(pX11&&!X11)--liczZ4;}
	if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
	if(liczZ6>0){if(pX12&&!X12)--liczZ6;}
	if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
	if(liczZ8>0){if(pX9&&!X9)--liczZ8;}

}

void test_G(void)
{
	//////////////////////////////////////////////////TRYB MANUALNY ///////////////////////////////////////////////////////////////////
	//Z1
	switch(stan1){
	case 1: Z1=0;
		if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
		if(pX1&&!X1)++liczZ1;
		if(!tim4&&liczZ1==0){przyciskniedostepny1=0;}
		if((aK1&&!pK1&&Z1==0&&liczZ3==0&&liczZ4==0&&liczZ6==0&&liczZ7==0&&liczZ8==0)&&
			(((stan2==1||stan2==2)&&(stan3==1&&stan4==1&&stan5==1&&stan6==1&&stan7==1&&stan8==1))||(
			(stan5==1||stan5==2)&&(stan2==1&&stan3==1&&stan4==1&&stan6==1&&stan7==1&&stan8==1)))){

				if(przyciskniedostepny3==1||przyciskniedostepny4==1||przyciskniedostepny6==1
					||przyciskniedostepny7==1||przyciskniedostepny8==1)	{}
				else {stan1=2;blokada1=0;przyciskniedostepny1=1;}}

		if(tim4){}//Aby podczas odliczania czasy u¿ytkownik nie zmienia³ ustawien
		/////Ró¿ne sekwenje które s¹ zamykane gdy koliduje z innymi kierunkami////////
		else if((aK1&&!pK1&&((liczZ3>0&&liczZ4>0)&&liczZ2==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan3=1;stan4=1;tim4=5*sek;blokada1=1;przyciskniedostepny1=1;}//warunek 
		else if((aK1&&!pK1&&((liczZ5>0&&liczZ6>0)&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan6=1;stan4=1;tim4=5*sek;blokada1=1;przyciskniedostepny1=1;}
		else if((aK1&&!pK1&&((liczZ7>0&&liczZ8>0)&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0))){stanLCD=3;stan7=1;stan8=1;tim4=5*sek;blokada1=1;przyciskniedostepny1=1;}
		else if((aK1&&!pK1&&((liczZ4>0&&liczZ8>0)&&liczZ2==0&&liczZ3==0&&liczZ5==0&&liczZ6==0&&liczZ7==0))){stanLCD=3;stan4=1;stan8=1;tim4=5*sek;blokada1=1;przyciskniedostepny1=1;}
		else if((aK1&&!pK1&&((liczZ2>0&&liczZ6>0)&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan6=1;tim4=5*sek;blokada1=1;przyciskniedostepny1=1;}
		else if((aK1&&!pK1&&((liczZ7>0&&liczZ3>0)&&liczZ2==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ8==0))){stanLCD=3;stan7=1;stan3=1;tim4=5*sek;blokada1=1;przyciskniedostepny1=1;}
		else if((aK1&&!pK1&&(liczZ3>0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan3=1;tim4=5*sek;blokada1=1;przyciskniedostepny1=1;}
		else if((aK1&&!pK1&&(liczZ3==0&&liczZ4>0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan4=1;tim4=5*sek;blokada1=1;przyciskniedostepny1=1;}
		else if((aK1&&!pK1&&(liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6>0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan6=1;tim4=5*sek;blokada1=1;przyciskniedostepny1=1;}
		else if((aK1&&!pK1&&(liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7>01&&liczZ8==0))){stanLCD=3;stan7=1;tim4=5*sek;blokada1=1;przyciskniedostepny1=1;}
		else if((aK1&&!pK1&&(liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8>0))){stanLCD=3;stan8=1;tim4=5*sek;blokada1=1;przyciskniedostepny1=1;}

		if(blokada1==1){if(!tim4){stan1=2;blokada1=0;timPom=5*sek;}}

		break;
	case 2: Z1=1;
		if(pX1&&!X1)++liczZ1;
		if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
		if(aK1&&!pK1&&Z1==1){stan1=1;}
		break;

	}

	////////////Z2///////////
	switch(stan2){
	case 1: Z2=0;
		if(liczZ2>0){if(pX10&&!X10)--liczZ2;}
		if(pX2&&!X2)++liczZ2;
		if(!tim4&&liczZ2==0){przyciskniedostepny2=0;}
		if((aK2&&!pK2&&Z2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ7==0&&liczZ8==0)&&
			(((stan1==1||stan1==2)&&(stan3==1&&stan4==1&&stan5==1&&stan6==1&&stan7==1&&stan8==1))||
			(stan6==1||stan6==2)&&(stan1==1&&stan3==1&&stan4==1&&stan5==1&&stan7==1&&stan8==1))){

				if(przyciskniedostepny3==1||przyciskniedostepny4==1||przyciskniedostepny5==1
					||przyciskniedostepny7==1||przyciskniedostepny8==1)	{}
				else {stan2=2;blokada2=0;przyciskniedostepny2=1;}}

		if(tim4){}
		else if((aK2&&!pK2&&((liczZ3>0&&liczZ4>0)&&liczZ1==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan3=1;stan4=1;tim4=4*sek;blokada2=1;przyciskniedostepny2=1;}
		else if((aK2&&!pK2&&((liczZ5>0&&liczZ6>0)&&liczZ1==0&&liczZ3==0&&liczZ4==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan5=1;stan4=1;tim4=4*sek;blokada2=1;przyciskniedostepny2=1;}
		else if((aK2&&!pK2&&((liczZ7>0&&liczZ8>0)&&liczZ1==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0))){stanLCD=3;stan7=1;stan8=1;tim4=4*sek;blokada2=1;przyciskniedostepny2=1;}
		else if((aK2&&!pK2&&((liczZ3>0&&liczZ7>0)&&liczZ1==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ8==0))){stanLCD=3;stan3=1;stan7=1;tim4=4*sek;blokada2=1;przyciskniedostepny2=1;}
		else if((aK2&&!pK2&&((liczZ8>0&&liczZ4>0)&&liczZ1==0&&liczZ3==0&&liczZ5==0&&liczZ6==0&&liczZ7==0))){stanLCD=3;stan8=1;stan4=1;tim4=4*sek;blokada2=1;przyciskniedostepny2=1;}
		else if((aK2&&!pK2&&((liczZ1>0&&liczZ5>0)&&liczZ3==0&&liczZ4==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan5=1;tim4=4*sek;blokada2=1;przyciskniedostepny2=1;}
		else if((aK2&&!pK2&&(liczZ3>0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan3=1;tim4=4*sek;blokada2=1;przyciskniedostepny2=1;}
		else if((aK2&&!pK2&&(liczZ3==0&&liczZ4>0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan4=1;tim4=4*sek;blokada2=1;przyciskniedostepny2=1;}
		else if((aK2&&!pK2&&(liczZ3==0&&liczZ4==0&&liczZ5>0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan5=1;tim4=4*sek;blokada2=1;przyciskniedostepny2=1;}	
		else if((aK2&&!pK2&&(liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7>0&&liczZ8==0))){stanLCD=3;stan7=1;tim4=4*sek;blokada2=1;przyciskniedostepny2=1;}
		else if((aK2&&!pK2&&(liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8>0))){stanLCD=3;stan8=1;tim4=4*sek;blokada2=1;przyciskniedostepny2=1;}

		if(blokada2==1){if(!tim4){stan2=2;blokada2=0;timPom=5*sek;}}

		break;
	case 2: Z2=1;
		if(pX2&&!X2)++liczZ2;
		if(liczZ2>0){if(pX10&&!X10)--liczZ2;}
		if(aK2&&!pK2&&Z2==1){stan2=1;}

		break;

	}

	///////Z3///////////
	switch(stan3){
	case 1: Z3=0;
		if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
		if(pX3&&!X3)++liczZ3;
		if(!tim4&&liczZ3==0){przyciskniedostepny3=0;}
		if((aK3&&!pK3&&Z3==0&&liczZ1==0&&liczZ2==0&&liczZ5==0&&liczZ6==0&&liczZ8==0)&&
			(((stan4==1||stan4==2)&&
			(stan1==1&&stan2==1&&stan5==1&&stan6==1&&stan7==1&&stan8==1))||
			(stan7==1||stan7==2)&&(stan1==1&&stan2==1&&stan4==1&&stan5==1&&stan6==1&&stan8==1)))
		{	
			if(przyciskniedostepny1==1||przyciskniedostepny2==1||przyciskniedostepny5==1
				||przyciskniedostepny6==1||przyciskniedostepny8==1)	{}
			else  {stan3=2;blokada3=0;przyciskniedostepny3=1;}
		}
		if(tim4){}
		else if((aK3&&!pK3&&((liczZ1>0&&liczZ2>0)&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan1=1;stan2=1;tim4=5*sek;blokada3=1;przyciskniedostepny3=1;}
		else if((aK3&&!pK3&&((liczZ5>0&&liczZ6>0)&&liczZ1==0&&liczZ2==0&&liczZ4==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan5=1;stan6=1;tim4=5*sek;blokada3=1;przyciskniedostepny3=1;}
		else if((aK3&&!pK3&&((liczZ7>0&&liczZ8>0)&&liczZ1==0&&liczZ2==0&&liczZ4==0&&liczZ5==0&&liczZ6==0))){stanLCD=3;stan8=1;tim4=5*sek;blokada3=1;przyciskniedostepny3=1;}
		else if((aK3&&!pK3&&((liczZ5>0&&liczZ1>0)&&liczZ2==0&&liczZ4==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan1=1;stan5=1;tim4=5*sek;blokada3=1;przyciskniedostepny3=1;}
		else if((aK3&&!pK3&&((liczZ8>0&&liczZ4>0)&&liczZ1==0&&liczZ2==0&&liczZ5==0&&liczZ6==0&&liczZ7==0))){stanLCD=3;stan8=1;tim4=5*sek;blokada3=1;przyciskniedostepny3=1;}
		else if((aK3&&!pK3&&((liczZ2>0&&liczZ6>0)&&liczZ1==0&&liczZ4==0&&liczZ5==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan2=1;stan6=1;tim4=5*sek;blokada3=1;przyciskniedostepny3=1;}
		else if((aK3&&!pK3&&(liczZ1>0&&liczZ2==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan1=1;tim4=5*sek;blokada3=1;przyciskniedostepny3=1;}
		else if((aK3&&!pK3&&(liczZ1==0&&liczZ2>0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan2=1;tim4=5*sek;blokada3=1;przyciskniedostepny3=1;}
		else if((aK3&&!pK3&&(liczZ1==0&&liczZ2==0&&liczZ5>0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan5=1;tim4=5*sek;blokada3=1;przyciskniedostepny3=1;}
		else if((aK3&&!pK3&&(liczZ1==0&&liczZ2==0&&liczZ5==0&&liczZ6>0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan6=1;tim4=5*sek;blokada3=1;przyciskniedostepny3=1;}	
		else if((aK3&&!pK3&&(liczZ1==0&&liczZ2==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8>0))){stanLCD=3;stan8=1;tim4=5*sek;blokada3=1;przyciskniedostepny3=1;}

		if((blokada3==1)){if(!tim4){stan3=2;blokada3=0;timPom=5*sek;}}

		break;
	case 2: Z3=1;
		if(pX3&&!X3)++liczZ3;
		if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
		if(aK3&&!pK3&&Z3==1){stan3=1;}break;

	}


	///////Z4///////////
	switch(stan4){
	case 1: Z4=0;
		if(liczZ4>0){if(pX11&&!X11)--liczZ4;}
		if(pX4&&!X4)++liczZ4;
		if(!tim4&&liczZ4==0){przyciskniedostepny4=0;}
		if((aK4&&!pK4&&Z4==0&&liczZ1==0&&liczZ2==0&&liczZ5==0&&liczZ6==0&&liczZ7==0)&&(((stan3==1||stan3==2)&&
			(stan1==1&&stan2==1&&stan5==1&&stan6==1&&stan7==1&&stan8==1))||
			(stan8==1||stan8==2)&&(stan1==1&&stan2==1&&stan3==1&&stan5==1&&stan6==1&&stan7==1)))
		{
			if(przyciskniedostepny1==1||przyciskniedostepny2==1||przyciskniedostepny5==1
				||przyciskniedostepny6==1||przyciskniedostepny7==1)	{}

			else {stan4=2;blokada4=0;przyciskniedostepny4=1;}}
		if(tim4){}
		else if((aK4&&!pK4&&((liczZ1>0&&liczZ2>0)&&liczZ3==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan1=1;stan2=1;tim4=5*sek;blokada4=1;przyciskniedostepny4=1;}
		else if((aK4&&!pK4&&((liczZ5>0&&liczZ6>0)&&liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan5=1;stan6=1;tim4=5*sek;blokada4=1;przyciskniedostepny4=1;}
		else if((aK4&&!pK4&&((liczZ7>0&&liczZ8>0)&&liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ5==0&&liczZ6==0))){stanLCD=3;stan7=1;tim4=5*sek;blokada4=1;przyciskniedostepny4=1;}
		else if((aK4&&!pK4&&((liczZ1>0&&liczZ5>0)&&liczZ2==0&&liczZ3==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan1=1;stan5=1;tim4=5*sek;blokada4=1;przyciskniedostepny4=1;}
		else if((aK4&&!pK4&&((liczZ3>0&&liczZ7>0)&&liczZ1==0&&liczZ2==0&&liczZ5==0&&liczZ6==0&&liczZ8==0))){stanLCD=3;stan7=1;tim4=5*sek;blokada4=1;przyciskniedostepny4=1;}
		else if((aK4&&!pK4&&((liczZ2>0&&liczZ6>0)&&liczZ1==0&&liczZ3==0&&liczZ5==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan2=1;stan6=1;tim4=5*sek;blokada4=1;przyciskniedostepny4=1;}
		else if((aK4&&!pK4&&(liczZ1>0&&liczZ2==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan1=1;tim4=5*sek;blokada4=1;przyciskniedostepny4=1;}
		else if((aK4&&!pK4&&(liczZ1==0&&liczZ2>0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan2=1;tim4=5*sek;blokada4=1;przyciskniedostepny4=1;}
		else if((aK4&&!pK4&&(liczZ1==0&&liczZ2==0&&liczZ5>0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan5=1;tim4=5*sek;blokada4=1;przyciskniedostepny4=1;}
		else if((aK4&&!pK4&&(liczZ1==0&&liczZ2==0&&liczZ5==0&&liczZ6>0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan6=1;tim4=5*sek;blokada4=1;przyciskniedostepny4=1;}
		else if((aK4&&!pK4&&(liczZ1==0&&liczZ2==0&&liczZ5==0&&liczZ6==0&&liczZ7>0&&liczZ8==0))){stanLCD=3;stan7=1;tim4=5*sek;blokada4=1;przyciskniedostepny4=1;}

		if(blokada4==1){if(!tim4){stan4=2;blokada4=0;timPom=5*sek;}}
		break;

	case 2: Z4=1;
		if(pX4&&!X4)++liczZ4;
		if(liczZ4>0){if(pX11&&!X11)--liczZ4;}
		if(aK4&&!pK4&&Z4==1){stan4=1;}break;
	}

	///////Z5///////////
	switch(stan5){
	case 1: Z5=0;
		if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
		if(pX5&&!X5)++liczZ5;
		if(!tim4&&liczZ5==0){przyciskniedostepny5=0;}
		if((aK5&&!pK5&&Z5==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ7==0&&liczZ8==0)
			&&(((stan6==1||stan6==2)&&
			(stan1==1&&stan2==1&&stan3==1&&stan4==1&&stan7==1&&stan8==1))||
			(stan1==1||stan1==2)&&(stan8==1&&stan2==1&&stan3==1&&stan4==1&&stan6==1&&stan7==1)))
		{
			if(przyciskniedostepny2==1||przyciskniedostepny3==1||przyciskniedostepny4==1
				||przyciskniedostepny7==1||przyciskniedostepny8==1)	{}

			else {stan5=2;blokada5==0;przyciskniedostepny5=1;}}
		if(tim4){}
		else if((aK5&&!pK5&&((liczZ1>0&&liczZ2>0)&&liczZ3==0&&liczZ6==0&&liczZ4==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan2=1;tim4=5*sek;blokada5=1;przyciskniedostepny5=1;}
		else if((aK5&&!pK5&&((liczZ3>0&&liczZ4>0)&&liczZ1==0&&liczZ2==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan3=1;stan4=1;tim4=5*sek;blokada5=1;przyciskniedostepny5=1;}
		else if((aK5&&!pK5&&((liczZ7>0&&liczZ8>0)&&liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ6==0))){stanLCD=3;stan7=1;stan8=1;tim4=5*sek;blokada5=1;przyciskniedostepny5=1;}
		else if((aK5&&!pK5&&((liczZ7>0&&liczZ3>0)&&liczZ1==0&&liczZ2==0&&liczZ4==0&&liczZ6==0&&liczZ8==0))){stanLCD=3;stan7=1;stan3=1;tim4=5*sek;blokada5=1;przyciskniedostepny5=1;}
		else if((aK5&&!pK5&&((liczZ4>0&&liczZ8>0)&&liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ6==0&&liczZ7==0))){stanLCD=3;stan4=1;stan8=1;tim4=5*sek;blokada5=1;przyciskniedostepny5=1;}
		else if((aK5&&!pK5&&((liczZ6>0&&liczZ2>0)&&liczZ1==0&&liczZ3==0&&liczZ4==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan2=1;tim4=5*sek;blokada5=1;przyciskniedostepny5=1;}
		else if((aK5&&!pK5&&(liczZ1==0&&liczZ2>0&&liczZ3==0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan2=1;tim4=5*sek;blokada5=1;przyciskniedostepny5=1;}
		else if((aK5&&!pK5&&(liczZ1==0&&liczZ2==0&&liczZ3>0&&liczZ6==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan3=1;tim4=5*sek;blokada5=1;przyciskniedostepny5=1;}
		else if((aK5&&!pK5&&(liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ6==0&&liczZ7>0&&liczZ8==0))){stanLCD=3;stan7=1;tim4=5*sek;blokada5=1;przyciskniedostepny5=1;}
		else if((aK5&&!pK5&&(liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ6==0&&liczZ7==0&&liczZ8>0))){stanLCD=3;stan8=1;tim4=5*sek;blokada5=1;przyciskniedostepny5=1;}

		if(blokada5==1){if(!tim4){stan5=2;blokada5=0;timPom=5*sek;}}
		break;
	case 2: Z5=1;
		if(pX5&&!X5)++liczZ5;
		if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
		if(aK5&&!pK5&&Z5==1){stan5=1;}break;

	}

	///////Z6///////////
	switch(stan6){
	case 1: Z6=0;
		if(liczZ6>0){if(pX12&&!X12)--liczZ6;}
		if(pX6&&!X6)++liczZ6;
		if(!tim4&&liczZ6==0){przyciskniedostepny6=0;}
		if((aK6&&!pK6&&Z6==0&&liczZ1==0&&liczZ3==0&&liczZ4==0&&liczZ7==0&&liczZ8==0)&&(((stan5==1||stan5==2)&&
			(stan1==1&&stan2==1&&stan3==1&&stan4==1&&stan7==1&&stan8==1))||
			(stan2==1||stan2==2)&&(stan8==1&&stan1==1&&stan3==1&&stan4==1&&stan5==1&&stan7==1))){

				if(przyciskniedostepny1==1||przyciskniedostepny3==1||przyciskniedostepny4==1
					||przyciskniedostepny7==1||przyciskniedostepny8==1)	{}			
				else {stan6=2;blokada6=0;przyciskniedostepny6=1;}
		}
		if(tim4){}
		else if((aK6&&!pK6&&((liczZ3>0&&liczZ4>0)&&liczZ1==0&&liczZ2==0&&liczZ5==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan3=1;stan4=1;tim4=5*sek;blokada6=1;przyciskniedostepny6=1;}
		else if((aK6&&!pK6&&((liczZ1>0&&liczZ2>0)&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan1=1;tim4=5*sek;blokada6=1;przyciskniedostepny6=1;}
		else if((aK6&&!pK6&&((liczZ7>0&&liczZ8>0)&&liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0))){stanLCD=3;stan8=1;stan7=1;tim4=5*sek;blokada6=1;przyciskniedostepny6=1;}
		else if((aK6&&!pK6&&((liczZ1>0&&liczZ5>0)&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan1=1;tim4=5*sek;blokada6=1;przyciskniedostepny6=1;}
		else if((aK6&&!pK6&&((liczZ8>0&&liczZ4>0)&&liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ5==0&&liczZ7==0))){stanLCD=3;stan8=1;stan4=1;tim4=5*sek;blokada6=1;przyciskniedostepny6=1;}
		else if((aK6&&!pK6&&((liczZ3>0&&liczZ7>0)&&liczZ1==0&&liczZ2==0&&liczZ4==0&&liczZ5==0&&liczZ8==0))){stanLCD=3;stan3=1;stan7=1;tim4=5*sek;blokada6=1;przyciskniedostepny6=1;}
		else if((aK6&&!pK6&&(liczZ1>0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan1=1;tim4=5*sek;blokada6=1;przyciskniedostepny6=1;}
		else if((aK6&&!pK6&&(liczZ1==0&&liczZ2==0&&liczZ3>0&&liczZ4==0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan3=1;tim4=5*sek;blokada6=1;przyciskniedostepny6=1;}
		else if((aK6&&!pK6&&(liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4>0&&liczZ7==0&&liczZ8==0))){stanLCD=3;stan4=1;tim4=5*sek;blokada6=1;przyciskniedostepny6=1;}
		else if((aK6&&!pK6&&(liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ7>0&&liczZ8==0))){stanLCD=3;stan7=1;tim4=5*sek;blokada6=1;przyciskniedostepny6=1;}
		else if((aK6&&!pK6&&(liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ7==0&&liczZ8>0))){stanLCD=3;stan8=1;tim4=5*sek;blokada6=1;przyciskniedostepny6=1;}
		if(blokada6==1){if(!tim4){stan6=2;blokada6=0;timPom=5*sek;}}

		break;
	case 2: Z6=1;
		if(pX6&&!X6)++liczZ6;
		if(liczZ6>0){if(pX12&&!X12)--liczZ6;}
		if(aK6&&!pK6&&Z6==1){stan6=1;}break;
	}


	///////Z7///////////
	switch(stan7){
	case 1: Z7=0;
		if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
		if(pX7&&!X7)++liczZ7;
		if(!tim4&&liczZ7==0){przyciskniedostepny7=0;}
		if((aK7&&!pK7&&Z7==0&&liczZ1==0&&liczZ2==0&&liczZ4==0&&liczZ5==0&&liczZ6==0)&&(((stan8==1||stan8==2)&&
			(stan1==1&&stan2==1&&stan3==1&&stan4==1&&stan5==1&&stan6==1))||
			(stan3==1||stan3==2)&&(stan1==1&&stan2==1&&stan4==1&&stan5==1&&stan6==1&&stan8==1))){

				if(przyciskniedostepny1==1||przyciskniedostepny2==1||przyciskniedostepny4==1
					||przyciskniedostepny5==1||przyciskniedostepny6==1)	{}				

				else {stan7=2;blokada7=0;przyciskniedostepny7=1;}
		}
		if(tim4){}
		else if((aK7&&!pK7&&((liczZ1>0&&liczZ2>0)&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ8==0))){stanLCD=3;stan1=1;stan2=1;tim4=5*sek;blokada7=1;przyciskniedostepny7=1;}
		else if((aK7&&!pK7&&((liczZ3>0&&liczZ4>0)&&liczZ1==0&&liczZ2==0&&liczZ5==0&&liczZ6==0&&liczZ8==0))){stanLCD=3;stan4=1;tim4=5*sek;blokada7=1;przyciskniedostepny7=1;}
		else if((aK7&&!pK7&&((liczZ5>0&&liczZ6>0)&&liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ8==0))){stanLCD=3;stan5=1;stan6=1;tim4=5*sek;blokada7=1;przyciskniedostepny7=1;}
		else if((aK7&&!pK7&&((liczZ1>0&&liczZ5>0)&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ6==0&&liczZ8==0))){stanLCD=3;stan1=1;stan5=1;tim4=5*sek;blokada7=1;przyciskniedostepny7=1;}
		else if((aK7&&!pK7&&((liczZ2>0&&liczZ6>0)&&liczZ1==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ8==0))){stanLCD=3;stan2=1;stan6=1;tim4=5*sek;blokada7=1;przyciskniedostepny7=1;}
		else if((aK7&&!pK7&&((liczZ8>0&&liczZ4>0)&&liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ5==0&&liczZ6==0))){stanLCD=3;stan4=1;tim4=5*sek;blokada7=1;przyciskniedostepny7=1;}
		else if((aK7&&!pK7&&(liczZ1>0&&liczZ2==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ8==0))){stanLCD=3;stan1=1;tim4=5*sek;blokada7=1;przyciskniedostepny7=1;}
		else if((aK7&&!pK7&&(liczZ1==0&&liczZ2>0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ8==0))){stanLCD=3;stan2=1;tim4=5*sek;blokada7=1;przyciskniedostepny7=1;}
		else if((aK7&&!pK7&&(liczZ1==0&&liczZ2==0&&liczZ4==0&&liczZ5>0&&liczZ6==0&&liczZ8==0))){stanLCD=3;stan4=1;tim4=5*sek;blokada7=1;przyciskniedostepny7=1;}
		else if((aK7&&!pK7&&(liczZ1==0&&liczZ2==0&&liczZ4==0&&liczZ5==0&&liczZ6>0&&liczZ8==0))){stanLCD=3;stan6=1;tim4=5*sek;blokada7=1;przyciskniedostepny7=1;}
		if(blokada7==1){if(!tim4){stan7=2;blokada7=0;timPom=5*sek;}}
		break;
	case 2: Z7=1;
		if(pX7&&!X7)++liczZ7;
		if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
		if(aK7&&!pK6&&Z7==1){stan7=1;}break;
	}

	///////Z8///////////
	switch(stan8){
	case 1: Z8=0;
		if(liczZ8>0){if(pX9&&!X9)--liczZ8;}
		if(pX8&&!X8)++liczZ8;
		if(!tim4&&liczZ8==0){przyciskniedostepny8=0;}
		if((aK8&&!pK8&&Z8==0&&liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ5==0&&liczZ6==0)&&(((stan7==1||stan7==2)&&
			(stan1==1&&stan2==1&&stan3==1&&stan4==1&&stan5==1&&stan6==1))||
			(stan4==1||stan4==2)&&(stan1==1&&stan2==1&&stan3==1&&stan5==1&&stan6==1&&stan7==1))){

				if(przyciskniedostepny1==1||przyciskniedostepny2==1||przyciskniedostepny3==1
					||przyciskniedostepny5==1||przyciskniedostepny6==1)	{}		
				else {stan8=2;blokada8=0;przyciskniedostepny8=1;}
		}
		if(tim4){}
		else if((aK8&&!pK8&&((liczZ1>0&&liczZ2>0)&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0))){stanLCD=3;stan1=1;stan2=1;tim4=5*sek;blokada8=1;przyciskniedostepny8=1;}
		else if((aK8&&!pK8&&((liczZ3>0&&liczZ4>0)&&liczZ1==0&&liczZ2==0&&liczZ5==0&&liczZ6==0&&liczZ7==0))){stanLCD=3;stan3=1;tim4=5*sek;blokada8=1;przyciskniedostepny8=1;}
		else if((aK8&&!pK8&&((liczZ5>0&&liczZ6>0)&&liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ7==0))){stanLCD=3;stan5=1;stan6=1;tim4=5*sek;blokada8=1;przyciskniedostepny8=1;}
		else if((aK8&&!pK8&&((liczZ7>0&&liczZ3>0)&&liczZ1==0&&liczZ2==0&&liczZ4==0&&liczZ5==0&&liczZ6==0))){stanLCD=3;stan3=1;tim4=5*sek;blokada8=1;przyciskniedostepny8=1;}
		else if((aK8&&!pK8&&((liczZ5>0&&liczZ1>0)&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ6==0&&liczZ7==0))){stanLCD=3;stan5=1;stan1=1;tim4=5*sek;blokada8=1;przyciskniedostepny8=1;}
		else if((aK8&&!pK8&&((liczZ2>0&&liczZ6>0)&&liczZ1==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ7==0))){stanLCD=3;stan2=1;stan6=1;tim4=5*sek;blokada8=1;przyciskniedostepny8=1;}
		else if((aK8&&!pK8&&(liczZ1>0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0))){stanLCD=3;stan1=1;tim4=5*sek;blokada8=1;przyciskniedostepny8=1;}
		else if((aK8&&!pK8&&(liczZ1==0&&liczZ2>0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0))){stanLCD=3;stan2=1;tim4=5*sek;blokada8=1;przyciskniedostepny8=1;}
		else if((aK8&&!pK8&&(liczZ1==0&&liczZ2==0&&liczZ3>0&&liczZ4==0&&liczZ7==0&&liczZ7==0))){stanLCD=3;stan3=1;tim4=5*sek;blokada8=1;przyciskniedostepny8=1;}
		else if((aK8&&!pK8&&(liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5>0&&liczZ6==0&&liczZ7==0))){stanLCD=3;stan5=1;tim4=5*sek;blokada8=1;przyciskniedostepny8=1;}
		else if((aK8&&!pK8&&(liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6>0&&liczZ8==0))){stanLCD=3;stan6=1;tim4=5*sek;blokada8=1;przyciskniedostepny8=1;}
		if(blokada8==1){if(!tim4){stan8=2;blokada8=0;timPom=5*sek;}}


		break;
	case 2: Z8=1;
		if(pX8&&!X8)++liczZ8;
		if(liczZ8>0){if(pX9&&!X9)--liczZ8;}
		if(aK8&&!pK8&&Z8==1){stan8=1;}break;
	}

	//KONIEC MANUALNEGO

	//////////////////////////////////
	//////////////LCD///////////////////
	//////////////////////////////////
	switch(stanLCD){
	case 1:
		stan1=0;stan2=0;stan3=0;stan4=0;stan5=0;stan6=0;stan7=0;stan8=0;
		zliczaj();
		sprintf(buf,"                ");
		LCD_xy(1,1); LCD_puts(buf);
		LCD_xy(1,2); LCD_puts(buf);
		sprintf(buf,"      Menu:     ");
		LCD_xy(1,1); LCD_puts(buf);
		sprintf(buf,"MAN|AUT|NOC ");
		LCD_xy(1,2); LCD_puts(buf);

		if(aK1&&!pK1&&liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0){stan1=1;stan2=1;stan3=1;stan4=1;stan5=1;stan6=1;stan7=1;stan8=1;stanLCD=2;tim1=3*sek;}
		else if(aK1&&!pK1&&(liczZ1>0||liczZ2>0||liczZ3>0||liczZ4>0||liczZ5>0||liczZ6>0||liczZ7>0||liczZ8>0)){stanLCD=8;}

		if(aK2&&!pK2&&liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0){stanA2=1;stanLCD=5;tim1=3*sek;}
		else if(aK2&&!pK2&&(liczZ1>0||liczZ2>0||liczZ3>0||liczZ4>0||liczZ5>0||liczZ6>0||liczZ7>0||liczZ8>0)){stanLCD=8;}

		if(aK3&&!pK3&&liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0){stanNOC=1;stanLCD=7;}
		else if(aK3&&!pK3&&(liczZ1>0||liczZ2>0||liczZ3>0||liczZ4>0||liczZ5>0||liczZ6>0||liczZ7>0||liczZ8>0)){stanLCD=8;}
		break;

	case 2: 
		sprintf(buf,"Tryb Manual:");
		LCD_xy(1,1); LCD_puts(buf);
		stanLCD=stanLCD;
		sprintf(buf,"1|2|3|4|5|6|7|8");
		LCD_xy(1,2); LCD_puts(buf);

		if(stan1==1&&stan2==1&&stan3==1&&stan4==1&&stan5==1&&stan6==1&&stan7==1&&stan8==1){stanLCD=4;tim1=3*sek;}
		break;

	case 3: 

		if(!tim4){stanLCD=2;tim1=3*sek;}
		else {	sprintf(buf,"Wait=%5.2fs     ",(float)tim4/sek);
		LCD_xy(1,2); LCD_puts(buf);}

		break;

	case 4: 
		if(!tim1&&stan1==1&&stan2==1&&stan3==1&&stan4==1&&stan5==1&&stan6==1&&stan7==1&&stan8==1){stanLCD=1;}
		else if(stan1!=1||stan2!=1||stan3!=1||stan4!=1||stan5!=1||stan6!=1||stan7!=1||stan8!=1){stanLCD=2;}
		break;

	case 5:
		sprintf(buf,"                ");
		LCD_xy(1,1); LCD_puts(buf);
		LCD_xy(1,2); LCD_puts(buf);

		sprintf(buf,"  Tryb: Automat ");
		LCD_xy(1,1); LCD_puts(buf);
		sprintf(buf,"|Reset|Wróæ|    " ); //"wroc" dodaj
		LCD_xy(1,2); LCD_puts(buf);
		

		if(aK1&&!pK1){liczA2Z1=0;liczA2Z2=0;liczA2Z3=0;liczA2Z4=0;liczA2Z5=0;liczA2Z6=0;liczA2Z7=0;liczA2Z8=0;licznikaut=0;
		T2=8*sek;T4=8*sek;T6=8*sek;T8=8*sek; stanLCD=6; timLCD=3*sek;}
		if(aK2&&pK2){stanLCD=1;stanA2=0;Z1=0;Z2=0;Z3=0;Z4=0;Z5=0;Z6=0;Z7=0;Z8=0;}break;

	case 6:
		sprintf(buf,"                ");
		LCD_xy(1,2); LCD_puts(buf); 
		sprintf(buf,"  Zresetowano!!!");
		LCD_xy(1,2); LCD_puts(buf); 
		if(!timLCD){stanLCD=5;}break;

	case 7: 
		sprintf(buf,"                ");
		LCD_xy(1,1); LCD_puts(buf);
		LCD_xy(1,2); LCD_puts(buf);
		sprintf(buf,"    Tryb Noc:   ");
		LCD_xy(1,1); LCD_puts(buf);
		sprintf(buf,"|Wróæ|          ");
		LCD_xy(1,2); LCD_puts(buf);

		if(aK1&&pK1){stanLCD=1;stanNOC=0;Z1=0;Z2=0;Z3=0;Z4=0;Z5=0;Z6=0;Z7=0;Z8=0;}break;

	case 8:
		sprintf(buf,"                ");
		LCD_xy(1,1); LCD_puts(buf);
		LCD_xy(1,2); LCD_puts(buf);

		zliczaj();
		sprintf(buf,"Error           ");
		LCD_xy(1,1); LCD_puts(buf);
		sprintf(buf,"Pojazd na drodze");
		LCD_xy(1,2); LCD_puts(buf);

		if (liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0){stanLCD=1;}
		break;
	}

	//automat
	switch(stanA2){
	case 1: Z1=0;Z2=0;Z3=0;Z4=0;Z5=0;Z6=0;Z7=0;Z8=0;

		if(pX7&&!X7)++liczA2Z7;
		if(pX8&&!X8)++liczA2Z7;

		if(pX7&&!X7)++liczZ7;
		if(pX8&&!X8)++liczZ8;

		if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
		if(liczZ8>0){if(pX9&&!X9)--liczZ8;}

		wsp1=liczA2Z1/T2;
		wsp2=liczA2Z3/T4;
		wsp3=(liczA2Z5)/T6;
		wsp4=(liczA2Z7)/T8;

		if(((wsp3)>(wsp4))&&T6>=2*sek&&T6<=12*sek){T6=T6+2*sek;if(T8>0*sek&&T8<15*sek){T8=T8-2*sek;}}
		if(((wsp3)<(wsp4))&&T8>=4*sek&&T8<=12*sek){T8=T8+2*sek;if(T6>0*sek&&T6<15*sek){T6=T6-2*sek;}}

		if(((wsp1)>(wsp2))&&T2>=2*sek&&T2<=12*sek){T2=T2+2*sek;if(T4>0*sek&&T4<15*sek){T4=T4-2*sek;}}
		if(((wsp1)<(wsp2))&&T4>=2*sek&&T4<=12*sek){T4=T4+2*sek;if(T2>0*sek&&T2<15*sek){T2=T2-2*sek;}}

		liczA2Z1=0;liczA2Z2=0;liczA2Z3=0;liczA2Z4=0;liczA2Z5=0;liczA2Z6=0;liczA2Z7=0;liczA2Z8=0;

		if(!tim2&&liczZ7==0&&liczZ8==0){stanA2=2;tim2=T2;pomz1=0;tim3=T1;}
		break;

	case 2: Z1=1;Z2=1;Z3=0;Z4=0;Z5=0;Z6=0;Z7=0;Z8=0;
		if(pX2&&!X2)++liczA2Z1;
		if(pX1&&!X1)++liczA2Z1;
		if(pX13&&!X13||pX15&&!X15){tim3=T1;}

		if(pX1&&!X1)++liczZ1;
		if(pX2&&!X2)++liczZ2;

		if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
		if(liczZ2>0){if(pX10&&!X10)--liczZ2;}


		if(!tim3||!tim2){stanA2=3;tim2=Tprzerwa;}

		break;


	case 3: Z1=0;Z2=0;Z3=0;Z4=0;Z5=0;Z6=0;Z7=0;Z8=0;
		if(pX1&&!X1)++liczA2Z1;
		if(pX2&&!X2)++liczA2Z1;

		if(pX1&&!X1)++liczZ1;
		if(pX2&&!X2)++liczZ2;

		if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
		if(liczZ2>0){if(pX10&&!X10)--liczZ2;}

		if(!tim2&&liczZ1==0&&liczZ2==0){stanA2=4;tim2=T4;tim3=T1;}break;


	case 4: Z1=0;Z2=0;Z3=1;Z4=1;Z5=0;Z6=0;Z7=0;Z8=0;

		if(pX4&&!X4)++liczA2Z3;
		if(pX3&&!X3)++liczA2Z3;


		if(pX3&&!X3)++liczZ3;
		if(pX4&&!X4)++liczZ4;

		if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
		if(liczZ4>0){if(pX11&&!X11)--liczZ4;}


		if(pX3&&!X3||pX4&&!X4){tim3=T1;}
		if(!tim3||!tim2){stanA2=5;tim2=Tprzerwa;}


		break;

	case 5: Z1=0;Z2=0;Z3=0;Z4=0;Z5=0;Z6=0;Z7=0;Z8=0;

		if(pX4&&!X4)++liczA2Z3;
		if(pX3&&!X3)++liczA2Z3;

		if(pX3&&!X3)++liczZ3;
		if(pX4&&!X4)++liczZ4;

		if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
		if(liczZ4>0){if(pX11&&!X11)--liczZ4;}


		if(!tim2&&liczZ3==0&&liczZ4==0){stanA2=6;tim2=T6;tim3=T1;}
		break;

	case 6: Z1=0;Z2=0;Z3=0;Z4=0;Z5=1;Z6=1;Z7=0;Z8=0;

		if(pX6&&!X6)++liczA2Z5;
		if(pX5&&!X5)++liczA2Z5;

		if(pX14&&!X14||pX16&&!X16){tim3=T1;}


		if(pX5&&!X5)++liczZ5;
		if(pX6&&!X6)++liczZ6;

		if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
		if(liczZ6>0){if(pX12&&!X12)--liczZ6;}



		if(!tim3||!tim2){stanA2=7;tim2=Tprzerwa;}break;

	case 7: Z1=0;Z2=0;Z3=0;Z4=0;Z5=0;Z6=0;Z7=0;Z8=0;

		if(pX6&&!X6)++liczA2Z5;
		if(pX5&&!X5)++liczA2Z5;

		if(pX5&&!X5)++liczZ5;
		if(pX6&&!X6)++liczZ6;

		if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
		if(liczZ6>0){if(pX12&&!X12)--liczZ6;}


		if(!tim2&&liczZ5==0&&liczZ6==0){stanA2=8;tim2=T8;tim3=T1;
		}break;

	case 8: Z1=0;Z2=0;Z3=0;Z4=0;Z5=0;Z6=0;Z7=1;Z8=1;
		if(pX7&&!X7)++liczA2Z7;
		if(pX8&&!X8)++liczA2Z7;



		if(pX8&&!X7||pX8&&!X7){tim3=T1;}

		if(pX7&&!X7)++liczZ7;
		if(pX8&&!X8)++liczZ8;

		if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
		if(liczZ8>0){if(pX9&&!X9)--liczZ8;}


		if(!tim3||!tim2){stanA2=1;tim2=5*sek;++licznikaut;
		}break;

	}




	switch(stanNOC){
	case 1: Z1=0;Z2=0;Z3=0;Z4=0;Z5=0;Z6=0;Z7=0;Z8=0;
		//liczZ1=0;liczZ2=0;liczZ3=0;liczZ4=0;liczZ5=0;liczZ6=0;liczZ7=0;liczZ8=0;

		if(pX1&&!X1)++liczZ1;
		if(pX2&&!X2)++liczZ2;
		if(pX3&&!X3)++liczZ3;
		if(pX4&&!X4)++liczZ4;
		if(pX5&&!X5)++liczZ5;
		if(pX6&&!X6)++liczZ6;
		if(pX7&&!X7)++liczZ7;
		if(pX8&&!X8)++liczZ8;

		if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
		if(liczZ2>0){if(pX10&&!X10)--liczZ2;}
		if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
		if(liczZ4>0){if(pX11&&!X11)--liczZ4;}
		if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
		if(liczZ6>0){if(pX12&&!X12)--liczZ6;}
		if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
		if(liczZ8>0){if(pX9&&!X9)--liczZ8;}
		//if(!pX1&&X1){stanNOC=2;timNOC=5*sek;}

		if((X1==1||X2==1)&&(liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0)){stanNOC=2;timNOC=8*sek;}
		else if(liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0&&(X3==1||X4==1)){stanNOC=4;timNOC=8*sek;}
		break;


	case 2: Z1=1;Z2=1;Z3=0;Z4=0;Z5=0;Z6=0;Z7=0;Z8=0;
		if(pX1&&!X1)++liczZ1;
		if(pX2&&!X2)++liczZ2;
		if(pX3&&!X3)++liczZ3;
		if(pX4&&!X4)++liczZ4;
		if(pX5&&!X5)++liczZ5;
		if(pX6&&!X6)++liczZ6;
		if(pX7&&!X7)++liczZ7;
		if(pX8&&!X8)++liczZ8;

		if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
		if(liczZ2>0){if(pX10&&!X10)--liczZ2;}
		if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
		if(liczZ4>0){if(pX11&&!X11)--liczZ4;}
		if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
		if(liczZ6>0){if(pX12&&!X12)--liczZ6;}
		if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
		if(liczZ8>0){if(pX9&&!X9)--liczZ8;}


		if(!timNOC&&(X3==1||X4==1)){stanNOC=3;timNOC=8*sek;}	
		else if(!timNOC&&(X5==1||X6==1)){stanNOC=5;}	
		else if(!timNOC&&(X7==1||X8==1)){stanNOC=7;}
		else if(!timNOC&&(X1==1||X2==1)){stanNOC=1;}

		break;

	case 3: Z1=0;Z2=0;Z3=0;Z4=0;Z5=0;Z6=0;Z7=0;Z8=0;
		if(pX1&&!X1)++liczZ1;
		if(pX2&&!X2)++liczZ2;
		if(pX3&&!X3)++liczZ3;
		if(pX4&&!X4)++liczZ4;
		if(pX5&&!X5)++liczZ5;
		if(pX6&&!X6)++liczZ6;
		if(pX7&&!X7)++liczZ7;
		if(pX8&&!X8)++liczZ8;

		if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
		if(liczZ2>0){if(pX10&&!X10)--liczZ2;}
		if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
		if(liczZ4>0){if(pX11&&!X11)--liczZ4;}
		if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
		if(liczZ6>0){if(pX12&&!X12)--liczZ6;}
		if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
		if(liczZ8>0){if(pX9&&!X9)--liczZ8;}

		if(liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0){stanNOC=4;timNOC=8*sek;}break;

	case 4: Z1=0;Z2=0;Z3=1;Z4=1;Z5=0;Z6=0;Z7=0;Z8=0;
		if(pX1&&!X1)++liczZ1;
		if(pX2&&!X2)++liczZ2;
		if(pX3&&!X3)++liczZ3;
		if(pX4&&!X4)++liczZ4;
		if(pX5&&!X5)++liczZ5;
		if(pX6&&!X6)++liczZ6;
		if(pX7&&!X7)++liczZ7;
		if(pX8&&!X8)++liczZ8;

		if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
		if(liczZ2>0){if(pX10&&!X10)--liczZ2;}
		if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
		if(liczZ4>0){if(pX11&&!X11)--liczZ4;}
		if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
		if(liczZ6>0){if(pX12&&!X12)--liczZ6;}
		if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
		if(liczZ8>0){if(pX9&&!X9)--liczZ8;}

		if(!timNOC&&(X5==1||X6==1)){stanNOC=5;}
		else if(!timNOC&&(X7==1||X8==1)){stanNOC=7;}
		else if(!timNOC&&(X1==1||X2==1)){stanNOC=1;}
		else if(!timNOC&&(X3==1||X4==1)){stanNOC=3;}
		break;

	case 5: Z1=0;Z2=0;Z3=0;Z4=0;Z5=0;Z6=0;Z7=0;Z8=0;
		if(pX1&&!X1)++liczZ1;
		if(pX2&&!X2)++liczZ2;
		if(pX3&&!X3)++liczZ3;
		if(pX4&&!X4)++liczZ4;
		if(pX5&&!X5)++liczZ5;
		if(pX6&&!X6)++liczZ6;
		if(pX7&&!X7)++liczZ7;
		if(pX8&&!X8)++liczZ8;

		if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
		if(liczZ2>0){if(pX10&&!X10)--liczZ2;}
		if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
		if(liczZ4>0){if(pX11&&!X11)--liczZ4;}
		if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
		if(liczZ6>0){if(pX12&&!X12)--liczZ6;}
		if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
		if(liczZ8>0){if(pX9&&!X9)--liczZ8;}

		if(liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0){stanNOC=6;timNOC=8*sek;}break;

	case 6: Z1=0;Z2=0;Z3=0;Z4=0;Z5=1;Z6=1;Z7=0;Z8=0;
		if(pX1&&!X1)++liczZ1;
		if(pX2&&!X2)++liczZ2;
		if(pX3&&!X3)++liczZ3;
		if(pX4&&!X4)++liczZ4;
		if(pX5&&!X5)++liczZ5;
		if(pX6&&!X6)++liczZ6;
		if(pX7&&!X7)++liczZ7;
		if(pX8&&!X8)++liczZ8;

		if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
		if(liczZ2>0){if(pX10&&!X10)--liczZ2;}
		if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
		if(liczZ4>0){if(pX11&&!X11)--liczZ4;}
		if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
		if(liczZ6>0){if(pX12&&!X12)--liczZ6;}
		if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
		if(liczZ8>0){if(pX9&&!X9)--liczZ8;}


		if(!timNOC&&(X7==1||X8==1)){stanNOC=7;}
		else if(!timNOC&&(X1==1||X2==1)){stanNOC=1;}
		else if(!timNOC&&(X3==1||X4==1)){stanNOC=3;}
		else if(!timNOC&&(X5==1||X6==1)){stanNOC=5;}
		break;

	case 7:  Z1=0;Z2=0;Z3=0;Z4=0;Z5=0;Z6=0;Z7=0;Z8=0;
		if(pX1&&!X1)++liczZ1;
		if(pX2&&!X2)++liczZ2;
		if(pX3&&!X3)++liczZ3;
		if(pX4&&!X4)++liczZ4;
		if(pX5&&!X5)++liczZ5;
		if(pX6&&!X6)++liczZ6;
		if(pX7&&!X7)++liczZ7;
		if(pX8&&!X8)++liczZ8;

		if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
		if(liczZ2>0){if(pX10&&!X10)--liczZ2;}
		if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
		if(liczZ4>0){if(pX11&&!X11)--liczZ4;}
		if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
		if(liczZ6>0){if(pX12&&!X12)--liczZ6;}
		if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
		if(liczZ8>0){if(pX9&&!X9)--liczZ8;}

		if(liczZ1==0&&liczZ2==0&&liczZ3==0&&liczZ4==0&&liczZ5==0&&liczZ6==0&&liczZ7==0&&liczZ8==0){stanNOC=8;timNOC=8*sek;}break;

	case 8: Z1=0;Z2=0;Z3=0;Z4=0;Z5=0;Z6=0;Z7=1;Z8=1;

		if(pX1&&!X1)++liczZ1;
		if(pX2&&!X2)++liczZ2;
		if(pX3&&!X3)++liczZ3;
		if(pX4&&!X4)++liczZ4;
		if(pX5&&!X5)++liczZ5;
		if(pX6&&!X6)++liczZ6;
		if(pX7&&!X7)++liczZ7;
		if(pX8&&!X8)++liczZ8;


		if(liczZ1>0){if(pX11&&!X11)--liczZ1;}
		if(liczZ2>0){if(pX10&&!X10)--liczZ2;}
		if(liczZ3>0){if(pX12&&!X12)--liczZ3;}
		if(liczZ4>0){if(pX11&&!X11)--liczZ4;}
		if(liczZ5>0){if(pX9&&!X9)--liczZ5;}
		if(liczZ6>0){if(pX12&&!X12)--liczZ6;}
		if(liczZ7>0){if(pX10&&!X10)--liczZ7;}
		if(liczZ8>0){if(pX9&&!X9)--liczZ8;}

		if(!timNOC&&(X7==1||X8==1)){stanNOC=7;}
		else if(!timNOC&&(X1==1||X2==1)){stanNOC=1;}
		else if(!timNOC&&(X3==1||X4==1)){stanNOC=3;}
		else if(!timNOC&&(X5==1||X6==1)){stanNOC=5;}
		break;
	}
	pX1=X1;
	pX2=X2;
	pX3=X3;
	pX4=X4;	
	pX5=X5;
	pX6=X6;
	pX7=X7;
	pX8=X8;
	pX9=X9;
	pX10=X10;
	pX11=X11;
	pX12=X12;
	pX13=X13;
	pX14=X14;
	pX15=X15;
	pX16=X16;


}
////////////////////////////////////////////////////////////////////////////////////

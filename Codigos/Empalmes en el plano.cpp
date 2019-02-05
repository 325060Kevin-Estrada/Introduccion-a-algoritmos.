#include <iostream>
using namespace std;
int main(){
	int XA, YA, SA , XB, YB, SB;
        cout <<"Cuadrado #1"<<endl;
        cout << "Cual es la cordenada en X:";
            cin >> XA;
        cout << "\Cual es la cordenada en Y: ";
            cin >> YA;
        cout << "\Cual es la longitud de los lados del cuadrado: ";
            cin >> SA;
        cout <<"Cuadrado #2"<<endl;
        cout << "Cual es la cordenada en X: ";
            cin >> XB;
        cout << "Cual es la cordenada en Y: ";
            cin >> YB;
        cout << "\Longitud de los lados del cuadrado: ";
            cin >> SB;
    //Probabilidades de empalme en el cuadrado #1.
	if (XA <= XB && XB <= (XA+SA) &&  YA >= YB  && YB >= (YA-SA)){
		cout<<"Existe un empalme";
	}
	if (XA <= XB && XB <= (XA+SA) &&  YA >= (YB-SB)  && (YB-SB) >= (YA-SA)){
		cout<<"Existe un empalme";
	}
	if (XA <= (XB+SB) && (XB+SB)<= (XA+SA) &&  YA >= YB  && YB >= (YA-SA)){
		cout<<"Existe un empalme";
	}
	if (XA <= (XB+SB) && (XB+SB) <= (XA+SA) &&  YA >= (YB-SB)  && (YB-SB) >= (YA-SA)){
		cout<<"Existe un empalme";
	}
    //Probabilidades de empalme en el cuadrado #2.
	if (XB <= XA && XA <= (XB+SB) &&  YB >= YA  && YA >= (YB-SB)){
		cout<<"Existe un empalme";
	}
	if (XB <= (XA+SA) && (XA+SA)<= (XB+SB) &&  YB >= YA  && YA >= (YB-SB)){
		cout<<"Existe un empalme";
	}
	if (XB <= XA && XA <= (XB+SB) &&  YB >= (YA-SA)  && (YA-SA) >= (YB-SB)){
		cout<<"Existe un empalme";
	}
	if (XB <= (XA+SA) && (XA+SA) <= (XB+SB) &&  YA >= YA  && YA >= (YB-SB)){
		cout<<"Existe un empalme";
	}
}

/*Cuando ocurren varios empalmes, se imprime el mensaje varias veces, pero
quise separar los if de tal manera que no se hiciera uno muy largo con las 4
opciones de empalme dentro del mismo. */






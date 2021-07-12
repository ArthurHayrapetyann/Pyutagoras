#include <iostream>

using namespace std;
int pyuttiv(int a, int b, int c){
	if (a>b && b>c){
		if(a*a == b*b+c*c){
			cout << c << b << a << "Այս թվերը պյութագորյան են";
						
		}
		else{
			cout << "pjwutagwjan che";     
	}

	
	}
	else if (a>c && c>b){
		if(a*a == b*b+c*c){
			cout << b << c << a << "Այս թվերը պյութագորյան են";
			return 1;
		}
		else{
			cout << "pjwutagwjan che";      
		}
	
	}
	else if (c>a && a>b){
		if(c*c == b*b+a*a){
			cout << b << a << c << "Այս թվերը պյութագորյան են";
			return 1;
		}
		else{
			cout << "pjwutagwjan che" ;     
	}
	
	}
	else if (c>b && b>a){
		if(c*c == b*b+a*a){
			cout << a << b << c << "Այս թվերը պյութագորյան են";
			return 1;
		}
		else{
			cout << "pjwutagwjan che";    
	}
	
	}
	else if (b>a && a>c){
		if(b*b == a*a+c*c){
			cout << c << a << b << "Այս թվերը պյութագորյան են";
			return 1;
		} 
		else{
			cout << "pjwutagwjan che";     
	}
	
	}
	else if (b > c && c > a){
		if(b*b == a*a+c*c){
			cout << a << c << b << "Այս թվերը պյութագորյան են";
			return 1;
		}
		else{
			cout << "pjwutagwjan che";     
	}
	
	}
	return 0;

}


int main(){
	int a;
	int b;
	int c;
	cout << "Առաջին Թիվ ";
	cin >> a;
	cout << "Առաջին Թիվ ";
	cin >> b;
	cout << "Առաջին Թիվ ";
	cin >> c;
	pyuttiv(a,b,c);
        return 1;	
} 


//Meu nome  na tela
#include <iostream>

using namespace std;

int main(){

    std::cout << "Roberta Lacerda" << endl;
    return 0;
}


//Par ou impar

#include <iostream>

using namespace std;

int main() {
    int valor;

    cout << "Digite um numero: ";
    cin >> valor;

    if (valor%2 == 0) {
        //block
        cout << valor << "e par!\n";
    }

    else {
        cout << valor << "e impar!\n";
    }

    return 0;
}

//Imprimir numero
#include <iostream>

using namespace std;
int main() {
    for(int i = 0; i <= 1000;i++)
    if(i % 2 == 1){
        cout<<i<<"\n";
    }
    return 0;
}


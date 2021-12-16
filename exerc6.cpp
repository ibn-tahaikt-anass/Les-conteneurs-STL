#include <iostream>
using namespace std;
class Test{
public:
    static int tableau[] ;
    static float division(int indice, float diviseur){
    if( diviseur == 0 ) {
      throw "Division par zero!"; 
   }
    return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
int x, y;
cout << "Entrez l\'indice de l\'entier a diviser: " ;
cin >> x ;
cout << "Entrez le diviseur: " ;
cin >> y ;

 try{
        float res = Test::division(x,y);
        cout << "Le resultat de la division est: ";
        cout << res << endl;
   }catch(const char* msg){
        cerr << msg << endl;
   }
return 0;
}

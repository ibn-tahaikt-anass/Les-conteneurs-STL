#include <iostream>
#include <string>
#include <list>
#include <sstream>
#include <iterator>

using namespace std;

class personne
{
public:
    int age;
    string nom, prenom , str;;
    personne() {
        int a;
        string b, c;
        std::cout << "entrer un nom : " ;
        std::cin >> b;
        std::cout << "entrer un prenom : " ;
        std::cin >> c;
        std::cout << "entrer l'age : " ;
        std::cin >> a;
        stringstream ss;  
        ss << a;  
        ss >> str; 
        age = a;
        nom = b;
        prenom = c;
        str = str ;
    }
};
int main()
{
    int n;
    list <string> personnes;
    cout << "entrer la langueur de la liste: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        personne p;
        
        personnes.push_back(p.nom +" "+ p.prenom + " " + p.str);
    }
    personnes.sort();
    list <string> :: iterator it;
    cout << "la list trie est :  ";
    for(it = personnes.begin(); it != personnes.end(); ++it)
        cout <<  *it<<"\t";
}

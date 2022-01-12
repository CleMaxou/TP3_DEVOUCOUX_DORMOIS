#include"lecteur.h"

Lecteur::Lecteur(std::string idu, std::string noml, std::string prenoml) : _idu(idu), _noml(noml), _prenoml(prenoml)
{

}
Lecteur::Lecteur() {

}

std::string Lecteur::getIdu() {
	return _idu;
}
std::string Lecteur::getPrenoml() {
	return _prenoml;
}
std::string Lecteur::getNoml() {
	return _noml;
}
/*
void display(Lecteur& lecteur) {
	std::cout << lecteur.getIdl() << "/" << lecteur.getNoml() << "/" << lecteur.getPrenoml() << '\n';

}
*/
void Lecteur::afficherLecteur()
{
	std::cout << _prenoml << std::endl;
	std::cout << _noml << std::endl;
	std::cout << _idu<< std::endl;
}
std::ostream& operator<<(std::ostream& os, Lecteur lecteur) {
	os << " Le prenom du lecteur est : " << lecteur.getPrenoml()  << ". Le nom est : " << lecteur.getNoml() << " . L'ID est : " << lecteur.getIdu();
	return os;
}
#include <iostream>

#include "Hospital.h"
using namespace std;

int menu(void)
{
    int menuChoice;

    cout<<"Are you an ....\n\n";
    cout<<"1.Administrator ?\n";
    cout<<"2.Patient ?\n";
    cout<<"3.Doctor ?\n";
    cout<<"\nYour choice ?\n\n";

    cin >> menuChoice;
    return menuChoice;
}

int adminMenu(void) {

    int adminMenuChoice;

    cout<<"Bonjour Administrateur \n\n";
    cout<<"Que souhaitez-vous faire ? \n\n";
    cout<<"1.Ajouter une classe ?\n";
    cout<<"2.Ajouter un etudiant ?\n";
    cout<<"3.Ajouter un professeur ?\n";
    cout<<"4.Ajouter un cours ?\n";
    cout<<"5.Supprimer un etudiant ?\n";
    cout<<"6.Supprimer un professeur ?\n";
    cout<<"7.Supprimer un cours ?\n";
    cout<<"8.Supprimer une classe ?\n";
    cout<<"9.Affichage des classes ?\n";

    cin >> adminMenuChoice;
    return adminMenuChoice;
}

int studentMenu(void) {
    int studentMenuChoice;

    cout<<"Bonjour Etudiant \n\n";
    cout<<"Que souhaitez-vous faire ? \n\n";
    cout<<"1.Consulter notes ?\n";
    cout<<"2.Consulter les cours ? \n";
    cout<<"3.Consulter la classe ? \n";
    cout<<"4.Chercher un cours ?\n";

    cin >> studentMenuChoice;
    return studentMenuChoice;
}

int affichageMenuProfesseur(void) {

    int choixMenuProfesseur;

    cout<<"Bonjour Professeur \n\n";
    cout<<"Que souhaitez-vous faire ? \n\n";
    cout<<"1.Consulter classe ?\n";
    cout<<"2.Consulter les cours ?\n";
    cout<<"3.Chercher un cours ?\n";
    cout<<"4.Ajouter une note ?\n";

    cin >> choixMenuProfesseur;
    return choixMenuProfesseur;
}
int main() {
    Hospital* hospital = new Hospital("Hospital APU");
    hospital->registerPatient("anais","anais","anais","22 allee de la choco", "anais@anais.fr", 20,"student");
    hospital->displayHospital();

    cout << "Enters username\n";
    string username;
    cin >> username;
    string pwd;
    cout << "Enters password.\n";
    cin >> pwd;
    cout << "OK NOW REGISTERED, please fill informations\n";
    cout << "Enters name\n";
    string name;
    cin >> name;
    cout << "Enters address\n";
    string address;
    cin >> address;
    cout << "Enters email \n";
    string email;
    cin >> email;
    cout << "Enters age\n";
    int age;
    cin >> age;
    cout << "Enters function\n";
    string function;
    cin >> function;
    hospital->registerPatient(username, pwd, name, address, email, age, function);
    cout << "OK Done !";
    return 0;

    /*  Ecole* ecole = new Ecole("Efrei");

      *//* vector <Etudiant*> listeEtudiantAsyria;
         vector <Cours*> listeCoursAsyria;
         vector <Professeur*> listeProfesseurAsyria;
     *//*
        //Classe* classe1 = new Classe("L3Asyria", listeEtudiantAsyria, listeCoursAsyria, listeProfesseurAsyria);

        cout << "-----Bienvenue sur l'application de gestion de cours-----\n\n";
        do {
            choix = affichageMenu();
            switch (choix) {
                case 1: {
                    switch (affichageMenuAdministrateur()) {
                        case 1 : {
                            cout << "Veuillez rentrer le nom de la classe a rajouter.\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeVerif = ecole->chercherClasse(nomClasse);
                            if(classeVerif == nullptr) {
                                ecole->ajouterClasse(nomClasse);
                            }
                            else {
                                cout << "La classe existe deja ! \n\n";
                                break;
                            }
                            break;
                        }
                        case 2 : {
                            cout << "Veuillez rentrer le nom de famille de l'etudiant.\n";
                            string nomEtudiant;
                            cin >> nomEtudiant;
                            string prenomEtudiant;
                            cout << "Veuillez rentrer le prenom de l'etudiant.\n";
                            cin >> prenomEtudiant;
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                classeTrouve->ajouterEtudiant(nomEtudiant, prenomEtudiant);
                                classeTrouve->affichageEtudiantsClasse();
                                classeTrouve = nullptr;
                                delete classeTrouve;
                            }
                            break;
                        }
                        case 3 : {
                            cout << "Veuillez rentrer le nom de famille du professeur.\n";
                            string nomProfesseur;
                            cin >> nomProfesseur;
                            cout << "Veuillez rentrer le prenom du professeur.\n";
                            string prenomProfesseur;
                            cin >> prenomProfesseur;
                            cout << "Veuillez rentrer le departement du professeur.\n";
                            string departementProfesseur;
                            cin >> departementProfesseur;
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                classeTrouve->ajouterProfesseur(nomProfesseur, prenomProfesseur, departementProfesseur);
                                classeTrouve->affichageProfesseursClasse();
                                classeTrouve = nullptr;
                                delete classeTrouve;

                            }
                            break;
                        }
                        case 4 : {
                            cout << "Veuillez rentrer le nom du cours a rajouter.\n";
                            string titreCours;
                            cin >> titreCours;
                            cout << "Veuillez rentrer le nom du professeur\n";
                            string nomProfesseurCours;
                            cin >> nomProfesseurCours;
                            cout << "Veuillez rentrer le prenom du professeur\n";
                            string prenomProfesseurCours;
                            cin >> prenomProfesseurCours;
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                Professeur *profTrouve = classeTrouve->chercherProfesseur(nomProfesseurCours, prenomProfesseurCours);
                                if (profTrouve == nullptr) {
                                    break;
                                }
                                else {
                                    classeTrouve->ajouterCours(titreCours, profTrouve);
                                    classeTrouve->affichageCoursClasse();
                                    classeTrouve = nullptr;
                                    delete classeTrouve;
                                    profTrouve = nullptr;
                                    delete profTrouve;
                                }
                            }
                            break;
                        }
                        case 5 : {
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                classeTrouve->affichageEtudiantsClasse();
                                if (classeTrouve->getListeEtudiant().size() == 0) {
                                    break;
                                }
                                cout << "Veuillez rentrer le nom de l'etudiant a supprimer .\n";
                                string nom;
                                cin >> nom;
                                cout << "Veuillez rentrer le prenom l'etudiant a supprimer\n";
                                string prenom;
                                cin >> prenom;
                                int result = classeTrouve->supprimerEtudiant(nom, prenom);
                                if (result == 0) {
                                    cout << "Succes !\n\n";
                                    break;
                                }
                                else {
                                    cout << "Echec !\n\n";
                                }
                            }
                            break;
                        }
                        case 6 : {
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                classeTrouve->affichageProfesseursClasse();
                                if (classeTrouve->getListeProfesseur().size() == 0) {
                                    break;
                                }
                                cout << "Veuillez rentrer le nom du professeur a supprimer .\n";
                                string nom;
                                cin >> nom;
                                cout << "Veuillez rentrer le prenom du professeur a supprimer\n";
                                string prenom;
                                cin >> prenom;
                                int result = classeTrouve->supprimerProfesseur(nom, prenom);
                                if (result == 0) {
                                    cout << "Succes !\n\n";
                                    break;
                                }
                                else {
                                    cout << "Echec !\n\n";
                                }
                                classeTrouve->affichageProfesseursClasse();
                            }
                            break;
                        }
                        case 7 : {
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                classeTrouve->affichageCoursClasse();
                                if (classeTrouve->getListeCours().size() == 0) {
                                    break;
                                }
                                cout << "Veuillez rentrer le titre du cours a supprimer .\n";
                                string nomCours;
                                cin >> nomCours;
                                cout << "Veuillez rentrer le nom de famille du professeur du cours a supprimer\n";
                                string nomProf;
                                cin >> nomProf;
                                int result = classeTrouve->supprimerCours(nomCours, nomProf);
                                if (result == 0) {
                                    cout << "Succes !\n\n";
                                    break;
                                }
                                else {
                                    cout << "Echec !\n\n";
                                }
                                classeTrouve->affichageCoursClasse();
                            }
                            break;
                        }
                        case 8 : {
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                classeTrouve->affichageCoursClasse();
                                if (classeTrouve->getListeCours().size() == 0) {
                                    break;
                                }
                                int result = ecole->supprimerClasse(nomClasse);
                                if (result == 0) {
                                    cout << "Succes !\n\n";
                                    break;
                                }
                                else {
                                    cout << "Echec !\n\n";
                                }
                                ecole->affichageClasse();
                            }
                            break;
                        }
                        case 9 : {
                            ecole->affichageClasse();
                            break;
                        }
                        default : {
                            cout << "Saisie invalide\n";
                            break;
                        }
                    }
                };
                    break;
                case 2: {
                    switch (affichageMenuEtudiant()) {
                        //affichage des notes
                        case 1 : {
                            cout << "Veuillez rentrer votre nom de famille.\n";
                            string nomEtudiant;
                            string prenomEtudiant;
                            cin >> nomEtudiant;
                            cout << "Veuillez rentrer votre prenom.\n";
                            cin >> prenomEtudiant;
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                Etudiant *etuTmp = classeTrouve->chercherEtudiant(nomEtudiant, prenomEtudiant);
                                if (etuTmp == nullptr) {
                                    break;
                                }
                                else {
                                    etuTmp->afficherEtudiant();
                                    etuTmp = nullptr;
                                    delete etuTmp;
                                }
                            }
                            break;
                        }
                            //affichage des cours
                        case 2 : {
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                classeTrouve->affichageCoursClasse();
                            }
                            break;
                        }
                            //affichage de la classe
                        case 3 : {
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                classeTrouve->affichageEtudiantsClasse();
                                classeTrouve->affichageProfesseursClasse();
                            }
                            break;
                        }
                            //affichage du cours recherché
                        case 4 : {
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            //chercher classec
                            cout << "Veuillez rentrer le nom du cours recherché\n";
                            string nomCours;
                            cin >> nomCours;
                            cout << "Veuillez rentrer le nom du professeur\n";
                            string nomProfesseur;
                            cin >> nomProfesseur;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                classeTrouve->chercherCours(nomCours, nomProfesseur);
                            }
                            break;
                        }
                        default : {
                            cout << "Saisie invalide\n";
                            break;
                        }
                    }
                };
                    break;
                case 3: {
                    switch (affichageMenuProfesseur()) {

                        //affichage de la classe
                        case 1 : {
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                classeTrouve->affichageEtudiantsClasse();
                                classeTrouve->affichageProfesseursClasse();
                            }
                            break;
                        }
                            //affichage des cours
                        case 2 : {
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                classeTrouve->affichageCoursClasse();
                            }
                            break;
                        }
                            //affichage du cours recherché
                        case 3 : {
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            //chercher classe
                            cout << "Veuillez rentrer le nom du cours recherché\n";
                            string nomCours;
                            cin >> nomCours;
                            cout << "Veuillez rentrer le nom du professeur\n";
                            string nomProfesseur;
                            cin >> nomProfesseur;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                classeTrouve->chercherCours(nomCours, nomProfesseur);
                            }
                            break;
                        }
                            //ajout d'une note
                        case 4 : {
                            cout << "Veuillez entrer le nom de l'étudiant\n";
                            string nomE;
                            cin >> nomE;
                            cout << "Veuillez entrer le prenom de l'etudiant\n";
                            string prenomE;
                            cin >> prenomE;
                            cout << "Veuillez rentrer le nom de la classe\n";
                            string nomClasse;
                            cin >> nomClasse;
                            Classe* classeTrouve = ecole->chercherClasse(nomClasse);
                            if (classeTrouve == nullptr) {
                                break;
                            }
                            else {
                                Etudiant *etu = classeTrouve->chercherEtudiant(nomE, prenomE);
                                if (etu == nullptr) {
                                    break;
                                }
                                else {
                                    cout << "Veuillez entrer le nom du cours\n";
                                    string nomC;
                                    cin >> nomC;
                                    cout << "Veuillez entrer la note à rajouter\n";
                                    float note;
                                    cin >> note;
                                    etu->attribuerNote(note, nomC);
                                    etu = nullptr;
                                    delete etu;
                                }
                            }
                            break;
                        }
                        default: {
                            cout << "Saisie invalide\n";
                            break;
                        }
                    }
                };
                    break;
                default: {
                    cout << "Vous n'etes aucun de tous, donc vous ne ferai rien du tout!\n";
                    break;
                }
            };
        } while (choix == 1 || choix == 2 || choix == 3);
        return 0;
    }*/
/*classe1->affichageEtudiantsClasse();
classe1->affichageCoursClasse();
classe1->affichageProfesseursClasse();

Etudiant* etudiant1 = new Etudiant("Ha", "Anais");

listeEtudiantAsyria.push_back(etudiant1);
classe1->setListeEtudiant(listeEtudiantAsyria);

etudiant1->afficherEtudiant();
etudiant1->attribuerNote(10.0, "Programmation C");
etudiant1->attribuerNote(17.5, "Histoire");
etudiant1->attribuerNote(15, "Java");
etudiant1->afficherEtudiant();

classe1->affichageEtudiantsClasse();

Etudiant* etudiant2 = new Etudiant("Chau", "Mickael");

listeEtudiantAsyria.push_back(etudiant2);
classe1->setListeEtudiant(listeEtudiantAsyria);

etudiant2->afficherEtudiant();
etudiant2->attribuerNote(20.0, "Mathematiques");
etudiant2->afficherEtudiant();

classe1->affichageEtudiantsClasse();

Professeur* professeur = new Professeur("Ba", "Marieme", "Informatique");
professeur->afficherProfesseur();
listeProfesseurAsyria.push_back(professeur);
classe1->setListeProfesseur(listeProfesseurAsyria);

classe1->affichageProfesseursClasse();
return 0;
}*/

}
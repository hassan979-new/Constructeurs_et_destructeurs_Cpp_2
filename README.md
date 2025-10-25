
# 🧮 **Constructeurs et destructeurs 2**

## 📘 Description

Ce document regroupe deux projets C++ illustrant des concepts essentiels de la programmation orientée objet :

- Utilisation des attributs et méthodes statiques

- Association entre objets (Etudiant ↔ Universite)

- Encapsulation des données

- Suivi du cycle de vie des objets avec destructeurs
## 📂 Project Structure
````
projets
├── SuiviLivres/
│   ├── SuiviLivresBibliotheque.h
│   └── Programme.cpp
├── UniversiteEtudiants/
│   └── universite_etudiants.cpp
└── README.md
````


## ⚙️ Features

### **1.** Suivi des Livres – Attribut statique et comptage global
Classe Livre avec :

- Attributs privés : titre, auteur, annee

- Attribut statique nbLivres pour compter les instances

- Constructeur paramétré qui incrémente le compteur

- Méthode afficher() pour présenter les informations

- Méthode statique afficherTotal() pour afficher le nombre total de livres créés
### **2.** Université & Étudiants – Association et comptage statique
Classe Universite avec :

- Attribut privé : nom

- Méthode afficherNom() pour présenter le nom

Classe Etudiant avec :

- Attributs : nom, age, pointeur vers Universite

- Attribut statique nbEtudiants pour compter les étudiants

Méthodes :

- afficher() pour présenter l’étudiant et son université

- afficherTotal() pour afficher le nombre total

- Destructeur qui décrémente le compteur et affiche "fin"
## 🖥️ Example Execution

### Suivi des Livres dans une Bibliothèque : 
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/3c795de6-23be-4166-ac2c-259914995a57" />
### Gestion des Étudiants et de l’Université :
- <img width="480" height="504" alt="image" src="https://github.com/user-attachments/assets/ac115f73-9b84-4ecc-a89e-9d8796b75b1f" />
## 💡 Concepts Practiced

- L’usage des attributs statiques pour le comptage global

- L’association entre objets pour modéliser des relations réelles

- La structuration claire et modulaire du code

- Le suivi du cycle de vie des objets avec destructeurs explicites

## 🧑‍💻 Author

- 👤 Agouram Hassan
- 🏫 Fondamentaux et Concepts Avancés de la Programmation Java – TP1
- 🎓 Instructor	Mr.LACHGAR
- 📅 25	October 2025

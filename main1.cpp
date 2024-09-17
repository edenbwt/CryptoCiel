/**
 * @file main.cpp
 * @brief Exemple de chiffrement et déchiffrement RSA avec gestion des clés.
 *
 * Ce programme génère une paire de clés RSA (publique et privée), chiffre un message avec la clé publique
 * et le déchiffre ensuite avec la clé privée.
 *
 * @author eden
 * @date 2024
 */

#include <iostream>
#include "RsaGestion.h"  // Inclure la classe de gestion RSA

 /**
  * @brief Fonction principale du programme.
  *
  * Cette fonction gère l'ensemble du processus de génération de clés RSA, de chiffrement
  * et de déchiffrement d'un message.
  *
  * @return int Retourne 0 si le programme s'exécute avec succès.
  */
int main() {
    // Étape 1 : Créer une instance de la classe RsaGestion
    RsaGestion rsaGestion;

    // Étape 2 : Générer une paire de clés RSA (publique et privée)
    std::string publicKeyFile = "rsa_public.pem";
    std::string privateKeyFile = "rsa_private.pem";
    rsaGestion.generationClef(publicKeyFile, privateKeyFile, 2048); // Taille de clé de 2048 bits

    // Étape 3 : Définir le message à chiffrer
    std::string message = "Ceci est un message secret.";

    // Étape 4 : Chiffrer le message en utilisant la clé publique
    std::string encryptedMessage = rsaGestion.chiffrementRsa(message);
    std::cout << "Message chiffré (Base64) : " << encryptedMessage << std::endl;

    // Étape 5 : Déchiffrer le message en utilisant la clé privée
    std::string decryptedMessage = rsaGestion.dechiffrementRsa(encryptedMessage);
    std::cout << "Message déchiffré : " << decryptedMessage << std::endl;

    return 0;
}

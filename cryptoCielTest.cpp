// RsaCiel.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "RsaGestion.h"
#include "Hashgestion.h"
#include "AesGestion.h"
#include <fstream>

int main()
{

	/*
	HashGestion LM;
	std::string monMessageHash = "Super message superchouette";

	std::string Filename = "TEST.txt";


	std::cout << LM.CalculateSHA256(monMessageHash) << std::endl;


	std::cout << LM.CalculateFileSHA256(Filename) << std::endl;
	*/




	/////AES
	/*
	AesGestion PP;

	std::string ENCRYPTEDMSG;
	std::string MSG = "HAAAAAAAAAAA JE MEURT";

	PP.GenerateAESKey();

	PP.SaveAESKeyToFile("KEY.txt");

	ENCRYPTEDMSG = PP.encrypt_aes256_to_base64(MSG);
	std::cout << ENCRYPTEDMSG << std::endl;


	ENCRYPTEDMSG = PP.decrypt_aes256_from_base64(ENCRYPTEDMSG);
	std::cout << ENCRYPTEDMSG << std::endl;
	PP.EncryptFileAES256("TEST.txt", "ECRYPTED.txt");
	*/

	//RSA
	/*
	RsaGestion CC;

	std::string PRIVER = "PRIVER.pem";
	std::string PUBLIC = "PUBLIC.pem";
	
	std::string MSG = "MSG A ENCRYPTER WHALLA !!!!!";

	CC.generationClef(PUBLIC, PRIVER, 2048);


	std::string encrypted = CC.chiffrementRsa(MSG);

	std::cout << encrypted << std::endl;

	std::string decrypted = CC.dechiffrementRsa(encrypted);

	std::cout << decrypted << std::endl;
	*/


	RsaGestion CC;

	std::string PRIVER = "PRIVER.pem";
	std::string PUBLIC = "PUBLIC.pem";


	std::string message = "MESSAGE A CRYPTER ET DECRYPTER LAAAAAAAAAAAAAAA";

	CC.chargementClefs(PUBLIC, PRIVER);

	CC.chiffreDansFichier(message, "ENCRYPTEDMSG.txt");

	//std::cout << "freere ca marche pas" << std::endl;
	std::cout << CC.dechiffreFichier("ENCRYPTEDMSG.txt") << std::endl;



}



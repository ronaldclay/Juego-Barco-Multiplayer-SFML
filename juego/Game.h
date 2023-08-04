// Game.h
#pragma once

#include<iostream>
#include<ctime>
#include<vector>
#include <memory>
#include<sstream>
#include <chrono>
#include <thread>

#include "Fondo.h"
#include "Barco.h"
#include "BarcoPlayer1.h"
#include "BarcoPlayer2.h"
#include "ItemDefault.h"
#include "ItemDanio.h"
#include "ItemVida.h"


class Game
{
private:
	sf::VideoMode videoMode;
	sf::RenderWindow* window;
	bool fin_del_juego;
	sf::Event sfmlEvent;
	Fondo *fondo;


	std::shared_ptr<Barco> player1;
	std::shared_ptr<Barco> player2;
	int Punto1;
	int Punto2;
	sf::Font fuente;
	sf::Text guiText;
	sf::Text fin_del_juego_texto;
	sf::Text guiText2;

	std::vector<std::unique_ptr<Bola>> bolitas;
	float Temporizador;
	float spawnTimer;
	int maxBolitas;
	int numBolitas;

	void inicializarVariables();
	void inicializarWindow();
	void inicializarFuente_letra();
	void inicializarTexto();

public:
	//Constructors and Destructors
	Game();
	~Game();

	//Accessors
	const bool& getEndGame() const;

	//Modifiers

	//Functions
	const bool running() const;
	void pollEvents();

	void GeneradorItems();
	void updatePlayer();
	void Colision();
	void Notificador();
	void update();

	void Mostrar_texto(sf::RenderTarget* target);
	void render();
};
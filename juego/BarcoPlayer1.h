//barcoplayer1.h
#pragma once
#include "Barco.h"

class BarcoPlayer1 :public Barco {
public:
	BarcoPlayer1(float x = 200.f, float y = 400.f);
	virtual ~BarcoPlayer1() {}
	virtual void iniImage() override;
	virtual void inicializarImagenBarco() override;
	virtual void movimiento() override;
};
#pragma once
#include "Barco.h"

class BarcoPlayer2 :public Barco {
public:
	BarcoPlayer2(float x = 600.f, float y = 400.f);
	virtual ~BarcoPlayer2() {}
	virtual void iniImage() override;
	void inicializarImagenBarco() override;
	virtual void movimiento() override;
};

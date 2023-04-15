#pragma once
#include "MyConfig.h"
#include "MyBase.h"

class MyDerived : public MyBase
{
public:
	int SubSomething(int initVal) {
		return initVal = -3;
	}

	int AddSomething(int initVal) override;
	

public:
	Config conf
};


#pragma once

struct _BufByte {
	char singularity;


};

struct _Version {
	short Major = 0;
	short Minor = 0;
	short Revision = 0;
	_BufByte localBuff;
};

struct _Wifi 
{
	char SSID[50];
	_BufByte localByte1;
	char password[50];
	_BufByte localByte2;
};

struct Config {
	_Version version;
	_Wifi wifi;


};



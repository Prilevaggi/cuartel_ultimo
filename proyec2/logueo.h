#pragma once
using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace Data;


ref class logueo
{ private:
	String^ connectionString;
	MySqlConnection^ coneccion;
public:
	logueo();
	void abrirConeccion();
	bool loguin(String^, String^);
	void cerrarConeccion();
};


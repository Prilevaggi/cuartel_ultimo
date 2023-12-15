#pragma once
using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;
using namespace std;

ref class DataBase
{
private:
	MySqlConnection^ coneccion;
	String^ user;
	String^ pass;
public:
	DataBase();
	String^ connectionString;
	bool loguin(String^,String^);
	DataTable^ nombre(String^);
	DataTable^ tomarSeccion(String^);
	void abrirConection();
	void cerrarConection();
	DataTable^ guardiaSeccion(String^);
	void insertGuardia(String^);
	void eliminarCarga();


};


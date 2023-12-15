#include "pch.h"
#include "logueo.h"

logueo::logueo()
{
    this->connectionString = "datasource=localhost;port=3306;database=bomberos;username=root;password=root;";
    this->coneccion = gcnew MySqlConnection(this->connectionString);
}

void logueo::abrirConeccion()
{
    this->coneccion->Open();
}

bool logueo::loguin(String^ user, String^ pass)
{
    String^ sql = "select * from usuarios where id_legajo= '" + user + "' and contraseña='" + pass + "'";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->coneccion);
    MySqlDataReader^ reader = cursor->ExecuteReader();
    if (reader->Read()) {
        return true;
    }
    return false;
}

void logueo::cerrarConeccion()
{
    this->coneccion->Close();
}

#include "pch.h"
#include "DataBase.h"


DataBase::DataBase()
{
  this->connectionString="datasource=localhost;port=3306;database=bomberos;username=root;password=root;";
  this->coneccion = gcnew MySqlConnection(this->connectionString);
}

void DataBase::abrirConection()
{
    this->coneccion->Open();
}

bool DataBase::loguin(String^ user, String^ pass)
{
    
    String^ sql= "select * from usuarios where id_legajo= '" + user + "' and contraseña='" + pass + "'";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->coneccion);
     MySqlDataReader^ reader = cursor->ExecuteReader();
    if (reader->Read()) {
        return true;
    }
    return false;
    
}

DataTable^ DataBase::nombre(String^ user)
{
     String^ query = "select jerarquias.nombre, miembros.nombre,miembros.apellido from jerarquias join miembros on miembros.id_jerarquia=jerarquias.id where miembros.id_miembro='" + user + "'";
     MySqlCommand^ cursor = gcnew MySqlCommand(query, this->coneccion);
     MySqlDataAdapter^ reader = gcnew MySqlDataAdapter(cursor);
     DataTable^ secc = gcnew DataTable();
     reader->Fill(secc);
     return secc;
  
}

DataTable^ DataBase::tomarSeccion(String^ user)
{
    String^ query = "select secciones.nombre from secciones join miembrosxseccion on secciones.id = miembrosxseccion.id_seccion where miembrosxseccion.id_miembro = '" + user + "'";
    MySqlCommand^ cursor = gcnew MySqlCommand(query, this->coneccion);
    MySqlDataAdapter^ reader = gcnew MySqlDataAdapter(cursor);
    DataTable^ secc = gcnew DataTable();
    reader->Fill(secc);
    return secc;
}


void DataBase::cerrarConection()
{
    this->coneccion->Close();
}

DataTable^ DataBase::guardiaSeccion( String^ user)
{
    String^ query= "select registro.fecha,registro.hora_entrada,registro.hora_salida, miembros.apellido ,(select j.nombre from jerarquias as j join miembros as m on m.id_jerarquia=j.id) as 'jerarquia' from miembros inner join registro where id_miembro = (select id_miembro from miembrosxseccionwhere id_seccion = (select id_seccion from miembrosxseccion  where id_miembro = '"+user+"')) limit 15;)";
    MySqlCommand^ cursor = gcnew MySqlCommand(query,this->coneccion);
    MySqlDataAdapter ^ data = gcnew  MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
}

void DataBase::insertGuardia(String^)
{
    throw gcnew System::NotImplementedException();
}

void DataBase::eliminarCarga()
{
    throw gcnew System::NotImplementedException();
}

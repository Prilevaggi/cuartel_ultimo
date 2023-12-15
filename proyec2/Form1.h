#pragma once
#include "menuPrincipal.h"
#include "logueo.h"


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;



	/// <summary>
	/// Zusammenfassung f�r Form1
	/// </summary>
public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ usuario;
	private: System::Windows::Forms::TextBox^ contraseña;








	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->usuario = (gcnew System::Windows::Forms::TextBox());
			this->contraseña = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(78, 241);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"INGRESAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(42, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(42, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Contraseña";
			// 
			// usuario
			// 
			this->usuario->Location = System::Drawing::Point(46, 76);
			this->usuario->Name = L"usuario";
			this->usuario->Size = System::Drawing::Size(217, 22);
			this->usuario->TabIndex = 3;
			// 
			// contraseña
			// 
			this->contraseña->Location = System::Drawing::Point(46, 164);
			this->contraseña->Name = L"contraseña";
			this->contraseña->Size = System::Drawing::Size(217, 22);
			this->contraseña->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkRed;
			this->ClientSize = System::Drawing::Size(315, 323);
			this->Controls->Add(this->contraseña);
			this->Controls->Add(this->usuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (usuario->Text != "" && contraseña->Text != "") {
			String^ us = usuario->Text;
			String^ con = contraseña->Text;
			logueo^ user = gcnew logueo();
			user->abrirConeccion();
			bool log = user->loguin(us, con);
			if (log) {
				proyec2::menuPrincipal^ menu = gcnew proyec2::menuPrincipal(us, con);
				this->Visible = false;
				menu->ShowDialog();
	
				usuario->Text = " ";
				contraseña->Text = " ";
				this->Visible = true;
			}
			else
				MessageBox::Show("Usuario Incorrecto");
			user->cerrarConeccion();
		}
		else MessageBox::Show("Complete Campos");


	}


	
};
}

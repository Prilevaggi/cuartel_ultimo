#pragma once

namespace proyec2 {
#include "guardias.h"
#include "servicios.h"
#include "cargarGuardia.h"
#include "DataBase.h"


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuPrincipal
	/// </summary>
	public ref class menuPrincipal : public System::Windows::Forms::Form
	{
		
	private: System::Windows::Forms::Label^ BOMBERO;

	
	private:
		String^ pass;
		String^ user;
		System::Windows::Forms::DataGridView^ seccionusuario;
	public:

	private: System::Windows::Forms::DataGridView^ nom_jerar;
	public:

		 
		menuPrincipal(String^ user,String^ pass)
		{
			InitializeComponent();
			this->user = user;
			this->pass = pass;
			this->db = gcnew DataBase();
		}
		 
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~menuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_contenedor;
	protected:
	private: System::Windows::Forms::Panel^ panel_margen;
	private: System::Windows::Forms::Button^ guardias;
	private: System::Windows::Forms::Panel^ panel_lateral;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: DataBase^ db;
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuPrincipal::typeid));
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->seccionusuario = (gcnew System::Windows::Forms::DataGridView());
			this->nom_jerar = (gcnew System::Windows::Forms::DataGridView());
			this->BOMBERO = (gcnew System::Windows::Forms::Label());
			this->panel_margen = (gcnew System::Windows::Forms::Panel());
			this->guardias = (gcnew System::Windows::Forms::Button());
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel_contenedor->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seccionusuario))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nom_jerar))->BeginInit();
			this->panel_lateral->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->Controls->Add(this->seccionusuario);
			this->panel_contenedor->Controls->Add(this->nom_jerar);
			this->panel_contenedor->Controls->Add(this->BOMBERO);
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenedor->Location = System::Drawing::Point(200, 0);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(608, 449);
			this->panel_contenedor->TabIndex = 1;
			this->panel_contenedor->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &menuPrincipal::panel_contenedor_Paint);
			// 
			// seccionusuario
			// 
			this->seccionusuario->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->seccionusuario->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->seccionusuario->Location = System::Drawing::Point(21, 44);
			this->seccionusuario->Name = L"seccionusuario";
			this->seccionusuario->RowHeadersWidth = 51;
			this->seccionusuario->RowTemplate->Height = 24;
			this->seccionusuario->Size = System::Drawing::Size(332, 26);
			this->seccionusuario->TabIndex = 4;
			// 
			// nom_jerar
			// 
			this->nom_jerar->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->nom_jerar->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->nom_jerar->Location = System::Drawing::Point(21, 12);
			this->nom_jerar->Name = L"nom_jerar";
			this->nom_jerar->RowHeadersWidth = 51;
			this->nom_jerar->RowTemplate->Height = 24;
			this->nom_jerar->Size = System::Drawing::Size(332, 26);
			this->nom_jerar->TabIndex = 3;
			// 
			// BOMBERO
			// 
			this->BOMBERO->AutoSize = true;
			this->BOMBERO->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BOMBERO->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->BOMBERO->Location = System::Drawing::Point(17, 126);
			this->BOMBERO->Name = L"BOMBERO";
			this->BOMBERO->Size = System::Drawing::Size(14, 19);
			this->BOMBERO->TabIndex = 1;
			this->BOMBERO->Text = L" ";
			this->BOMBERO->Click += gcnew System::EventHandler(this, &menuPrincipal::BOMBERO_Click);
			// 
			// panel_margen
			// 
			this->panel_margen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_margen.BackgroundImage")));
			this->panel_margen->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_margen->Location = System::Drawing::Point(0, 0);
			this->panel_margen->Name = L"panel_margen";
			this->panel_margen->Size = System::Drawing::Size(200, 184);
			this->panel_margen->TabIndex = 0;
			// 
			// guardias
			// 
			this->guardias->Cursor = System::Windows::Forms::Cursors::Hand;
			this->guardias->Dock = System::Windows::Forms::DockStyle::Top;
			this->guardias->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guardias->Location = System::Drawing::Point(0, 184);
			this->guardias->Name = L"guardias";
			this->guardias->Size = System::Drawing::Size(200, 49);
			this->guardias->TabIndex = 1;
			this->guardias->Text = L"GUARDIAS";
			this->guardias->UseVisualStyleBackColor = true;
			this->guardias->Click += gcnew System::EventHandler(this, &menuPrincipal::guardias_Click);
			// 
			// panel_lateral
			// 
			this->panel_lateral->Controls->Add(this->linkLabel1);
			this->panel_lateral->Controls->Add(this->button3);
			this->panel_lateral->Controls->Add(this->button2);
			this->panel_lateral->Controls->Add(this->button1);
			this->panel_lateral->Controls->Add(this->guardias);
			this->panel_lateral->Controls->Add(this->panel_margen);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(200, 449);
			this->panel_lateral->TabIndex = 0;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(60, 423);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(69, 17);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"CERRAR ";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &menuPrincipal::linkLabel1_LinkClicked);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(0, 330);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 50);
			this->button3->TabIndex = 4;
			this->button3->Text = L"NUEVO SERVICIO";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(0, 282);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 48);
			this->button2->TabIndex = 3;
			this->button2->Text = L"SERVICIOS";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &menuPrincipal::button2_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(0, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 49);
			this->button1->TabIndex = 2;
			this->button1->Text = L"CARGAR GUARDIA";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &menuPrincipal::button1_Click);
			// 
			// menuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(808, 449);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel_lateral);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"menuPrincipal";
			this->Text = L"menuPrincipal";
			this->panel_contenedor->ResumeLayout(false);
			this->panel_contenedor->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seccionusuario))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nom_jerar))->EndInit();
			this->panel_lateral->ResumeLayout(false);
			this->panel_lateral->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		template<class t>
		void abrirPanel(t formHijo) {

			if (this->panel_contenedor->Controls->Count > 0)
				this->panel_contenedor->Controls->RemoveAt(0);
			formHijo->TopLevel = false;
			formHijo->Dock = DockStyle::Fill;
			this->panel_contenedor->Controls->Add(formHijo);
			this->panel_contenedor->Tag = formHijo;
			formHijo->Show();
		}







	private: System::Void guardias_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyec2::guardias(this->user));
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyec2::cargarGuardia);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyec2::servicios);
	}

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	if (MessageBox::Show("Estas seguro?", "Cerrar Sesion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		this->Visible = false;
	}
}

private: System::Void BOMBERO_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void seccion_Click(System::Object^ sender, System::EventArgs^ e) {
}


	private: System::Void panel_contenedor_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		this->mostrarusuario();
		this->mostrarseccion();
	
}

		   public:void mostrarusuario() {
			   this->db->abrirConection();
			   this->nom_jerar->DataSource = this->db->nombre(user);
			   this->db->cerrarConection();

		   }

			 public:void mostrarseccion() {
				 this->db->abrirConection();
				 this->seccionusuario->DataSource = this->db->tomarSeccion(user);
				 this->db->cerrarConection();

			 }
};
}

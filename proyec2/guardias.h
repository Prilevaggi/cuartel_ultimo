#pragma once
#include "DataBase.h"

namespace proyec2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de guardias
	/// </summary>
	public ref class guardias : public System::Windows::Forms::Form
	{
	private:
		String^ user;
        DataBase^ db;
	public:
		guardias(String^ user)
		{
			this->user = user;
			
			this->db = gcnew DataBase();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~guardias()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGuardias;	
	protected:
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGuardias = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGuardias))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGuardias
			// 
			this->dataGuardias->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGuardias->Location = System::Drawing::Point(12, 59);
			this->dataGuardias->Name = L"dataGuardias";
			this->dataGuardias->RowHeadersWidth = 51;
			this->dataGuardias->RowTemplate->Height = 24;
			this->dataGuardias->Size = System::Drawing::Size(583, 305);
			this->dataGuardias->TabIndex = 0;
			this->dataGuardias->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &guardias::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Guardias registradas:";
			// 
			// guardias
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(607, 449);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGuardias);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"guardias";
			this->Text = L"guardias";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGuardias))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		this->cargaGuardias();

	}

	public: void cargaGuardias() {
		this->db->abrirConection();
		this->dataGuardias->DataSource = this->db->guardiaSeccion(this->user);
		this->db->cerrarConection();

     }
	};
}

#pragma once

namespace Ahorcado {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de juego
	/// </summary>
	public ref class juego : public System::Windows::Forms::Form
	{
	public:
		juego(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~juego()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxLetra;
	protected:

	private: System::Windows::Forms::Label^  labelVida;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(juego::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxLetra = (gcnew System::Windows::Forms::TextBox());
			this->labelVida = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(88, 210);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese una letra:";
			// 
			// textBoxLetra
			// 
			this->textBoxLetra->Location = System::Drawing::Point(249, 215);
			this->textBoxLetra->Name = L"textBoxLetra";
			this->textBoxLetra->Size = System::Drawing::Size(46, 20);
			this->textBoxLetra->TabIndex = 1;
			// 
			// labelVida
			// 
			this->labelVida->AutoSize = true;
			this->labelVida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelVida->Location = System::Drawing::Point(336, 26);
			this->labelVida->Name = L"labelVida";
			this->labelVida->Size = System::Drawing::Size(77, 24);
			this->labelVida->TabIndex = 2;
			this->labelVida->Text = L"Vidas: 3";
			// 
			// juego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(462, 304);
			this->Controls->Add(this->labelVida);
			this->Controls->Add(this->textBoxLetra);
			this->Controls->Add(this->label1);
			this->Name = L"juego";
			this->Text = L"juego";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

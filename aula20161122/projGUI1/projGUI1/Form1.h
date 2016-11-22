#pragma once

namespace projGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnBotao;
	protected: 

	private: System::Windows::Forms::TextBox^  txbUsuario;
	private: System::Windows::Forms::CheckBox^  chkNome;
	private: System::Windows::Forms::CheckBox^  chkIdade;
	protected: 



	private: System::Windows::Forms::Label^  lblMensagem;
	private: System::Windows::Forms::ComboBox^  cmbComidas;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  rdbAzul;

	private: System::Windows::Forms::RadioButton^  rdbVerde;

	private: System::Windows::Forms::RadioButton^  rdbVermelho;

	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnBotao = (gcnew System::Windows::Forms::Button());
			this->txbUsuario = (gcnew System::Windows::Forms::TextBox());
			this->chkNome = (gcnew System::Windows::Forms::CheckBox());
			this->chkIdade = (gcnew System::Windows::Forms::CheckBox());
			this->lblMensagem = (gcnew System::Windows::Forms::Label());
			this->cmbComidas = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rdbAzul = (gcnew System::Windows::Forms::RadioButton());
			this->rdbVerde = (gcnew System::Windows::Forms::RadioButton());
			this->rdbVermelho = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnBotao
			// 
			this->btnBotao->ForeColor = System::Drawing::Color::Red;
			this->btnBotao->Location = System::Drawing::Point(41, 283);
			this->btnBotao->Name = L"btnBotao";
			this->btnBotao->Size = System::Drawing::Size(72, 25);
			this->btnBotao->TabIndex = 0;
			this->btnBotao->Text = L"Executar";
			this->btnBotao->UseVisualStyleBackColor = true;
			this->btnBotao->Click += gcnew System::EventHandler(this, &Form1::btnBotao_Click);
			// 
			// txbUsuario
			// 
			this->txbUsuario->Location = System::Drawing::Point(31, 47);
			this->txbUsuario->Name = L"txbUsuario";
			this->txbUsuario->Size = System::Drawing::Size(207, 20);
			this->txbUsuario->TabIndex = 1;
			// 
			// chkNome
			// 
			this->chkNome->AutoSize = true;
			this->chkNome->Location = System::Drawing::Point(31, 106);
			this->chkNome->Name = L"chkNome";
			this->chkNome->Size = System::Drawing::Size(54, 17);
			this->chkNome->TabIndex = 2;
			this->chkNome->Text = L"Nome";
			this->chkNome->UseVisualStyleBackColor = true;
			// 
			// chkIdade
			// 
			this->chkIdade->AutoSize = true;
			this->chkIdade->Location = System::Drawing::Point(31, 129);
			this->chkIdade->Name = L"chkIdade";
			this->chkIdade->Size = System::Drawing::Size(53, 17);
			this->chkIdade->TabIndex = 3;
			this->chkIdade->Text = L"Idade";
			this->chkIdade->UseVisualStyleBackColor = true;
			// 
			// lblMensagem
			// 
			this->lblMensagem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMensagem->Location = System::Drawing::Point(28, 9);
			this->lblMensagem->Name = L"lblMensagem";
			this->lblMensagem->Size = System::Drawing::Size(503, 35);
			this->lblMensagem->TabIndex = 4;
			this->lblMensagem->Text = L"Aguardando...";
			this->lblMensagem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// cmbComidas
			// 
			this->cmbComidas->FormattingEnabled = true;
			this->cmbComidas->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Ração", L"Carne", L"Rato", L"Cenoura", L"Alface"});
			this->cmbComidas->Location = System::Drawing::Point(12, 178);
			this->cmbComidas->Name = L"cmbComidas";
			this->cmbComidas->Size = System::Drawing::Size(140, 21);
			this->cmbComidas->TabIndex = 5;
			this->cmbComidas->Text = L"Selecione uma opção...";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rdbAzul);
			this->groupBox1->Controls->Add(this->rdbVerde);
			this->groupBox1->Controls->Add(this->rdbVermelho);
			this->groupBox1->Location = System::Drawing::Point(168, 84);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(114, 134);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cores";
			// 
			// rdbAzul
			// 
			this->rdbAzul->AutoSize = true;
			this->rdbAzul->Location = System::Drawing::Point(7, 94);
			this->rdbAzul->Name = L"rdbAzul";
			this->rdbAzul->Size = System::Drawing::Size(45, 17);
			this->rdbAzul->TabIndex = 2;
			this->rdbAzul->TabStop = true;
			this->rdbAzul->Text = L"Azul";
			this->rdbAzul->UseVisualStyleBackColor = true;
			// 
			// rdbVerde
			// 
			this->rdbVerde->AutoSize = true;
			this->rdbVerde->Location = System::Drawing::Point(7, 70);
			this->rdbVerde->Name = L"rdbVerde";
			this->rdbVerde->Size = System::Drawing::Size(53, 17);
			this->rdbVerde->TabIndex = 1;
			this->rdbVerde->TabStop = true;
			this->rdbVerde->Text = L"Verde";
			this->rdbVerde->UseVisualStyleBackColor = true;
			// 
			// rdbVermelho
			// 
			this->rdbVermelho->AutoSize = true;
			this->rdbVermelho->Location = System::Drawing::Point(7, 47);
			this->rdbVermelho->Name = L"rdbVermelho";
			this->rdbVermelho->Size = System::Drawing::Size(69, 17);
			this->rdbVermelho->TabIndex = 0;
			this->rdbVermelho->TabStop = true;
			this->rdbVermelho->Text = L"Vermelho";
			this->rdbVermelho->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(289, 73);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 188);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(567, 320);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->cmbComidas);
			this->Controls->Add(this->lblMensagem);
			this->Controls->Add(this->chkIdade);
			this->Controls->Add(this->chkNome);
			this->Controls->Add(this->txbUsuario);
			this->Controls->Add(this->btnBotao);
			this->Name = L"Form1";
			this->Text = L"Gato";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			cmbComidas->SelectedIndex = 0;
		 }
	private: System::Void btnBotao_Click(System::Object^  sender, System::EventArgs^  e) {
				lblMensagem->Text = "Meu gato, ";
				if(chkNome->Checked)
					lblMensagem->Text += "Francisco, ";
				if(chkIdade->Checked)
					lblMensagem->Text += "2 anos.";
				/*switch(cmbComidas->SelectedIndex){
				case 0: ... break;
				case 1: ... break;
			 }*/
				lblMensagem->Text = lblMensagem->Text + "gosta de " +
					cmbComidas->SelectedItem->ToString() + ", ";
				lblMensagem->Text = lblMensagem->Text + txbUsuario->Text + ".";
				if(rdbVermelho->Checked)
					lblMensagem->ForeColor = System::Drawing::Color::Red;
				if(rdbVerde->Checked)
					lblMensagem->ForeColor = System::Drawing::Color::ForestGreen;
				if(rdbAzul->Checked)
					lblMensagem->ForeColor = System::Drawing::Color::AliceBlue;
			 }
};
}


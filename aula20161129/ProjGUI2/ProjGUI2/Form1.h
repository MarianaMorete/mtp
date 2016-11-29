#include <cmath>

#pragma once

namespace ProjGUI2 {

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
	private: System::Windows::Forms::Label^  lblDisplay;
	protected: 

	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnAdicao;
	private: System::Windows::Forms::Button^  btnCE;
	protected: 





	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;


	private: System::Windows::Forms::Button^  btn1;

	private: System::Windows::Forms::Button^  btn0;

	private: System::Windows::Forms::Button^  btnVirgula;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnSubtracao;
	private: System::Windows::Forms::Button^  btnFatorial;
	private: System::Windows::Forms::Button^  btnPotenciacao;







	private: System::Windows::Forms::Button^  btnMultiplicacao;
	private: System::Windows::Forms::Button^  btnDivisao;


	private: System::Windows::Forms::Button^  btnPosneg;
	private: System::Windows::Forms::Button^  btnSquareroot;
	private: System::Windows::Forms::Button^  btnIgual;






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
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnAdicao = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnVirgula = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnSubtracao = (gcnew System::Windows::Forms::Button());
			this->btnFatorial = (gcnew System::Windows::Forms::Button());
			this->btnPotenciacao = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicacao = (gcnew System::Windows::Forms::Button());
			this->btnDivisao = (gcnew System::Windows::Forms::Button());
			this->btnPosneg = (gcnew System::Windows::Forms::Button());
			this->btnSquareroot = (gcnew System::Windows::Forms::Button());
			this->btnIgual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(12, 20);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(273, 40);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::Red;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(13, 88);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(43, 43);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::Red;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(62, 88);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(43, 43);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn9->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(111, 88);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(43, 43);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btnAdicao
			// 
			this->btnAdicao->BackColor = System::Drawing::Color::Yellow;
			this->btnAdicao->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAdicao->Location = System::Drawing::Point(160, 88);
			this->btnAdicao->Name = L"btnAdicao";
			this->btnAdicao->Size = System::Drawing::Size(43, 43);
			this->btnAdicao->TabIndex = 1;
			this->btnAdicao->Text = L"+";
			this->btnAdicao->UseVisualStyleBackColor = false;
			this->btnAdicao->Click += gcnew System::EventHandler(this, &Form1::btnAdicao_Click);
			// 
			// btnCE
			// 
			this->btnCE->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Elephant", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(209, 88);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(43, 43);
			this->btnCE->TabIndex = 1;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = false;
			this->btnCE->Click += gcnew System::EventHandler(this, &Form1::btnCE_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Red;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(13, 137);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(43, 43);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn5->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(62, 137);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(43, 43);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn1->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(13, 186);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(43, 43);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::Yellow;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(13, 235);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(43, 43);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnVirgula
			// 
			this->btnVirgula->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnVirgula->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnVirgula->Location = System::Drawing::Point(62, 235);
			this->btnVirgula->Name = L"btnVirgula";
			this->btnVirgula->Size = System::Drawing::Size(43, 43);
			this->btnVirgula->TabIndex = 1;
			this->btnVirgula->Text = L",";
			this->btnVirgula->UseVisualStyleBackColor = false;
			this->btnVirgula->Click += gcnew System::EventHandler(this, &Form1::btnVirgula_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Yellow;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(62, 186);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(43, 43);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn3->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(111, 186);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(43, 43);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Yellow;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(111, 137);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(43, 43);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btnSubtracao
			// 
			this->btnSubtracao->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnSubtracao->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSubtracao->Location = System::Drawing::Point(160, 137);
			this->btnSubtracao->Name = L"btnSubtracao";
			this->btnSubtracao->Size = System::Drawing::Size(43, 43);
			this->btnSubtracao->TabIndex = 1;
			this->btnSubtracao->Text = L"-";
			this->btnSubtracao->UseVisualStyleBackColor = false;
			this->btnSubtracao->Click += gcnew System::EventHandler(this, &Form1::btnSubtracao_Click);
			// 
			// btnFatorial
			// 
			this->btnFatorial->BackColor = System::Drawing::Color::Blue;
			this->btnFatorial->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnFatorial->Location = System::Drawing::Point(209, 137);
			this->btnFatorial->Name = L"btnFatorial";
			this->btnFatorial->Size = System::Drawing::Size(43, 43);
			this->btnFatorial->TabIndex = 1;
			this->btnFatorial->Text = L"n!";
			this->btnFatorial->UseVisualStyleBackColor = false;
			this->btnFatorial->Click += gcnew System::EventHandler(this, &Form1::btnFatorial_Click);
			// 
			// btnPotenciacao
			// 
			this->btnPotenciacao->BackColor = System::Drawing::Color::Purple;
			this->btnPotenciacao->Font = (gcnew System::Drawing::Font(L"Elephant", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPotenciacao->Location = System::Drawing::Point(209, 186);
			this->btnPotenciacao->Name = L"btnPotenciacao";
			this->btnPotenciacao->Size = System::Drawing::Size(43, 43);
			this->btnPotenciacao->TabIndex = 1;
			this->btnPotenciacao->Text = L"x^y";
			this->btnPotenciacao->UseVisualStyleBackColor = false;
			this->btnPotenciacao->Click += gcnew System::EventHandler(this, &Form1::btnPotenciacao_Click);
			// 
			// btnMultiplicacao
			// 
			this->btnMultiplicacao->BackColor = System::Drawing::Color::Blue;
			this->btnMultiplicacao->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMultiplicacao->Location = System::Drawing::Point(160, 186);
			this->btnMultiplicacao->Name = L"btnMultiplicacao";
			this->btnMultiplicacao->Size = System::Drawing::Size(43, 43);
			this->btnMultiplicacao->TabIndex = 1;
			this->btnMultiplicacao->Text = L"x";
			this->btnMultiplicacao->UseVisualStyleBackColor = false;
			this->btnMultiplicacao->Click += gcnew System::EventHandler(this, &Form1::btnMultiplicacao_Click);
			// 
			// btnDivisao
			// 
			this->btnDivisao->BackColor = System::Drawing::Color::Purple;
			this->btnDivisao->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDivisao->Location = System::Drawing::Point(160, 235);
			this->btnDivisao->Name = L"btnDivisao";
			this->btnDivisao->Size = System::Drawing::Size(43, 43);
			this->btnDivisao->TabIndex = 1;
			this->btnDivisao->Text = L"÷";
			this->btnDivisao->UseVisualStyleBackColor = false;
			this->btnDivisao->Click += gcnew System::EventHandler(this, &Form1::btnDivisao_Click);
			// 
			// btnPosneg
			// 
			this->btnPosneg->BackColor = System::Drawing::Color::Blue;
			this->btnPosneg->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPosneg->Location = System::Drawing::Point(111, 235);
			this->btnPosneg->Name = L"btnPosneg";
			this->btnPosneg->Size = System::Drawing::Size(43, 43);
			this->btnPosneg->TabIndex = 1;
			this->btnPosneg->Text = L"±";
			this->btnPosneg->UseVisualStyleBackColor = false;
			this->btnPosneg->Click += gcnew System::EventHandler(this, &Form1::btnPosneg_Click);
			// 
			// btnSquareroot
			// 
			this->btnSquareroot->BackColor = System::Drawing::Color::Purple;
			this->btnSquareroot->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSquareroot->Location = System::Drawing::Point(209, 235);
			this->btnSquareroot->Name = L"btnSquareroot";
			this->btnSquareroot->Size = System::Drawing::Size(43, 43);
			this->btnSquareroot->TabIndex = 1;
			this->btnSquareroot->Text = L"√¯";
			this->btnSquareroot->UseVisualStyleBackColor = false;
			this->btnSquareroot->Click += gcnew System::EventHandler(this, &Form1::btnSquareroot_Click);
			// 
			// btnIgual
			// 
			this->btnIgual->BackColor = System::Drawing::Color::White;
			this->btnIgual->Font = (gcnew System::Drawing::Font(L"Elephant", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnIgual->Location = System::Drawing::Point(62, 290);
			this->btnIgual->Name = L"btnIgual";
			this->btnIgual->Size = System::Drawing::Size(141, 43);
			this->btnIgual->TabIndex = 1;
			this->btnIgual->Text = L"=";
			this->btnIgual->UseVisualStyleBackColor = false;
			this->btnIgual->Click += gcnew System::EventHandler(this, &Form1::btnIgual_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(297, 345);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btnPosneg);
			this->Controls->Add(this->btnIgual);
			this->Controls->Add(this->btnSquareroot);
			this->Controls->Add(this->btnDivisao);
			this->Controls->Add(this->btnMultiplicacao);
			this->Controls->Add(this->btnPotenciacao);
			this->Controls->Add(this->btnFatorial);
			this->Controls->Add(this->btnSubtracao);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btnVirgula);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnAdicao);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->lblDisplay);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calculadora";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#define MAXDIGITOS 23
		bool flagVirgula;
		bool flagResultado;
		double memoria;
		char operacao;
		void liberaDisplay()
		{
			lblDisplay->Text = "0";
			 flagVirgula = false;
			 flagResultado = false;
		}
		double fatorial(double numero)
		{
			return (numero > 1)? numero*fatorial(numero-1) : 1;
		}
#pragma endregion
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 flagVirgula = false;
		 flagResultado = false;
		 memoria = 0.0;
		 operacao = '\0';
		 }


private: System::Void btnCE_Click(System::Object^  sender, System::EventArgs^  e) {
			lblDisplay->Text = "0";
			flagVirgula = false;
		 }


private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text->Length < MAXDIGITOS){
			 if(lblDisplay->Text != "0")
				lblDisplay->Text = lblDisplay->Text + "0";
			if(flagResultado){
				lblDisplay->Text = "0";
				flagResultado = false;
			}
		 }
		}

private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
		if(lblDisplay->Text->Length < MAXDIGITOS){
			 if(lblDisplay->Text != "0" && !flagResultado)
				lblDisplay->Text = lblDisplay->Text + "1";
			else{
				lblDisplay->Text = "1";
				flagResultado = false;
			}
		 }
		}
private: System::Void btnVirgula_Click(System::Object^  sender, System::EventArgs^  e) {
		if(lblDisplay->Text->Length < MAXDIGITOS){
			 if (!flagVirgula){	
			 lblDisplay->Text = lblDisplay->Text + ",";
			 flagVirgula = true;
			}
		 }
		 }



private: System::Void btnPosneg_Click(System::Object^  sender, System::EventArgs^  e) {
			if (lblDisplay->Text != "0"){
			 //versao 1
			 /*double numero = System::Convert::ToDouble(lblDisplay->Text);
			 lblDisplay->Text = System::Convert::ToString(numero*(-1));*/
			//versao 2
			 if(lblDisplay->Text->Substring(0,1) == "-")
				 lblDisplay->Text = lblDisplay->Text->Substring(1);
			 else
				 lblDisplay->Text = "-" + lblDisplay->Text;
			}
		 }
private: System::Void btnSquareroot_Click(System::Object^  sender, System::EventArgs^  e) {
			double numero = System::Convert::ToDouble(lblDisplay->Text);
			 lblDisplay->Text = System::Convert::ToString(sqrt(numero));
			 if(lblDisplay->Text->Length > MAXDIGITOS)
				lblDisplay->Text = lblDisplay->Text->Substring(0,MAXDIGITOS);
			flagResultado = true;
		 }

private: System::Void btnAdicao_Click(System::Object^  sender, System::EventArgs^  e) {
				memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '+';
			 liberaDisplay();
		 }
private: System::Void btnIgual_Click(System::Object^  sender, System::EventArgs^  e) {
			double numero = System::Convert::ToDouble(lblDisplay->Text);
			switch (operacao) {
				case '+': memoria += numero; break;
				case '-': memoria -= numero; break;
				case '*': memoria *= numero; break;
				case '/': memoria /= numero; break;
				case '^': memoria = Math::Pow(memoria,numero); break;
			}
			if(memoria > Math::Pow(10,MAXDIGITOS) -1)
				lblDisplay->Text = memoria.ToString("e");
			else
				lblDisplay->Text = memoria.ToString();
			flagResultado = true;
		 }


private: System::Void btnSubtracao_Click(System::Object^  sender, System::EventArgs^  e) {
		 memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '-';
			 liberaDisplay();
		 }
private: System::Void btnMultiplicacao_Click(System::Object^  sender, System::EventArgs^  e) {
		 memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '*';
			 liberaDisplay();
		 }
private: System::Void btnDivisao_Click(System::Object^  sender, System::EventArgs^  e) {
		 memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '/';
			 liberaDisplay();
		 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(lblDisplay->Text->Length < MAXDIGITOS){
			 if(lblDisplay->Text != "0" && !flagResultado)
				lblDisplay->Text = lblDisplay->Text + "2";
			else{
				lblDisplay->Text = "2";
				flagResultado = false;
			}
		 }
		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(lblDisplay->Text->Length < MAXDIGITOS){
			 if(lblDisplay->Text != "0" && !flagResultado)
				lblDisplay->Text = lblDisplay->Text + "3";
			else{
				lblDisplay->Text = "3";
				flagResultado = false;
			}
		 }
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(lblDisplay->Text->Length < MAXDIGITOS){
			 if(lblDisplay->Text != "0" && !flagResultado)
				lblDisplay->Text = lblDisplay->Text + "4";
			else{
				lblDisplay->Text = "4";
				flagResultado = false;
			}
		 }
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(lblDisplay->Text->Length < MAXDIGITOS){
			 if(lblDisplay->Text != "0" && !flagResultado)
				lblDisplay->Text = lblDisplay->Text + "5";
			else{
				lblDisplay->Text = "5";
				flagResultado = false;
			}
		 }
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(lblDisplay->Text->Length < MAXDIGITOS){
			 if(lblDisplay->Text != "0" && !flagResultado)
				lblDisplay->Text = lblDisplay->Text + "6";
			else{
				lblDisplay->Text = "6";
				flagResultado = false;
			}
		 }
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(lblDisplay->Text->Length < MAXDIGITOS){
			 if(lblDisplay->Text != "0" && !flagResultado)
				lblDisplay->Text = lblDisplay->Text + "7";
			else{
				lblDisplay->Text = "7";
				flagResultado = false;
			}
		 }
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(lblDisplay->Text->Length < MAXDIGITOS){
			 if(lblDisplay->Text != "0" && !flagResultado)
				lblDisplay->Text = lblDisplay->Text + "8";
			else{
				lblDisplay->Text = "8";
				flagResultado = false;
			}
		 }
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(lblDisplay->Text->Length < MAXDIGITOS){
			 if(lblDisplay->Text != "0" && !flagResultado)
				lblDisplay->Text = lblDisplay->Text + "9";
			else{
				lblDisplay->Text = "9";
				flagResultado = false;
			}
		 }
		 }
private: System::Void btnPotenciacao_Click(System::Object^  sender, System::EventArgs^  e) {
		 memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '^';
			 liberaDisplay();
		 }
private: System::Void btnFatorial_Click(System::Object^  sender, System::EventArgs^  e) {
		 double numero = System::Convert::ToDouble(lblDisplay->Text);
		 lblDisplay->Text = System::Convert::ToString(fatorial(numero));
		 flagResultado = true;
		 }
};
}


#pragma once

#include<iostream>

namespace MyFirstUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		double result = 0;
		double bufNum = 0;
		bool cleanDisplay = true;
	private: System::Windows::Forms::Button^ button1;



		char operation = '+';

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Button_Close;
	protected:

	private: System::Windows::Forms::Label^ Display;
	private: System::Windows::Forms::Button^ button_AC;
	private: System::Windows::Forms::Button^ Button_C;


	private: System::Windows::Forms::Button^ Button_Result;
	private: System::Windows::Forms::Button^ button_7;
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_9;
	private: System::Windows::Forms::Button^ button_div;







	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_6;
	private: System::Windows::Forms::Button^ button_mult;






	private: System::Windows::Forms::Button^ button_1;
	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_3;



	private: System::Windows::Forms::Button^ Button_Sub;
	private: System::Windows::Forms::Button^ button_dot;



	private: System::Windows::Forms::Button^ button_0;
	private: System::Windows::Forms::Button^ button_sign_change;




	private: System::Windows::Forms::Button^ Button_Add;



	protected:

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Button_Close = (gcnew System::Windows::Forms::Button());
			this->Display = (gcnew System::Windows::Forms::Label());
			this->button_AC = (gcnew System::Windows::Forms::Button());
			this->Button_C = (gcnew System::Windows::Forms::Button());
			this->Button_Result = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_div = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_mult = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->Button_Sub = (gcnew System::Windows::Forms::Button());
			this->button_dot = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_sign_change = (gcnew System::Windows::Forms::Button());
			this->Button_Add = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Button_Close
			// 
			this->Button_Close->BackColor = System::Drawing::Color::Gray;
			this->Button_Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_Close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_Close->ForeColor = System::Drawing::Color::White;
			this->Button_Close->Location = System::Drawing::Point(240, 12);
			this->Button_Close->Name = L"Button_Close";
			this->Button_Close->Size = System::Drawing::Size(30, 30);
			this->Button_Close->TabIndex = 0;
			this->Button_Close->Text = L"X";
			this->Button_Close->UseVisualStyleBackColor = false;
			this->Button_Close->Click += gcnew System::EventHandler(this, &MyForm::Button_Close_Click);
			// 
			// Display
			// 
			this->Display->BackColor = System::Drawing::Color::White;
			this->Display->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Display->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Display->ForeColor = System::Drawing::Color::Black;
			this->Display->Location = System::Drawing::Point(12, 54);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(258, 40);
			this->Display->TabIndex = 1;
			this->Display->Text = L"0";
			this->Display->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// button_AC
			// 
			this->button_AC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button_AC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_AC->ForeColor = System::Drawing::Color::White;
			this->button_AC->Location = System::Drawing::Point(12, 107);
			this->button_AC->Name = L"button_AC";
			this->button_AC->Size = System::Drawing::Size(60, 60);
			this->button_AC->TabIndex = 0;
			this->button_AC->Text = L"AC";
			this->button_AC->UseVisualStyleBackColor = false;
			this->button_AC->Click += gcnew System::EventHandler(this, &MyForm::Button_AC_Click);
			// 
			// Button_C
			// 
			this->Button_C->BackColor = System::Drawing::Color::Gray;
			this->Button_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_C->ForeColor = System::Drawing::Color::White;
			this->Button_C->Location = System::Drawing::Point(78, 107);
			this->Button_C->Name = L"Button_C";
			this->Button_C->Size = System::Drawing::Size(60, 60);
			this->Button_C->TabIndex = 0;
			this->Button_C->Text = L"C";
			this->Button_C->UseVisualStyleBackColor = false;
			this->Button_C->Click += gcnew System::EventHandler(this, &MyForm::Button_C_Click);
			// 
			// Button_Result
			// 
			this->Button_Result->BackColor = System::Drawing::Color::Gray;
			this->Button_Result->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_Result->ForeColor = System::Drawing::Color::White;
			this->Button_Result->Location = System::Drawing::Point(144, 107);
			this->Button_Result->Name = L"Button_Result";
			this->Button_Result->Size = System::Drawing::Size(126, 60);
			this->Button_Result->TabIndex = 0;
			this->Button_Result->Text = L"=";
			this->Button_Result->UseVisualStyleBackColor = false;
			this->Button_Result->Click += gcnew System::EventHandler(this, &MyForm::Button_Action_Click);
			// 
			// button_7
			// 
			this->button_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_7->ForeColor = System::Drawing::Color::White;
			this->button_7->Location = System::Drawing::Point(12, 173);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(60, 60);
			this->button_7->TabIndex = 0;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &MyForm::Button_Num_Click);
			// 
			// button_8
			// 
			this->button_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_8->ForeColor = System::Drawing::Color::White;
			this->button_8->Location = System::Drawing::Point(78, 173);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(60, 60);
			this->button_8->TabIndex = 0;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &MyForm::Button_Num_Click);
			// 
			// button_9
			// 
			this->button_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_9->ForeColor = System::Drawing::Color::White;
			this->button_9->Location = System::Drawing::Point(144, 173);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(60, 60);
			this->button_9->TabIndex = 0;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &MyForm::Button_Num_Click);
			// 
			// button_div
			// 
			this->button_div->BackColor = System::Drawing::Color::Gray;
			this->button_div->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_div->ForeColor = System::Drawing::Color::White;
			this->button_div->Location = System::Drawing::Point(210, 173);
			this->button_div->Name = L"button_div";
			this->button_div->Size = System::Drawing::Size(60, 60);
			this->button_div->TabIndex = 0;
			this->button_div->Text = L"/";
			this->button_div->UseVisualStyleBackColor = false;
			this->button_div->Click += gcnew System::EventHandler(this, &MyForm::Button_Action_Click);
			// 
			// button_4
			// 
			this->button_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_4->ForeColor = System::Drawing::Color::White;
			this->button_4->Location = System::Drawing::Point(12, 239);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(60, 60);
			this->button_4->TabIndex = 0;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &MyForm::Button_Num_Click);
			// 
			// button_5
			// 
			this->button_5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_5->ForeColor = System::Drawing::Color::White;
			this->button_5->Location = System::Drawing::Point(78, 239);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(60, 60);
			this->button_5->TabIndex = 0;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &MyForm::Button_Num_Click);
			// 
			// button_6
			// 
			this->button_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_6->ForeColor = System::Drawing::Color::White;
			this->button_6->Location = System::Drawing::Point(144, 239);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(60, 60);
			this->button_6->TabIndex = 0;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &MyForm::Button_Num_Click);
			// 
			// button_mult
			// 
			this->button_mult->BackColor = System::Drawing::Color::Gray;
			this->button_mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mult->ForeColor = System::Drawing::Color::White;
			this->button_mult->Location = System::Drawing::Point(210, 239);
			this->button_mult->Name = L"button_mult";
			this->button_mult->Size = System::Drawing::Size(60, 60);
			this->button_mult->TabIndex = 0;
			this->button_mult->Text = L"x";
			this->button_mult->UseVisualStyleBackColor = false;
			this->button_mult->Click += gcnew System::EventHandler(this, &MyForm::Button_Action_Click);
			// 
			// button_1
			// 
			this->button_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_1->ForeColor = System::Drawing::Color::White;
			this->button_1->Location = System::Drawing::Point(12, 305);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(60, 60);
			this->button_1->TabIndex = 0;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &MyForm::Button_Num_Click);
			// 
			// button_2
			// 
			this->button_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_2->ForeColor = System::Drawing::Color::White;
			this->button_2->Location = System::Drawing::Point(78, 305);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(60, 60);
			this->button_2->TabIndex = 0;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &MyForm::Button_Num_Click);
			// 
			// button_3
			// 
			this->button_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_3->ForeColor = System::Drawing::Color::White;
			this->button_3->Location = System::Drawing::Point(144, 305);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(60, 60);
			this->button_3->TabIndex = 0;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &MyForm::Button_Num_Click);
			// 
			// Button_Sub
			// 
			this->Button_Sub->BackColor = System::Drawing::Color::Gray;
			this->Button_Sub->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_Sub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_Sub->ForeColor = System::Drawing::Color::White;
			this->Button_Sub->Location = System::Drawing::Point(210, 305);
			this->Button_Sub->Name = L"Button_Sub";
			this->Button_Sub->Size = System::Drawing::Size(60, 60);
			this->Button_Sub->TabIndex = 0;
			this->Button_Sub->Text = L"-";
			this->Button_Sub->UseVisualStyleBackColor = false;
			this->Button_Sub->Click += gcnew System::EventHandler(this, &MyForm::Button_Action_Click);
			// 
			// button_dot
			// 
			this->button_dot->BackColor = System::Drawing::Color::Gray;
			this->button_dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dot->ForeColor = System::Drawing::Color::White;
			this->button_dot->Location = System::Drawing::Point(12, 371);
			this->button_dot->Name = L"button_dot";
			this->button_dot->Size = System::Drawing::Size(60, 60);
			this->button_dot->TabIndex = 0;
			this->button_dot->Text = L".";
			this->button_dot->UseVisualStyleBackColor = false;
			this->button_dot->Click += gcnew System::EventHandler(this, &MyForm::Button_Dot_Click);
			// 
			// button_0
			// 
			this->button_0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_0->ForeColor = System::Drawing::Color::White;
			this->button_0->Location = System::Drawing::Point(78, 371);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(60, 60);
			this->button_0->TabIndex = 0;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &MyForm::Button_Num_Click);
			// 
			// button_sign_change
			// 
			this->button_sign_change->BackColor = System::Drawing::Color::Gray;
			this->button_sign_change->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_sign_change->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_sign_change->ForeColor = System::Drawing::Color::White;
			this->button_sign_change->Location = System::Drawing::Point(144, 371);
			this->button_sign_change->Name = L"button_sign_change";
			this->button_sign_change->Size = System::Drawing::Size(60, 60);
			this->button_sign_change->TabIndex = 0;
			this->button_sign_change->Text = L"+/-";
			this->button_sign_change->UseVisualStyleBackColor = false;
			this->button_sign_change->Click += gcnew System::EventHandler(this, &MyForm::Button_Sign_Change_Click);
			// 
			// Button_Add
			// 
			this->Button_Add->BackColor = System::Drawing::Color::Gray;
			this->Button_Add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_Add->ForeColor = System::Drawing::Color::White;
			this->Button_Add->Location = System::Drawing::Point(210, 371);
			this->Button_Add->Name = L"Button_Add";
			this->Button_Add->Size = System::Drawing::Size(60, 60);
			this->Button_Add->TabIndex = 0;
			this->Button_Add->Text = L"+";
			this->Button_Add->UseVisualStyleBackColor = false;
			this->Button_Add->Click += gcnew System::EventHandler(this, &MyForm::Button_Action_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Messege";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button_Close_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(282, 443);
			this->Controls->Add(this->Display);
			this->Controls->Add(this->Button_Add);
			this->Controls->Add(this->Button_Sub);
			this->Controls->Add(this->button_sign_change);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_mult);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_div);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->Button_Result);
			this->Controls->Add(this->button_dot);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->Button_C);
			this->Controls->Add(this->button_AC);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Button_Close);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Сalculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		void Calculation(void) {
			switch (operation)
			{
			case '=': result += bufNum;
				break;
			case '+': result += bufNum;
				break;
			case '-': result -= bufNum;
				break;
			case 'x': result *= bufNum;
				break;
			case '/': result = result / bufNum;
				break;
			default:
				break;
			}
		}

	private: System::Void Button_Close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Button_AC_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "0";
		result = 0;
		operation = '+';
	}
	private: System::Void Button_C_Click(System::Object^ sender, System::EventArgs^ e) {
		Display->Text = "0";
	}
	private: System::Void Button_Sign_Change_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!Display->Text->Contains("-")) {
			Display->Text = "-" + Display->Text;
		}
		else {
			Display->Text = Display->Text->Remove(0, 1);
		}
		if (operation == '=') {
			result = System::Convert::ToDouble(Display->Text);

		}
	}
	private: System::Void Button_Dot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Display->Text && !Display->Text->Contains(",")){
			Display->Text += ",";
		}
	}
	private: System::Void Button_Num_Click(System::Object^ sender, System::EventArgs^ e) {
		if (operation == '=') { 
			result = 0;
			operation = '+';
		}
		if (cleanDisplay) {
			Display->Text = "";
			cleanDisplay = false;
		}
		Display->Text += safe_cast<Button^>(sender)->Text;
	}
	private: System::Void Button_Messege_Click(System::Object^ sender, System::EventArgs^ e) {
		auto answer = MessageBox::Show("Сhoose an answer!", "Messege", MessageBoxButtons::YesNoCancel , MessageBoxIcon::None );
		switch (answer)
		{
		case ::DialogResult::Cancel:

			break;
		case ::DialogResult::Yes:

			break;
		case ::DialogResult::No:

			break;
		default:
			break;
		}
	}
	private: System::Void Button_Action_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Display->Text == "0" && operation == '/') {
			MessageBox::Show("Divide by 0!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (cleanDisplay && !operation == '=') return;
		cleanDisplay = true;

		bufNum = System::Convert::ToDouble(Display->Text);
		switch (operation)
		{
		case '=':
			break;
		case '+': result += bufNum;
			break;
		case '-': result -= bufNum;
			break;
		case 'x': result *= bufNum;
			break;
		case '/': result = result / bufNum;
			break;
		default:
			break;
		}
		bufNum = 0;


		Display->Text = System::Convert::ToString(result);
		operation = System::Convert::ToChar(safe_cast<Button^>(sender)->Text);

	}
	};
}

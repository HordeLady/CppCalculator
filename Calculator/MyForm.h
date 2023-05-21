#pragma once
#include <math.h>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: double num1 = 0;
	private: char op;
	private: System::Windows::Forms::Label^ labOutput;
	private: double dblOutput;
	private: bool isEndOperation = true;


	private: System::Windows::Forms::Button^ btnDel;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnDouble;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ btnResult;

	private: System::Windows::Forms::Button^ btnMin;
	private: System::Windows::Forms::Button^ btnBack;


	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnDiv;


	private: System::Windows::Forms::Button^ btnMult;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btnSqrt;




	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->labOutput = (gcnew System::Windows::Forms::Label());
			this->btnDel = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnDouble = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->btnMin = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labOutput
			// 
			this->labOutput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->labOutput->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labOutput->Location = System::Drawing::Point(24, 27);
			this->labOutput->Name = L"labOutput";
			this->labOutput->Size = System::Drawing::Size(291, 87);
			this->labOutput->TabIndex = 1;
			this->labOutput->Text = L"0";
			this->labOutput->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnDel
			// 
			this->btnDel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnDel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDel->Location = System::Drawing::Point(33, 136);
			this->btnDel->Name = L"btnDel";
			this->btnDel->Size = System::Drawing::Size(63, 64);
			this->btnDel->TabIndex = 4;
			this->btnDel->Text = L"AC";
			this->btnDel->UseVisualStyleBackColor = false;
			this->btnDel->Click += gcnew System::EventHandler(this, &MyForm::BtnDel_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(102, 276);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 64);
			this->button2->TabIndex = 5;
			this->button2->Text = L"5";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(102, 346);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(63, 64);
			this->button3->TabIndex = 6;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(102, 206);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(63, 64);
			this->button4->TabIndex = 7;
			this->button4->Text = L"8";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// btnDouble
			// 
			this->btnDouble->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnDouble->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDouble->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDouble->Location = System::Drawing::Point(174, 416);
			this->btnDouble->Name = L"btnDouble";
			this->btnDouble->Size = System::Drawing::Size(63, 64);
			this->btnDouble->TabIndex = 8;
			this->btnDouble->Text = L",";
			this->btnDouble->UseVisualStyleBackColor = false;
			this->btnDouble->Click += gcnew System::EventHandler(this, &MyForm::BtnDouble_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(33, 346);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(63, 64);
			this->button6->TabIndex = 9;
			this->button6->Text = L"1";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(33, 276);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(63, 64);
			this->button7->TabIndex = 10;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(33, 206);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(63, 64);
			this->button8->TabIndex = 11;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// btnResult
			// 
			this->btnResult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnResult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResult->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnResult->Location = System::Drawing::Point(243, 416);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(63, 64);
			this->btnResult->TabIndex = 12;
			this->btnResult->Text = L"=";
			this->btnResult->UseVisualStyleBackColor = false;
			this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::BtnResult_Click);
			// 
			// btnMin
			// 
			this->btnMin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnMin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMin->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMin->Location = System::Drawing::Point(243, 206);
			this->btnMin->Name = L"btnMin";
			this->btnMin->Size = System::Drawing::Size(63, 64);
			this->btnMin->TabIndex = 15;
			this->btnMin->Text = L"-";
			this->btnMin->UseVisualStyleBackColor = false;
			this->btnMin->Click += gcnew System::EventHandler(this, &MyForm::BtnMin_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBack->Location = System::Drawing::Point(33, 416);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(63, 64);
			this->btnBack->TabIndex = 16;
			this->btnBack->Text = L"+/-";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &MyForm::BtnBack_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(174, 346);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(63, 64);
			this->button14->TabIndex = 17;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(174, 276);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(63, 64);
			this->button15->TabIndex = 18;
			this->button15->Text = L"6";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(174, 206);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(63, 64);
			this->button16->TabIndex = 19;
			this->button16->Text = L"9";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(102, 416);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(63, 64);
			this->button17->TabIndex = 20;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAdd->Location = System::Drawing::Point(243, 136);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(63, 64);
			this->btnAdd->TabIndex = 21;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::BtnAdd_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnDiv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDiv->Location = System::Drawing::Point(243, 346);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(63, 64);
			this->btnDiv->TabIndex = 22;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = false;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::BtnDiv_Click);
			// 
			// btnMult
			// 
			this->btnMult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnMult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMult->Location = System::Drawing::Point(243, 276);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(63, 64);
			this->btnMult->TabIndex = 23;
			this->btnMult->Text = L"*";
			this->btnMult->UseVisualStyleBackColor = false;
			this->btnMult->Click += gcnew System::EventHandler(this, &MyForm::BtnMult_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->Location = System::Drawing::Point(171, 136);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(63, 64);
			this->btn2->TabIndex = 24;
			this->btn2->Text = L"x^2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::Btn2_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnSqrt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSqrt->Location = System::Drawing::Point(102, 136);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(63, 64);
			this->btnSqrt->TabIndex = 25;
			this->btnSqrt->Text = L"sqrt x";
			this->btnSqrt->UseVisualStyleBackColor = false;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &MyForm::BtnSqrt_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->ClientSize = System::Drawing::Size(337, 507);
			this->Controls->Add(this->btnSqrt);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnMin);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->btnDouble);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnDel);
			this->Controls->Add(this->labOutput);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(357, 550);
			this->MinimumSize = System::Drawing::Size(357, 550);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}

	private: System::Void Button_num_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = safe_cast<Button^>(sender);
		
		if (isEndOperation) {
			this->labOutput->Text = "0";
			isEndOperation = false;
			this->labOutput->Text = btn->Text;
		}
		else {
			this->labOutput->Text = this->labOutput->Text + btn->Text;
		}
		saveOutputValue();
	}

	private: System::Void saveOutputValue() {
		this->dblOutput = System::Convert::ToDouble(this->labOutput->Text);
	}

	private: System::Void BtnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '+';
		this->num1 = num1 + dblOutput;
		this->labOutput->Text = System::Convert::ToString(num1);
		this->isEndOperation = true;
	}

	private: System::Void BtnMin_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '-';
		this->num1 = num1 - dblOutput;
		this->labOutput->Text = System::Convert::ToString(num1);
		this->isEndOperation = true;
	}

	private: System::Void BtnMult_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '*';
		this->num1 = dblOutput * num1;
		this->labOutput->Text = System::Convert::ToString(num1);
		this->isEndOperation = true;
	}

	private: System::Void BtnDiv_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '/';
		this->num1 = dblOutput;
		this->labOutput->Text = System::Convert::ToString(num1);
	}

	private: System::Void Btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = '^';
		this->num1 = dblOutput;
	}

	private: System::Void BtnSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
		this->op = 's';
		this->num1 = dblOutput;
	}

	private: System::Void BtnResult_Click(System::Object^ sender, System::EventArgs^ e) {
	    double num2 = System::Convert::ToDouble(this->labOutput->Text);
		double res = 0;
		bool err = false;
		switch (this->op) {
			case('+'): 
				res = this->num1 + num2;
				break;
			case('*'):
				res = this->num1 * num2;
				break;
			case('-'):
				res = this->num1 - num2;
				break;
			case('/'):
				if (num2 == 0) {
					err = true;
					break;
				}
				else {
					res = this->num1 / num2;
					break;
				}
			case('^'):
				res = this->num1 * this->num1;
				break;
			case('s'):
				if (this->num1 < 0) {
					err = true;
					break;
				}
				res = sqrt(this->num1);
				break;
		}
		if (err) {
			this->labOutput->Text = "ERROR";
		}
		else {
			this->labOutput->Text = System::Convert::ToString(res);
		}
	}
private: System::Void BtnDel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->op = 0;
	this->num1 = 0;
	this->labOutput->Text = "0";
	this->dblOutput = 0;
	this->isEndOperation = true;
}
private: System::Void BtnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->num1 = System::Convert::ToInt32(this->labOutput->Text);
	this->num1 = this->num1 * -1;
	this->labOutput->Text = System::Convert::ToString(this->num1);
}
private: System::Void BtnDouble_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = safe_cast<Button^>(sender);
	this->labOutput->Text = this->labOutput->Text + btn->Text;
}
};
}


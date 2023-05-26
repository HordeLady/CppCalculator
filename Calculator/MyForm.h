#pragma once
#include <math.h>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	enum STATUS { START, WORK, END };
	enum ACTION { ADD, MINUS, MULTIPLY, DIVIDE, SQUARE_ROOT, SQUARE, EQUALS, CLEAR };

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		private: System::Windows::Forms::Button^ btnNum0;
		private: System::Windows::Forms::Button^ btnNum1;
		private: System::Windows::Forms::Button^ btnNum2;
		private: System::Windows::Forms::Button^ btnNum3;
		private: System::Windows::Forms::Button^ btnNum4;
		private: System::Windows::Forms::Button^ btnNum5;
		private: System::Windows::Forms::Button^ btnNum6;
		private: System::Windows::Forms::Button^ btnNum7;
		private: System::Windows::Forms::Button^ btnNum8;
		private: System::Windows::Forms::Button^ btnNum9;

		private: System::Windows::Forms::Button^ btnClear;
		private: System::Windows::Forms::Button^ btnSqrtRoot;
		private: System::Windows::Forms::Button^ btn2;
		private: System::Windows::Forms::Button^ btnAdd;
		private: System::Windows::Forms::Button^ btnMin;
		private: System::Windows::Forms::Button^ btnMult;
		private: System::Windows::Forms::Button^ btnDiv;
		private: System::Windows::Forms::Button^ btnResult;

		private: System::Windows::Forms::Button^ btnDelimiter;
		private: System::Windows::Forms::Button^ btnSignChange;

		private: double num1 = 0;
		private: char op;
		private: System::Windows::Forms::Label^ labOutput;
		private: bool isEndOperation = true;

		private: STATUS status = START;
		private: ACTION action = CLEAR;
		private: double argument1 = 0.0;
		private: double argument2 = 0.0;
		private: double argumentResult = 0.0;

	private: System::Windows::Forms::Label^ labArg1;
	private: System::Windows::Forms::Label^ labArg2;
	private: System::Windows::Forms::Label^ labArgResult;

	
			   

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
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnNum5 = (gcnew System::Windows::Forms::Button());
			this->btnNum2 = (gcnew System::Windows::Forms::Button());
			this->btnNum8 = (gcnew System::Windows::Forms::Button());
			this->btnDelimiter = (gcnew System::Windows::Forms::Button());
			this->btnNum1 = (gcnew System::Windows::Forms::Button());
			this->btnNum4 = (gcnew System::Windows::Forms::Button());
			this->btnNum7 = (gcnew System::Windows::Forms::Button());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->btnMin = (gcnew System::Windows::Forms::Button());
			this->btnSignChange = (gcnew System::Windows::Forms::Button());
			this->btnNum3 = (gcnew System::Windows::Forms::Button());
			this->btnNum6 = (gcnew System::Windows::Forms::Button());
			this->btnNum9 = (gcnew System::Windows::Forms::Button());
			this->btnNum0 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btnSqrtRoot = (gcnew System::Windows::Forms::Button());
			this->labArg1 = (gcnew System::Windows::Forms::Label());
			this->labArg2 = (gcnew System::Windows::Forms::Label());
			this->labArgResult = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labOutput
			// 
			this->labOutput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->labOutput->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labOutput->Location = System::Drawing::Point(26, 9);
			this->labOutput->Name = L"labOutput";
			this->labOutput->Size = System::Drawing::Size(291, 37);
			this->labOutput->TabIndex = 1;
			this->labOutput->Text = L"0";
			this->labOutput->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->Location = System::Drawing::Point(33, 136);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(63, 64);
			this->btnClear->TabIndex = 4;
			this->btnClear->Text = L"AC";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::BtnClear_Click);
			// 
			// btnNum5
			// 
			this->btnNum5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnNum5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNum5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum5->Location = System::Drawing::Point(102, 276);
			this->btnNum5->Name = L"btnNum5";
			this->btnNum5->Size = System::Drawing::Size(63, 64);
			this->btnNum5->TabIndex = 5;
			this->btnNum5->Text = L"5";
			this->btnNum5->UseVisualStyleBackColor = false;
			this->btnNum5->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// btnNum2
			// 
			this->btnNum2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnNum2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNum2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum2->Location = System::Drawing::Point(102, 346);
			this->btnNum2->Name = L"btnNum2";
			this->btnNum2->Size = System::Drawing::Size(63, 64);
			this->btnNum2->TabIndex = 6;
			this->btnNum2->Text = L"2";
			this->btnNum2->UseVisualStyleBackColor = false;
			this->btnNum2->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// btnNum8
			// 
			this->btnNum8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnNum8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNum8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum8->Location = System::Drawing::Point(102, 206);
			this->btnNum8->Name = L"btnNum8";
			this->btnNum8->Size = System::Drawing::Size(63, 64);
			this->btnNum8->TabIndex = 7;
			this->btnNum8->Text = L"8";
			this->btnNum8->UseVisualStyleBackColor = false;
			this->btnNum8->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// btnDelimiter
			// 
			this->btnDelimiter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnDelimiter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelimiter->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDelimiter->Location = System::Drawing::Point(174, 416);
			this->btnDelimiter->Name = L"btnDelimiter";
			this->btnDelimiter->Size = System::Drawing::Size(63, 64);
			this->btnDelimiter->TabIndex = 8;
			this->btnDelimiter->Text = L".";
			this->btnDelimiter->UseVisualStyleBackColor = false;
			this->btnDelimiter->Click += gcnew System::EventHandler(this, &MyForm::BtnDelimiter_Click);
			// 
			// btnNum1
			// 
			this->btnNum1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnNum1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNum1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum1->Location = System::Drawing::Point(33, 346);
			this->btnNum1->Name = L"btnNum1";
			this->btnNum1->Size = System::Drawing::Size(63, 64);
			this->btnNum1->TabIndex = 9;
			this->btnNum1->Text = L"1";
			this->btnNum1->UseVisualStyleBackColor = false;
			this->btnNum1->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// btnNum4
			// 
			this->btnNum4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnNum4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNum4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum4->Location = System::Drawing::Point(33, 276);
			this->btnNum4->Name = L"btnNum4";
			this->btnNum4->Size = System::Drawing::Size(63, 64);
			this->btnNum4->TabIndex = 10;
			this->btnNum4->Text = L"4";
			this->btnNum4->UseVisualStyleBackColor = false;
			this->btnNum4->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// btnNum7
			// 
			this->btnNum7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnNum7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNum7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum7->Location = System::Drawing::Point(33, 206);
			this->btnNum7->Name = L"btnNum7";
			this->btnNum7->Size = System::Drawing::Size(63, 64);
			this->btnNum7->TabIndex = 11;
			this->btnNum7->Text = L"7";
			this->btnNum7->UseVisualStyleBackColor = false;
			this->btnNum7->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
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
			// btnSignChange
			// 
			this->btnSignChange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnSignChange->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSignChange->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSignChange->Location = System::Drawing::Point(33, 416);
			this->btnSignChange->Name = L"btnSignChange";
			this->btnSignChange->Size = System::Drawing::Size(63, 64);
			this->btnSignChange->TabIndex = 16;
			this->btnSignChange->Text = L"+/-";
			this->btnSignChange->UseVisualStyleBackColor = false;
			this->btnSignChange->Click += gcnew System::EventHandler(this, &MyForm::BtnSignChange_Click);
			// 
			// btnNum3
			// 
			this->btnNum3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnNum3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNum3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum3->Location = System::Drawing::Point(174, 346);
			this->btnNum3->Name = L"btnNum3";
			this->btnNum3->Size = System::Drawing::Size(63, 64);
			this->btnNum3->TabIndex = 17;
			this->btnNum3->Text = L"3";
			this->btnNum3->UseVisualStyleBackColor = false;
			this->btnNum3->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// btnNum6
			// 
			this->btnNum6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnNum6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNum6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum6->Location = System::Drawing::Point(174, 276);
			this->btnNum6->Name = L"btnNum6";
			this->btnNum6->Size = System::Drawing::Size(63, 64);
			this->btnNum6->TabIndex = 18;
			this->btnNum6->Text = L"6";
			this->btnNum6->UseVisualStyleBackColor = false;
			this->btnNum6->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// btnNum9
			// 
			this->btnNum9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnNum9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNum9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum9->Location = System::Drawing::Point(174, 206);
			this->btnNum9->Name = L"btnNum9";
			this->btnNum9->Size = System::Drawing::Size(63, 64);
			this->btnNum9->TabIndex = 19;
			this->btnNum9->Text = L"9";
			this->btnNum9->UseVisualStyleBackColor = false;
			this->btnNum9->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
			// 
			// btnNum0
			// 
			this->btnNum0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnNum0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNum0->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum0->Location = System::Drawing::Point(102, 416);
			this->btnNum0->Name = L"btnNum0";
			this->btnNum0->Size = System::Drawing::Size(63, 64);
			this->btnNum0->TabIndex = 20;
			this->btnNum0->Text = L"0";
			this->btnNum0->UseVisualStyleBackColor = false;
			this->btnNum0->Click += gcnew System::EventHandler(this, &MyForm::Button_num_Click);
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
			// btnSqrtRoot
			// 
			this->btnSqrtRoot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->btnSqrtRoot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSqrtRoot->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSqrtRoot->Location = System::Drawing::Point(102, 136);
			this->btnSqrtRoot->Name = L"btnSqrtRoot";
			this->btnSqrtRoot->Size = System::Drawing::Size(63, 64);
			this->btnSqrtRoot->TabIndex = 25;
			this->btnSqrtRoot->Text = L"sqrt x";
			this->btnSqrtRoot->UseVisualStyleBackColor = false;
			this->btnSqrtRoot->Click += gcnew System::EventHandler(this, &MyForm::BtnSqrt_Click);
			// 
			// labArg1
			// 
			this->labArg1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->labArg1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labArg1->Location = System::Drawing::Point(27, 62);
			this->labArg1->Name = L"labArg1";
			this->labArg1->Size = System::Drawing::Size(152, 30);
			this->labArg1->TabIndex = 26;
			this->labArg1->Text = L"0";
			this->labArg1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labArg2
			// 
			this->labArg2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->labArg2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labArg2->Location = System::Drawing::Point(185, 62);
			this->labArg2->Name = L"labArg2";
			this->labArg2->Size = System::Drawing::Size(133, 30);
			this->labArg2->TabIndex = 27;
			this->labArg2->Text = L"0";
			this->labArg2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labArgResult
			// 
			this->labArgResult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->labArgResult->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labArgResult->Location = System::Drawing::Point(27, 99);
			this->labArgResult->Name = L"labArgResult";
			this->labArgResult->Size = System::Drawing::Size(291, 30);
			this->labArgResult->TabIndex = 28;
			this->labArgResult->Text = L"0";
			this->labArgResult->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->ClientSize = System::Drawing::Size(337, 507);
			this->Controls->Add(this->labArgResult);
			this->Controls->Add(this->labArg2);
			this->Controls->Add(this->labArg1);
			this->Controls->Add(this->btnSqrtRoot);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnNum0);
			this->Controls->Add(this->btnNum9);
			this->Controls->Add(this->btnNum6);
			this->Controls->Add(this->btnNum3);
			this->Controls->Add(this->btnSignChange);
			this->Controls->Add(this->btnMin);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->btnNum7);
			this->Controls->Add(this->btnNum4);
			this->Controls->Add(this->btnNum1);
			this->Controls->Add(this->btnDelimiter);
			this->Controls->Add(this->btnNum8);
			this->Controls->Add(this->btnNum2);
			this->Controls->Add(this->btnNum5);
			this->Controls->Add(this->btnClear);
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


		private: System::Void ClearAll() {
			argument1 = 0.0;
			argument2 = 0.0;
			argumentResult = 0.0;
			action = CLEAR;
			status = START;
			this->labOutput->Text = "0";
			isEndOperation = true;
			ShowArguments();
		}
		private: System::Void Calculate() {
			switch (action)
			{
			case Calculator::ADD:
				argumentResult = argument1 + argument2;
				break;
			case Calculator::MINUS:
				argumentResult = argument1 - argument2;
				break;
			case Calculator::MULTIPLY:
				argumentResult = argument1 * argument2;
				break;
			case Calculator::DIVIDE:
				argumentResult = argument1 / argument2;
				break;
			case Calculator::SQUARE_ROOT:
				argumentResult = sqrt(argument1);
				break;
			case Calculator::SQUARE:
				argumentResult = argument1 * argument1;
				break;
			case Calculator::EQUALS:
				argumentResult = argument1;
				break;
			case Calculator::CLEAR:
				break;
			default:
				break;
			}
			this->labOutput->Text = System::Convert::ToString(argumentResult);
		}
		private: System::Void ShowArguments() {
			this->labArg1->Text = System::Convert::ToString(argument1);
			this->labArg2->Text = System::Convert::ToString(argument2);
			this->labArgResult->Text = System::Convert::ToString(argumentResult);
		}
		private: System::Void UseStatus(ACTION actionArg) {
			switch (actionArg)
			{
			case Calculator::SQUARE_ROOT:
				action = actionArg;
				argument1 = System::Convert::ToDouble(this->labOutput->Text);
				argument2 = 0.0;
				argumentResult = 0.0;
				Calculate();
				argument1 = argumentResult;
				argument2 = 0.0;
				argumentResult = 0.0;
				action = CLEAR;
				status = START;
				break;
			case Calculator::SQUARE:
				action = actionArg;
				argument1 = System::Convert::ToDouble(this->labOutput->Text);
				argument2 = 0.0;
				argumentResult = 0.0;
				Calculate();
				argument1 = argumentResult;
				argument2 = 0.0;
				argumentResult = 0.0;
				action = CLEAR;
				status = START;
				break;
			case Calculator::EQUALS:
				Calculate();
				status = WORK;
				argument1 = argumentResult;
				argument2 = 0.0;
				argumentResult = 0.0;
				break;
			case Calculator::CLEAR:
				break;
			default:
				switch (status)
				{
				case Calculator::START:
					status = WORK;
					break;
				case Calculator::WORK:
					Calculate();
					argument1 = argumentResult;
					argument2 = 0.0;
					argumentResult = 0.0;
					break;
				case Calculator::END:
					break;
				default:
					break;
				}
				break;
			}
		}

		private: System::Void doSimpleAction(ACTION actionArg) {
			UseStatus(actionArg);
			isEndOperation = true;
			action = actionArg;
			ShowArguments();
		}

		private: System::Void Button_num_Click(System::Object^ sender, System::EventArgs^ e) {
			
			Button^ btn = safe_cast<Button^>(sender);
		
			if (isEndOperation) {
				isEndOperation = false;
				isEndOperation = false;
				this->labOutput->Text = btn->Text;
			}
			else {
				this->labOutput->Text = this->labOutput->Text + btn->Text;
			}

			switch (status)
			{
			case Calculator::START:
				argument1 = System::Convert::ToDouble(this->labOutput->Text);
				argument2 = 0.0;
				break;
			case Calculator::WORK:
				argument2 = System::Convert::ToDouble(this->labOutput->Text);
				break;
			case Calculator::END:
				break;
			default:
				break;
			}
			ShowArguments();
		}

		private: System::Void BtnClear_Click(System::Object^ sender, System::EventArgs^ e) {
			ClearAll();
		}

		private: System::Void BtnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			doSimpleAction(ADD);
		}

		private: System::Void BtnMin_Click(System::Object^ sender, System::EventArgs^ e) {
			doSimpleAction(MINUS);
		}

		private: System::Void BtnMult_Click(System::Object^ sender, System::EventArgs^ e) {
			doSimpleAction(MULTIPLY);
		}

		private: System::Void BtnDiv_Click(System::Object^ sender, System::EventArgs^ e) {
			doSimpleAction(DIVIDE);
		}

		private: System::Void Btn2_Click(System::Object^ sender, System::EventArgs^ e) {
			doSimpleAction(SQUARE);
		}

		private: System::Void BtnSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
			doSimpleAction(SQUARE_ROOT);
		}

		private: System::Void BtnResult_Click(System::Object^ sender, System::EventArgs^ e) {
			doSimpleAction(EQUALS);
		}

		private: System::Void BtnSignChange_Click(System::Object^ sender, System::EventArgs^ e) {
			if (status == WORK) {
				argument2 *= -1;
				this->labOutput->Text = System::Convert::ToString(argument2);
			}
			else {
				argument1 *= -1;
				this->labOutput->Text = System::Convert::ToString(argument1);
			}
			ShowArguments();
		}

		private: System::Void BtnDelimiter_Click(System::Object^ sender, System::EventArgs^ e) {
			Button^ btn = safe_cast<Button^>(sender);
			this->labOutput->Text = this->labOutput->Text + btn->Text;
		}
	};
}


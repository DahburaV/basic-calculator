//--------------------------------------------
//	:: Basic Calculator Header - C++ practice
//	:: By Viktor Dahbura
//	:: 10/14/2016
//---------------------------------------------

#pragma once
namespace BasicCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for basicCalculator
	/// </summary>
	public ref class basicCalculator : public System::Windows::Forms::Form
	{
	public:
		basicCalculator(void)
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
		~basicCalculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button0;
	private: System::Windows::Forms::Button^  buttonNeg;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Button^  buttonSub;
	private: System::Windows::Forms::Button^  buttonMult;
	private: System::Windows::Forms::Button^  buttonDiv;
	private: System::Windows::Forms::Button^  buttonCE;
	private: System::Windows::Forms::Button^  buttonEq;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonNeg = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonSub = (gcnew System::Windows::Forms::Button());
			this->buttonMult = (gcnew System::Windows::Forms::Button());
			this->buttonDiv = (gcnew System::Windows::Forms::Button());
			this->buttonCE = (gcnew System::Windows::Forms::Button());
			this->buttonEq = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(299, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(22, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 58);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &basicCalculator::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(83, 90);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 58);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &basicCalculator::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(144, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 58);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &basicCalculator::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(22, 154);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 58);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &basicCalculator::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(83, 154);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 58);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &basicCalculator::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(144, 154);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 58);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &basicCalculator::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(22, 218);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 58);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &basicCalculator::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(83, 218);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 58);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &basicCalculator::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(144, 218);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 58);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &basicCalculator::button9_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(22, 282);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(116, 58);
			this->button0->TabIndex = 10;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &basicCalculator::button0_Click);
			// 
			// buttonNeg
			// 
			this->buttonNeg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNeg->Location = System::Drawing::Point(144, 282);
			this->buttonNeg->Name = L"buttonNeg";
			this->buttonNeg->Size = System::Drawing::Size(55, 58);
			this->buttonNeg->TabIndex = 11;
			this->buttonNeg->Text = L"neg";
			this->buttonNeg->UseVisualStyleBackColor = true;
			this->buttonNeg->Click += gcnew System::EventHandler(this, &basicCalculator::buttonNeg_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd->Location = System::Drawing::Point(205, 90);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(55, 58);
			this->buttonAdd->TabIndex = 12;
			this->buttonAdd->Text = L"+";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &basicCalculator::buttonAdd_Click);
			// 
			// buttonSub
			// 
			this->buttonSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSub->Location = System::Drawing::Point(205, 154);
			this->buttonSub->Name = L"buttonSub";
			this->buttonSub->Size = System::Drawing::Size(55, 58);
			this->buttonSub->TabIndex = 13;
			this->buttonSub->Text = L"-";
			this->buttonSub->UseVisualStyleBackColor = true;
			this->buttonSub->Click += gcnew System::EventHandler(this, &basicCalculator::buttonSub_Click);
			// 
			// buttonMult
			// 
			this->buttonMult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMult->Location = System::Drawing::Point(205, 218);
			this->buttonMult->Name = L"buttonMult";
			this->buttonMult->Size = System::Drawing::Size(55, 58);
			this->buttonMult->TabIndex = 14;
			this->buttonMult->Text = L"*";
			this->buttonMult->UseVisualStyleBackColor = true;
			this->buttonMult->Click += gcnew System::EventHandler(this, &basicCalculator::buttonMult_Click);
			// 
			// buttonDiv
			// 
			this->buttonDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDiv->Location = System::Drawing::Point(205, 282);
			this->buttonDiv->Name = L"buttonDiv";
			this->buttonDiv->Size = System::Drawing::Size(55, 58);
			this->buttonDiv->TabIndex = 15;
			this->buttonDiv->Text = L"/";
			this->buttonDiv->UseVisualStyleBackColor = true;
			this->buttonDiv->Click += gcnew System::EventHandler(this, &basicCalculator::buttonDiv_Click);
			// 
			// buttonCE
			// 
			this->buttonCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCE->Location = System::Drawing::Point(266, 90);
			this->buttonCE->Name = L"buttonCE";
			this->buttonCE->Size = System::Drawing::Size(55, 58);
			this->buttonCE->TabIndex = 16;
			this->buttonCE->Text = L"CE";
			this->buttonCE->UseVisualStyleBackColor = true;
			this->buttonCE->Click += gcnew System::EventHandler(this, &basicCalculator::buttonCE_Click);
			// 
			// buttonEq
			// 
			this->buttonEq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEq->Location = System::Drawing::Point(266, 154);
			this->buttonEq->Name = L"buttonEq";
			this->buttonEq->Size = System::Drawing::Size(55, 186);
			this->buttonEq->TabIndex = 17;
			this->buttonEq->Text = L"=";
			this->buttonEq->UseVisualStyleBackColor = true;
			this->buttonEq->Click += gcnew System::EventHandler(this, &basicCalculator::buttonEq_Click);
			// 
			// basicCalculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 378);
			this->Controls->Add(this->buttonEq);
			this->Controls->Add(this->buttonCE);
			this->Controls->Add(this->buttonDiv);
			this->Controls->Add(this->buttonMult);
			this->Controls->Add(this->buttonSub);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->buttonNeg);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"basicCalculator";
			this->Text = L"basicCalculator v1.0";
			this->ResumeLayout(false);

		}
		signed int long long firstNum;
		signed int long long secondNum;
		signed int long long result;
		char op;
		bool reset;
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (label1->Text == "20mil++E")
			return;
		if (reset)
			label1->Text = "0";
		int long long value = Convert::ToInt64(label1->Text);

		if (label1->Text == "0") {
			label1->Text = "1";
		}
		else {
			if (value < 100000000) {
				label1->Text = value + "1";
			}
		}
		reset = false;
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	if (reset)
		label1->Text = "0";
	int long long value = Convert::ToInt64(label1->Text);

	if (label1->Text == "0") {
		label1->Text = "2";
	}
	else {
		if (value < 100000000) {
			label1->Text = value + "2";
		}
	}
	reset = false;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	if (reset)
		label1->Text = "0";
	int long long value = Convert::ToInt64(label1->Text);

	if (label1->Text == "0") {
		label1->Text = "3";
	}
	else {
		if (value < 100000000) {
			label1->Text = value + "3";
		}
	}
	reset = false;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	if (reset)
		label1->Text = "0";
	int long long value = Convert::ToInt64(label1->Text);

	if (label1->Text == "0") {
		label1->Text = "4";
	}
	else {
		if (value < 100000000) {
			label1->Text = value + "4";
		}
	}
	reset = false;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	if (reset)
		label1->Text = "0";
	int long long value = Convert::ToInt64(label1->Text);

	if (label1->Text == "0") {
		label1->Text = "5";
	}
	else {
		if (value < 100000000) {
			label1->Text = value + "5";
		}
	}
	reset = false;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	if (reset)
		label1->Text = "0";
	int long long value = Convert::ToInt64(label1->Text);

	if (label1->Text == "0") {
		label1->Text = "6";
	}
	else {
		if (value < 100000000) {
			label1->Text = value + "6";
		}
	}
	reset = false;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	if (reset)
		label1->Text = "0";
	int long long value = Convert::ToInt64(label1->Text);

	if (label1->Text == "0") {
		label1->Text = "7";
	}
	else {
		if (value < 100000000) {
			label1->Text = value + "7";
		}
	}
	reset = false;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	if (reset)
		label1->Text = "0";
	int long long value = Convert::ToInt64(label1->Text);

	if (label1->Text == "0") {
		label1->Text = "8";
	}
	else {
		if (value < 100000000) {
			label1->Text = value + "8";
		}
	}
	reset = false;
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	if (reset)
		label1->Text = "0";
	int long long value = Convert::ToInt64(label1->Text);

	if (label1->Text == "0") {
		label1->Text = "9";
	}
	else {
		if (value < 100000000) {
			label1->Text = value + "9";
		}
	}
	reset = false;
}
private: System::Void button0_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	if (reset)
		label1->Text = "0";
	int long long value = Convert::ToInt64(label1->Text);

	if (label1->Text == "0") {
		label1->Text = "0";
	}
	else {
		if (value < 100000000) {
			label1->Text = value + "0";
		}
	}
	reset = false;
}
private: System::Void buttonCE_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = "";
	label1->Text = "0";
	firstNum = 0;
	secondNum = 0;
}
private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	firstNum = Convert::ToInt64(label1->Text);
	label1->Text = "0";
	op = '+';
}
private: System::Void buttonSub_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	firstNum = Convert::ToInt64(label1->Text);
	label1->Text = "0";
	op = '-';
}
private: System::Void buttonMult_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	firstNum = Convert::ToInt64(label1->Text);
	label1->Text = "0";
	op = '*';
}
private: System::Void buttonDiv_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	firstNum = Convert::ToInt64(label1->Text);
	label1->Text = "0";
	op = '/';
}
private: System::Void buttonEq_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label1->Text == "20mil++E")
		return;
	secondNum = Convert::ToInt64(label1->Text);

	switch (op) {
	case '+':
		result = firstNum + secondNum;
		if (result < 20000000) {
			label1->Text = System::Convert::ToString(result);
			firstNum = result;
			reset = true;
		}
		else {
			label1->Text = "20mil++E";
	
		}
		break;
	case '-':
		result = firstNum - secondNum;
		if (result < 20000000) {
			label1->Text = System::Convert::ToString(result);
			firstNum = result;
			reset = true;
		}
		else {
			label1->Text = "20mil++E";

		}
		break;
	case '*':
		result = firstNum * secondNum;
		if (result < 20000000) {
			label1->Text = System::Convert::ToString(result);
			firstNum = result;
			reset = true;
		}
		else {
			label1->Text = "20mil++E";

		}
		break;
	case '/':
		result = firstNum / secondNum;
		if (result < 20000000) {
			label1->Text = System::Convert::ToString(result);
			firstNum = result;
			reset = true;
		}
		else {
			label1->Text = "20mil++E";

		}
		break;
	}
}
private: System::Void buttonNeg_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

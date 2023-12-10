#pragma once

#include "Intro1Form.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IntroForm
	/// </summary>
	public ref class IntroForm : public System::Windows::Forms::Form
	{
	public:
		IntroForm(void)
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
		~IntroForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timerInto;
	private: System::Windows::Forms::Button^ btnIntroNext;


	private: System::Windows::Forms::Label^ label1;





	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IntroForm::typeid));
			this->timerInto = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnIntroNext = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timerInto
			// 
			this->timerInto->Enabled = true;
			this->timerInto->Interval = 2000;
			// 
			// btnIntroNext
			// 
			this->btnIntroNext->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIntroNext->Location = System::Drawing::Point(913, 465);
			this->btnIntroNext->Name = L"btnIntroNext";
			this->btnIntroNext->Size = System::Drawing::Size(75, 23);
			this->btnIntroNext->TabIndex = 0;
			this->btnIntroNext->Text = L"next";
			this->btnIntroNext->UseVisualStyleBackColor = true;
			this->btnIntroNext->Click += gcnew System::EventHandler(this, &IntroForm::btnIntroNext_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(33, 388);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(660, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"The sun rays hit your skin with intense heat. You feel sluggish but still you for"
				L"ce to open your eyes.";
			this->label1->Click += gcnew System::EventHandler(this, &IntroForm::label1_Click);
			// 
			// IntroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnIntroNext);
			this->Name = L"IntroForm";
			this->Text = L"IntroForm";
			this->Load += gcnew System::EventHandler(this, &IntroForm::IntroForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void IntroForm_Load(System::Object^ sender, System::EventArgs^ e) {

		
	}
	

private: System::Void pcbTxtIntro_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnIntroNext_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Intro1Form^ next = gcnew Intro1Form();

	next->ShowDialog();
}
};
}

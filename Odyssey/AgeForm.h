#pragma once

#include "NameForm.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AgeForm
	/// </summary>
	public ref class AgeForm : public System::Windows::Forms::Form
	{
	public:
		Form^ home;
		AgeForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		AgeForm(Form^ age)
		{
			home = age;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AgeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtAge;
	private: System::Windows::Forms::Button^ btnConfirm;
	private: System::Windows::Forms::Button^ btnBack;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AgeForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtAge = (gcnew System::Windows::Forms::TextBox());
			this->btnConfirm = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(286, 192);
			this->label1->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(591, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"How old are you adventurer\?\r\n";
			// 
			// txtAge
			// 
			this->txtAge->BackColor = System::Drawing::Color::FloralWhite;
			this->txtAge->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtAge->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtAge->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAge->Location = System::Drawing::Point(414, 233);
			this->txtAge->Name = L"txtAge";
			this->txtAge->Size = System::Drawing::Size(223, 43);
			this->txtAge->TabIndex = 1;
			this->txtAge->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtAge->TextChanged += gcnew System::EventHandler(this, &AgeForm::txtAge_TextChanged);
			// 
			// btnConfirm
			// 
			this->btnConfirm->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnConfirm->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirm->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnConfirm->Location = System::Drawing::Point(474, 281);
			this->btnConfirm->Name = L"btnConfirm";
			this->btnConfirm->Size = System::Drawing::Size(100, 36);
			this->btnConfirm->TabIndex = 2;
			this->btnConfirm->Text = L"Confirm";
			this->btnConfirm->UseVisualStyleBackColor = true;
			this->btnConfirm->Click += gcnew System::EventHandler(this, &AgeForm::btnConfirm_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::SystemColors::Control;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnBack->Location = System::Drawing::Point(904, 452);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(84, 36);
			this->btnBack->TabIndex = 3;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &AgeForm::btnBack_Click);
			// 
			// AgeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(23, 41);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnConfirm);
			this->Controls->Add(this->txtAge);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(10, 8, 10, 8);
			this->Name = L"AgeForm";
			this->Text = L"AgeForm";
			this->Load += gcnew System::EventHandler(this, &AgeForm::AgeForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AgeForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		home->ShowDialog();
	}
private: System::Void btnConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ageString = txtAge->Text;
	int age = Int32::TryParse(ageString, age);

	if ((ageString, age) < 13) {

		this->Hide();
		NameForm^ name = gcnew NameForm();

		name->ShowDialog();

	}
	else {
		MessageBox::Show("This is not for you to play kid, quit now.", "AGE RESTRICTION", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		this->Close();

	}
}
private: System::Void txtAge_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

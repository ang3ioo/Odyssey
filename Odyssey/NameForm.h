#pragma once

#include "LoadingForm.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NameForm
	/// </summary>
	public ref class NameForm : public System::Windows::Forms::Form
	{
	public:
		NameForm(void)
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
		~NameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Button^ btnNameConfirm;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NameForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->btnNameConfirm = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(387, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"What is your name\?";
			this->label1->Click += gcnew System::EventHandler(this, &NameForm::label1_Click);
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(408, 157);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(280, 42);
			this->txtName->TabIndex = 1;
			this->txtName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnNameConfirm
			// 
			this->btnNameConfirm->Cursor = System::Windows::Forms::Cursors::Default;
			this->btnNameConfirm->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNameConfirm->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnNameConfirm->Location = System::Drawing::Point(495, 205);
			this->btnNameConfirm->Name = L"btnNameConfirm";
			this->btnNameConfirm->Size = System::Drawing::Size(100, 36);
			this->btnNameConfirm->TabIndex = 3;
			this->btnNameConfirm->Text = L"Confirm";
			this->btnNameConfirm->UseVisualStyleBackColor = true;
			this->btnNameConfirm->Click += gcnew System::EventHandler(this, &NameForm::btnNameConfirm_Click);
			// 
			// NameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->btnNameConfirm);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label1);
			this->Name = L"NameForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"NameForm";
			this->Load += gcnew System::EventHandler(this, &NameForm::NameForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void NameForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void btnNameConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name;

		if (txtName->Text->Trim()->Length > 1) {
			name = txtName->Text;

			this->Hide();
			LoadingForm^ load = gcnew LoadingForm();

			load->ShowDialog();


		}else {
			MessageBox::Show("Please input a valid name.", "INVALID", MessageBoxButtons::OK, MessageBoxIcon::Exclamation );

		}


}
};
}

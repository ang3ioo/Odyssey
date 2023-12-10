#pragma once

#include "PSPhoneForm.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PSAdminNLForm
	/// </summary>
	public ref class PSAdminNLForm : public System::Windows::Forms::Form
	{
	public:
		PSAdminNLForm(void)
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
		~PSAdminNLForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnPhone;
	private: System::Windows::Forms::Button^ btnSafe;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PSAdminNLForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnPhone = (gcnew System::Windows::Forms::Button());
			this->btnSafe = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(21, 360);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(945, 90);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// btnPhone
			// 
			this->btnPhone->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPhone->Location = System::Drawing::Point(72, 465);
			this->btnPhone->Name = L"btnPhone";
			this->btnPhone->Size = System::Drawing::Size(241, 23);
			this->btnPhone->TabIndex = 1;
			this->btnPhone->Text = L"Check the phone";
			this->btnPhone->UseVisualStyleBackColor = true;
			this->btnPhone->Click += gcnew System::EventHandler(this, &PSAdminNLForm::btnPhone_Click);
			// 
			// btnSafe
			// 
			this->btnSafe->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSafe->Location = System::Drawing::Point(361, 465);
			this->btnSafe->Name = L"btnSafe";
			this->btnSafe->Size = System::Drawing::Size(241, 23);
			this->btnSafe->TabIndex = 2;
			this->btnSafe->Text = L"Open the safe";
			this->btnSafe->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(665, 465);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Inspect the figurine on the desk";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// PSAdminNLForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnSafe);
			this->Controls->Add(this->btnPhone);
			this->Controls->Add(this->label1);
			this->Name = L"PSAdminNLForm";
			this->Text = L"PSAdminNLForm";
			this->Load += gcnew System::EventHandler(this, &PSAdminNLForm::PSAdminNLForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PSAdminNLForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnPhone_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PSPhoneForm^ phone = gcnew PSPhoneForm();

		phone->Show();
	}
};
}

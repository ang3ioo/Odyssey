#pragma once

#include "PSAdminForm.h"
#include "PSCafeteriaForm.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PSLookForm
	/// </summary>
	public ref class PSLookForm : public System::Windows::Forms::Form
	{
	public:
		PSLookForm(void)
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
		~PSLookForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnPSAdmin;
	private: System::Windows::Forms::Button^ btnCafeteria;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PSLookForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnPSAdmin = (gcnew System::Windows::Forms::Button());
			this->btnCafeteria = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(13, 400);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(963, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// btnPSAdmin
			// 
			this->btnPSAdmin->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPSAdmin->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPSAdmin->Location = System::Drawing::Point(209, 465);
			this->btnPSAdmin->Name = L"btnPSAdmin";
			this->btnPSAdmin->Size = System::Drawing::Size(201, 23);
			this->btnPSAdmin->TabIndex = 1;
			this->btnPSAdmin->Text = L"Adminitrative Office";
			this->btnPSAdmin->UseVisualStyleBackColor = true;
			this->btnPSAdmin->Click += gcnew System::EventHandler(this, &PSLookForm::button1_Click);
			// 
			// btnCafeteria
			// 
			this->btnCafeteria->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCafeteria->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnCafeteria->Location = System::Drawing::Point(473, 465);
			this->btnCafeteria->Name = L"btnCafeteria";
			this->btnCafeteria->Size = System::Drawing::Size(201, 23);
			this->btnCafeteria->TabIndex = 2;
			this->btnCafeteria->Text = L"Cafeteria";
			this->btnCafeteria->UseVisualStyleBackColor = true;
			this->btnCafeteria->Click += gcnew System::EventHandler(this, &PSLookForm::btnCafeteria_Click);
			// 
			// PSLookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->btnCafeteria);
			this->Controls->Add(this->btnPSAdmin);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PSLookForm";
			this->Text = L"PSLookForm";
			this->Load += gcnew System::EventHandler(this, &PSLookForm::PSLookForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PSLookForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PSAdminForm^ admin = gcnew PSAdminForm();

		admin->Show();
	}
private: System::Void btnCafeteria_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	PSCafeteriaForm^ eme = gcnew PSCafeteriaForm();

	eme->Show();

}
};
}

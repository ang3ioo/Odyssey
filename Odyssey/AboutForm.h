#pragma once

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutForm
	/// </summary>
	public ref class AboutForm : public System::Windows::Forms::Form
	{
	public:
		Form^ home;
		AboutForm(Form^ bout)
		{
			home = bout;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		AboutForm(void)
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
		~AboutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblAbout;
	protected:
	private: System::Windows::Forms::Label^ lblDetail;
	private: System::Windows::Forms::Button^ btnAboutBack;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutForm::typeid));
			this->lblAbout = (gcnew System::Windows::Forms::Label());
			this->lblDetail = (gcnew System::Windows::Forms::Label());
			this->btnAboutBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblAbout
			// 
			this->lblAbout->AutoSize = true;
			this->lblAbout->BackColor = System::Drawing::Color::Transparent;
			this->lblAbout->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAbout->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblAbout->Location = System::Drawing::Point(445, 80);
			this->lblAbout->Name = L"lblAbout";
			this->lblAbout->Size = System::Drawing::Size(189, 77);
			this->lblAbout->TabIndex = 0;
			this->lblAbout->Text = L"About";
			// 
			// lblDetail
			// 
			this->lblDetail->AutoSize = true;
			this->lblDetail->BackColor = System::Drawing::Color::Transparent;
			this->lblDetail->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDetail->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblDetail->Location = System::Drawing::Point(114, 176);
			this->lblDetail->Name = L"lblDetail";
			this->lblDetail->Size = System::Drawing::Size(843, 162);
			this->lblDetail->TabIndex = 1;
			this->lblDetail->Text = resources->GetString(L"lblDetail.Text");
			this->lblDetail->Click += gcnew System::EventHandler(this, &AboutForm::lblDetail_Click);
			// 
			// btnAboutBack
			// 
			this->btnAboutBack->BackColor = System::Drawing::SystemColors::Control;
			this->btnAboutBack->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAboutBack->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAboutBack->Location = System::Drawing::Point(904, 452);
			this->btnAboutBack->Name = L"btnAboutBack";
			this->btnAboutBack->Size = System::Drawing::Size(84, 36);
			this->btnAboutBack->TabIndex = 4;
			this->btnAboutBack->Text = L"Back";
			this->btnAboutBack->UseVisualStyleBackColor = false;
			this->btnAboutBack->Click += gcnew System::EventHandler(this, &AboutForm::btnAboutBack_Click);
			// 
			// AboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->btnAboutBack);
			this->Controls->Add(this->lblDetail);
			this->Controls->Add(this->lblAbout);
			this->Name = L"AboutForm";
			this->Text = L"AboutForm";
			this->Load += gcnew System::EventHandler(this, &AboutForm::AboutForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AboutForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnAboutBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		home->ShowDialog();
		
	}
private: System::Void lblDetail_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

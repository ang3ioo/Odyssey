#pragma once

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LeftForm
	/// </summary>
	public ref class LeftForm : public System::Windows::Forms::Form
	{
	public:
		Form^ intro1;
		LeftForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		LeftForm(Form^ left)
		{
			intro1 = left;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LeftForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnRight;
	private: System::Windows::Forms::Button^ btnBackI;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LeftForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->btnBackI = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(57, 385);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(850, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// btnRight
			// 
			this->btnRight->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRight->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btnRight->Location = System::Drawing::Point(500, 452);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(253, 23);
			this->btnRight->TabIndex = 7;
			this->btnRight->Text = L"Go towards the tree";
			this->btnRight->UseVisualStyleBackColor = true;
			this->btnRight->Click += gcnew System::EventHandler(this, &LeftForm::btnRight_Click);
			// 
			// btnBackI
			// 
			this->btnBackI->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBackI->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btnBackI->Location = System::Drawing::Point(185, 452);
			this->btnBackI->Name = L"btnBackI";
			this->btnBackI->Size = System::Drawing::Size(253, 23);
			this->btnBackI->TabIndex = 6;
			this->btnBackI->Text = L"Go back";
			this->btnBackI->UseVisualStyleBackColor = true;
			this->btnBackI->Click += gcnew System::EventHandler(this, &LeftForm::btnNorth_Click);
			// 
			// LeftForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnBackI);
			this->Controls->Add(this->label1);
			this->Name = L"LeftForm";
			this->Text = L"LeftForm";
			this->Load += gcnew System::EventHandler(this, &LeftForm::LeftForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LeftForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void btnNorth_Click(System::Object^ sender, System::EventArgs^ e) {
		
		this->Hide();
		intro1->Show();

	}
private: System::Void btnRight_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("What you see is a Mirage,you die in exhaustion", "GAME OVER", MessageBoxButtons::OK, MessageBoxIcon::Stop);
	this->Close();
}
};
}

#pragma once

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PSLeaveForm
	/// </summary>
	public ref class PSLeaveForm : public System::Windows::Forms::Form
	{
	public:
		Form^ police;
		PSLeaveForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		PSLeaveForm(Form^ leave)
		{
			police = leave;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PSLeaveForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PSLeaveForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 404);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(887, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"You\'re about to leave but stop to think. If you leave, you might not get any info"
				L"rmation that might prove useful in getting out of here. \r\nIt\'s best to snoop aro"
				L"und this time.";
			// 
			// btnBack
			// 
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnBack->Location = System::Drawing::Point(451, 465);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(75, 23);
			this->btnBack->TabIndex = 2;
			this->btnBack->Text = L"back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &PSLeaveForm::btnBack_Click);
			// 
			// PSLeaveForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Name = L"PSLeaveForm";
			this->Text = L"PSLeaveForm";
			this->Load += gcnew System::EventHandler(this, &PSLeaveForm::PSLeaveForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PSLeaveForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		police->Show();
	}
	};
}

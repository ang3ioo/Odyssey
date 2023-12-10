#pragma once

#include "IntroForm.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoadingForm
	/// </summary>
	public ref class LoadingForm : public System::Windows::Forms::Form
	{
	public:
		LoadingForm(void)
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
		~LoadingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timerLoad;
	private: System::Windows::Forms::ProgressBar^ loadProgBar;

	private: System::ComponentModel::IContainer^ components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoadingForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timerLoad = (gcnew System::Windows::Forms::Timer(this->components));
			this->loadProgBar = (gcnew System::Windows::Forms::ProgressBar());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(403, 457);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"the game is starting, please for a while...";
			// 
			// timerLoad
			// 
			this->timerLoad->Tick += gcnew System::EventHandler(this, &LoadingForm::timerLoad_Tick);
			// 
			// loadProgBar
			// 
			this->loadProgBar->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->loadProgBar->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->loadProgBar->ForeColor = System::Drawing::SystemColors::GrayText;
			this->loadProgBar->Location = System::Drawing::Point(-2, 478);
			this->loadProgBar->Name = L"loadProgBar";
			this->loadProgBar->Size = System::Drawing::Size(1008, 23);
			this->loadProgBar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->loadProgBar->TabIndex = 0;
			this->loadProgBar->Click += gcnew System::EventHandler(this, &LoadingForm::loadProgBar_Click);
			// 
			// LoadingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->loadProgBar);
			this->Controls->Add(this->label1);
			this->Name = L"LoadingForm";
			this->Text = L"LoadingForm";
			this->Load += gcnew System::EventHandler(this, &LoadingForm::LoadingForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoadingForm_Load(System::Object^ sender, System::EventArgs^ e) {
		timerLoad->Interval = 500;
		timerLoad->Start();
	}
	
	private: System::Void timerLoad_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (loadProgBar->Value < loadProgBar->Maximum) {
			loadProgBar->PerformStep();
	}
		else {
			timerLoad->Stop();
			IntroForm^ intro = gcnew IntroForm();
			intro->Show();
			this->Hide();
		}
	}
	private: System::Void loadProgBar_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}

#pragma once
#include "Windows.h"
#pragma comment(lib, "User32.lib")
#pragma comment(lib, "advapi32.lib")

namespace Windowstimedshutdown {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		static int timer = 0;

			 static int shutdown_time = 0;

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Time:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(46, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(452, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(499, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"minutes";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 173);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(530, 23);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(118, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 34);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(296, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 34);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(149, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Time until shutdown:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(293, 213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"not started";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 60000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 261);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Timed shutdown";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 button2->Enabled = false;
				 timer1->Stop();
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //effects and locking
				 timer = 0;
				 try {
					 shutdown_time = Convert::ToInt32(textBox1->Text);
					 if (shutdown_time > 0) {
						 textBox1->Enabled = false;
						 button1->Enabled = false;
						 button2->Enabled = true;
						 timer1->Start();
						 label4->Text = Convert::ToString(shutdown_time - timer ) + " minutes";
						 this->BackColor = Color::Red;
					 }
					 else {
						 MessageBox::Show("Your number must be greater than 0", "Input error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					 }
				 }
				 catch (Exception ^e) {
					 MessageBox::Show("Please enter a specified time in minutes", "Input error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
			 }

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //effects and locking
				 this->BackColor = Color::White;
				 textBox1->Enabled = true;
				 button1->Enabled = true;
				 button2->Enabled = false;
				 label4->Text = "aborted";
				 timer1->Stop();
				 progressBar1->Value = 0;
			 }

    private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				timer ++;
				label4->Text = Convert::ToString(shutdown_time - timer ) + " minutes";
				int progressTime = (int) (timer * 100 / shutdown_time);
				int progressBarTime = progressTime > 100 ? 100 :progressTime;
				progressBar1->Value = progressBarTime;

				int time = (shutdown_time - timer);
				if (time == 0) {
					label4->Text = "Shutting Down...";
					HANDLE hToken; 
					TOKEN_PRIVILEGES tkp; 
					
					// From 0xLyptox | Lars (Discord)
					// Get a token for this process. 
 
					if (!OpenProcessToken(GetCurrentProcess(), 
						TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken)) 
						return;
 
					// Get the LUID for the shutdown privilege. 
 
					LookupPrivilegeValue(NULL, SE_SHUTDOWN_NAME, 
						&tkp.Privileges[0].Luid); 
 
					tkp.PrivilegeCount = 1;  // one privilege to set    
					tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED; 
 
					// Get the shutdown privilege for this process. 
 
					AdjustTokenPrivileges(hToken, FALSE, &tkp, 0, 
						(PTOKEN_PRIVILEGES)NULL, 0); 
 
					if (GetLastError() != ERROR_SUCCESS) 
						return;
					//END

					ExitWindowsEx (EWX_POWEROFF | EWX_FORCEIFHUNG, SHTDN_REASON_MINOR_OTHER);
				}
		     }
};
}


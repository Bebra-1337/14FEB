#pragma once
#include<Windows.h>

namespace My14FEB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_yes;
	protected:
	private: System::Windows::Forms::Button^ button_no;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->button_yes = (gcnew System::Windows::Forms::Button());
			this->button_no = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button_yes
			// 
			this->button_yes->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button_yes->Location = System::Drawing::Point(605, 351);
			this->button_yes->Name = L"button_yes";
			this->button_yes->Size = System::Drawing::Size(115, 46);
			this->button_yes->TabIndex = 0;
			this->button_yes->Text = L"Да";
			this->button_yes->UseVisualStyleBackColor = true;
			this->button_yes->MouseLeave += gcnew System::EventHandler(this, &mainForm::button_yes_MouseLeave);
			this->button_yes->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::button_yes_MouseMove);
			// 
			// button_no
			// 
			this->button_no->Location = System::Drawing::Point(224, 351);
			this->button_no->Name = L"button_no";
			this->button_no->Size = System::Drawing::Size(115, 46);
			this->button_no->TabIndex = 1;
			this->button_no->Text = L"Нет";
			this->button_no->UseVisualStyleBackColor = true;
			this->button_no->Click += gcnew System::EventHandler(this, &mainForm::button_no_Click);
			this->button_no->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::button_no_MouseMove);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(125, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(655, 54);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ты будешь мое валентикой\?";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &mainForm::timer1_Tick);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(944, 501);
			this->Controls->Add(this->button_no);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_yes);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"from <3 with bebra";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_yes_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label1->Text = L"Сосала?";
		}
    private: System::Void button_no_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = L"Ну и пошла нахуй(((";
	this->Text = L"Love destroyed(((";
	button_no->Enabled = false;
	button_yes->Enabled = false;
	this->timer1->Enabled = true;
}
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_no_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int mouseX = e->X;
		int mouseY = e->Y;

		int buttonWidth = button_no->Width;
		int buttonHeight = button_no->Height;

		double distance = Math::Sqrt(Math::Pow(mouseX - button_no->Left - buttonWidth / 2.0, 2) +
			Math::Pow(mouseY - button_no->Top - buttonHeight / 2.0, 2));

		int newX = button_no->Left;
		int newY = button_no->Top;

		int proximity = 50;
		int escapeDistance = 20;

		if (distance < proximity || true) { // в условии какие-то траблы, потом фиксану
			int deltaX = 0;
			int deltaY = 0;

			if (mouseX < button_no->Left + buttonWidth / 2) {
				deltaX = escapeDistance;
			}
			else {
				deltaX = -escapeDistance;
			}

			if (mouseY < button_no->Top + buttonHeight / 2) {
				deltaY = escapeDistance;
			}
			else {
				deltaY = -escapeDistance;
			}

			newX = button_no->Left + deltaX;
			newY = button_no->Top + deltaY;

			System::Drawing::Size clientSize = System::Drawing::Size(944, 501); //this->ClientSize не ворк

			if (newX < 0) newX = 0;
			if (newX + buttonWidth > clientSize.Width) newX = clientSize.Width - buttonWidth;
			if (newY < 0) newY = 0;
			if (newY + buttonHeight > clientSize.Height) newY = clientSize.Height - buttonHeight;

			button_no->Location = System::Drawing::Point(newX, newY);
		}
	}
	private: System::Void button_yes_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = L"Ты будешь мое валентикой\?";
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
};
}

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Label^ label2;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->button_yes->Click += gcnew System::EventHandler(this, &mainForm::button_yes_Click);
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
			this->label1->Location = System::Drawing::Point(134, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(707, 54);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ты будешь моей валентинкой\?";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &mainForm::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(208, -38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(512, 512);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 500;
			this->timer2->Tick += gcnew System::EventHandler(this, &mainForm::timer2_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Firebrick;
			this->label2->Location = System::Drawing::Point(281, 438);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(384, 54);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Я люблю тебя!!!!";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Visible = false;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(944, 501);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_yes);
			this->Controls->Add(this->button_no);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"from <3 with bebra";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	bool sosalinit = false;
	private: System::Void button_yes_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (sosalinit==false) { this->label1->Text = L"Сосала?";sosalinit=true; }
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

		// Вычисление расстояния от центра кнопки до курсора
		double distance = Math::Sqrt(Math::Pow(mouseX - buttonWidth / 2.0, 2) +
			Math::Pow(mouseY - buttonHeight / 2.0, 2));

		int proximity = 50; 
		int escapeDistance = 20; 

		if (distance < proximity) {
			int deltaX = 0;
			int deltaY = 0;

			// Направление съеба
			if (mouseX < buttonWidth / 2) {
				deltaX = escapeDistance;
			}
			else {
				deltaX = -escapeDistance;
			}

			if (mouseY < buttonHeight / 2) {
				deltaY = escapeDistance;
			}
			else {
				deltaY = -escapeDistance;
			}

			int newX = button_no->Left + deltaX;
			int newY = button_no->Top + deltaY;

			//this->ClientSize не прокнул и поэтому пришлось через костыль делать
			System::Drawing::Size clientSize = this->ClientSize;

			// Проверка, чтобы не выходило за окно
			newX = Math::Max(0, Math::Min(newX, clientSize.Width - buttonWidth));
			newY = Math::Max(0, Math::Min(newY, clientSize.Height - buttonHeight));

			// Новое положение кнопки
			button_no->Location = System::Drawing::Point(newX, newY);
		}
	}
	private: System::Void button_yes_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = L"Ты будешь моей валентинкой\?";
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (this->Opacity > 0) {
		this->Opacity -= 0.1;
	}
	else {
		this->Close();
	}
}	
	private: System::Void button_yes_Click(System::Object^ sender, System::EventArgs^ e){
		pictureBox1->Visible = true;
		button_no->Visible = false;
		button_yes->Visible = false;
		label1->Visible = false;
		label2->Visible = true;

		
		System::Windows::Forms::Timer^ timer = gcnew System::Windows::Forms::Timer();

		
		timer->Interval = 500;

		
		timer->Tick += gcnew System::EventHandler(this, &mainForm::timer2_Tick); 

		
		timer->Start();
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox1->Width == 512) { // Исходный размер
			pictureBox1->Width = 522;
			pictureBox1->Height = 522;
		}
		else {
			pictureBox1->Width = 512;
			pictureBox1->Height = 512;
		}
}
};
}

#pragma once
#include"Func.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			lst = createlist<Student>();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAppend;
	private: System::Windows::Forms::Button^ btnRemoveat;
	private: System::Windows::Forms::Button^ btnSearch;


	private: System::Windows::Forms::Button^ btnSort;

	private: System::Windows::Forms::Button^ btnAddat;
	private: System::Windows::Forms::Button^ btnDeletelist;
	private: System::Windows::Forms::ListBox^ lbxStudents;


	private: System::Windows::Forms::ListBox^ lbxMarks;
	private: System::Windows::Forms::TextBox^ tbmatan;
	private: System::Windows::Forms::TextBox^ tbenglish;

	private: System::Windows::Forms::TextBox^ tbinfa;
	private: System::Windows::Forms::Label^ lblinfa;
	private: System::Windows::Forms::Label^ lblmatan;
	private: System::Windows::Forms::Label^ lblenglish;
	private: System::Windows::Forms::TextBox^ tbname;
	private: System::Windows::Forms::Label^ lblname;
	private: System::Windows::Forms::Button^ btnChange;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblnum;
	private: System::Windows::Forms::TextBox^ tbnum;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnAppend = (gcnew System::Windows::Forms::Button());
			this->btnRemoveat = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnSort = (gcnew System::Windows::Forms::Button());
			this->btnAddat = (gcnew System::Windows::Forms::Button());
			this->btnDeletelist = (gcnew System::Windows::Forms::Button());
			this->lbxStudents = (gcnew System::Windows::Forms::ListBox());
			this->lbxMarks = (gcnew System::Windows::Forms::ListBox());
			this->tbmatan = (gcnew System::Windows::Forms::TextBox());
			this->tbenglish = (gcnew System::Windows::Forms::TextBox());
			this->tbinfa = (gcnew System::Windows::Forms::TextBox());
			this->lblinfa = (gcnew System::Windows::Forms::Label());
			this->lblmatan = (gcnew System::Windows::Forms::Label());
			this->lblenglish = (gcnew System::Windows::Forms::Label());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->lblname = (gcnew System::Windows::Forms::Label());
			this->btnChange = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblnum = (gcnew System::Windows::Forms::Label());
			this->tbnum = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnAppend
			// 
			this->btnAppend->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAppend->Location = System::Drawing::Point(15, 15);
			this->btnAppend->Margin = System::Windows::Forms::Padding(4);
			this->btnAppend->Name = L"btnAppend";
			this->btnAppend->Size = System::Drawing::Size(285, 51);
			this->btnAppend->TabIndex = 0;
			this->btnAppend->Text = L"Добавить в конец";
			this->btnAppend->UseVisualStyleBackColor = true;
			this->btnAppend->Click += gcnew System::EventHandler(this, &MyForm::btnAppend_Click);
			// 
			// btnRemoveat
			// 
			this->btnRemoveat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRemoveat->Location = System::Drawing::Point(15, 132);
			this->btnRemoveat->Margin = System::Windows::Forms::Padding(4);
			this->btnRemoveat->Name = L"btnRemoveat";
			this->btnRemoveat->Size = System::Drawing::Size(285, 51);
			this->btnRemoveat->TabIndex = 1;
			this->btnRemoveat->Text = L"Удалить по номеру";
			this->btnRemoveat->UseVisualStyleBackColor = true;
			this->btnRemoveat->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveat_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSearch->Location = System::Drawing::Point(15, 191);
			this->btnSearch->Margin = System::Windows::Forms::Padding(4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(285, 82);
			this->btnSearch->TabIndex = 2;
			this->btnSearch->Text = L"Найти студента по ФИО";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
			// 
			// btnSort
			// 
			this->btnSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSort->Location = System::Drawing::Point(15, 281);
			this->btnSort->Margin = System::Windows::Forms::Padding(4);
			this->btnSort->Name = L"btnSort";
			this->btnSort->Size = System::Drawing::Size(285, 90);
			this->btnSort->TabIndex = 3;
			this->btnSort->Text = L"Отсортировать список по среднему баллу";
			this->btnSort->UseVisualStyleBackColor = true;
			this->btnSort->Click += gcnew System::EventHandler(this, &MyForm::btnSort_Click);
			// 
			// btnAddat
			// 
			this->btnAddat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAddat->Location = System::Drawing::Point(15, 74);
			this->btnAddat->Margin = System::Windows::Forms::Padding(4);
			this->btnAddat->Name = L"btnAddat";
			this->btnAddat->Size = System::Drawing::Size(285, 51);
			this->btnAddat->TabIndex = 4;
			this->btnAddat->Text = L"Добавить по номеру";
			this->btnAddat->UseVisualStyleBackColor = true;
			this->btnAddat->Click += gcnew System::EventHandler(this, &MyForm::btnAddat_Click);
			// 
			// btnDeletelist
			// 
			this->btnDeletelist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDeletelist->Location = System::Drawing::Point(15, 505);
			this->btnDeletelist->Margin = System::Windows::Forms::Padding(4);
			this->btnDeletelist->Name = L"btnDeletelist";
			this->btnDeletelist->Size = System::Drawing::Size(285, 51);
			this->btnDeletelist->TabIndex = 5;
			this->btnDeletelist->Text = L"Очистить список";
			this->btnDeletelist->UseVisualStyleBackColor = true;
			this->btnDeletelist->Click += gcnew System::EventHandler(this, &MyForm::btnDeletelist_Click);
			// 
			// lbxStudents
			// 
			this->lbxStudents->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbxStudents->FormattingEnabled = true;
			this->lbxStudents->ItemHeight = 24;
			this->lbxStudents->Location = System::Drawing::Point(328, 15);
			this->lbxStudents->Margin = System::Windows::Forms::Padding(4);
			this->lbxStudents->Name = L"lbxStudents";
			this->lbxStudents->SelectionMode = System::Windows::Forms::SelectionMode::MultiExtended;
			this->lbxStudents->Size = System::Drawing::Size(334, 196);
			this->lbxStudents->TabIndex = 6;
			// 
			// lbxMarks
			// 
			this->lbxMarks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbxMarks->FormattingEnabled = true;
			this->lbxMarks->ItemHeight = 24;
			this->lbxMarks->Location = System::Drawing::Point(669, 15);
			this->lbxMarks->Margin = System::Windows::Forms::Padding(4);
			this->lbxMarks->Name = L"lbxMarks";
			this->lbxMarks->Size = System::Drawing::Size(643, 196);
			this->lbxMarks->TabIndex = 7;
			// 
			// tbmatan
			// 
			this->tbmatan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbmatan->Location = System::Drawing::Point(792, 345);
			this->tbmatan->Margin = System::Windows::Forms::Padding(4);
			this->tbmatan->Name = L"tbmatan";
			this->tbmatan->Size = System::Drawing::Size(175, 30);
			this->tbmatan->TabIndex = 8;
			// 
			// tbenglish
			// 
			this->tbenglish->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbenglish->Location = System::Drawing::Point(792, 384);
			this->tbenglish->Margin = System::Windows::Forms::Padding(4);
			this->tbenglish->Name = L"tbenglish";
			this->tbenglish->Size = System::Drawing::Size(175, 30);
			this->tbenglish->TabIndex = 9;
			// 
			// tbinfa
			// 
			this->tbinfa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbinfa->Location = System::Drawing::Point(792, 306);
			this->tbinfa->Margin = System::Windows::Forms::Padding(4);
			this->tbinfa->Name = L"tbinfa";
			this->tbinfa->Size = System::Drawing::Size(175, 30);
			this->tbinfa->TabIndex = 10;
			// 
			// lblinfa
			// 
			this->lblinfa->AutoSize = true;
			this->lblinfa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblinfa->Location = System::Drawing::Point(514, 305);
			this->lblinfa->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblinfa->Name = L"lblinfa";
			this->lblinfa->Size = System::Drawing::Size(199, 31);
			this->lblinfa->TabIndex = 11;
			this->lblinfa->Text = L"Информатика:";
			// 
			// lblmatan
			// 
			this->lblmatan->AutoSize = true;
			this->lblmatan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblmatan->Location = System::Drawing::Point(514, 344);
			this->lblmatan->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblmatan->Name = L"lblmatan";
			this->lblmatan->Size = System::Drawing::Size(178, 31);
			this->lblmatan->TabIndex = 12;
			this->lblmatan->Text = L"Мат. Анализ:";
			// 
			// lblenglish
			// 
			this->lblenglish->AutoSize = true;
			this->lblenglish->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblenglish->Location = System::Drawing::Point(514, 382);
			this->lblenglish->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblenglish->Name = L"lblenglish";
			this->lblenglish->Size = System::Drawing::Size(237, 31);
			this->lblenglish->TabIndex = 13;
			this->lblenglish->Text = L"Английский язык:";
			// 
			// tbname
			// 
			this->tbname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbname->Location = System::Drawing::Point(792, 230);
			this->tbname->Margin = System::Windows::Forms::Padding(4);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(175, 30);
			this->tbname->TabIndex = 14;
			// 
			// lblname
			// 
			this->lblname->AutoSize = true;
			this->lblname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblname->Location = System::Drawing::Point(362, 229);
			this->lblname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblname->Name = L"lblname";
			this->lblname->Size = System::Drawing::Size(126, 31);
			this->lblname->TabIndex = 15;
			this->lblname->Text = L"Студент:";
			// 
			// btnChange
			// 
			this->btnChange->BackColor = System::Drawing::Color::White;
			this->btnChange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnChange->Location = System::Drawing::Point(15, 379);
			this->btnChange->Margin = System::Windows::Forms::Padding(4);
			this->btnChange->Name = L"btnChange";
			this->btnChange->Size = System::Drawing::Size(285, 119);
			this->btnChange->TabIndex = 16;
			this->btnChange->Text = L"Редактировать по номеру";
			this->btnChange->UseVisualStyleBackColor = false;
			this->btnChange->Click += gcnew System::EventHandler(this, &MyForm::btnChange_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(362, 305);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 31);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Предметы:";
			// 
			// lblnum
			// 
			this->lblnum->AutoSize = true;
			this->lblnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblnum->Location = System::Drawing::Point(362, 266);
			this->lblnum->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblnum->Name = L"lblnum";
			this->lblnum->Size = System::Drawing::Size(266, 31);
			this->lblnum->TabIndex = 18;
			this->lblnum->Text = L"Порядковый номер:";
			// 
			// tbnum
			// 
			this->tbnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbnum->Location = System::Drawing::Point(792, 268);
			this->tbnum->Margin = System::Windows::Forms::Padding(4);
			this->tbnum->Name = L"tbnum";
			this->tbnum->Size = System::Drawing::Size(175, 30);
			this->tbnum->TabIndex = 19;
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnOK->Location = System::Drawing::Point(308, 379);
			this->btnOK->Margin = System::Windows::Forms::Padding(4);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(115, 54);
			this->btnOK->TabIndex = 20;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MyForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCancel->Location = System::Drawing::Point(308, 440);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(115, 58);
			this->btnCancel->TabIndex = 21;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MyForm::btnCancel_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1371, 571);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbnum);
			this->Controls->Add(this->lblnum);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnChange);
			this->Controls->Add(this->lblname);
			this->Controls->Add(this->tbname);
			this->Controls->Add(this->lblenglish);
			this->Controls->Add(this->lblmatan);
			this->Controls->Add(this->lblinfa);
			this->Controls->Add(this->tbinfa);
			this->Controls->Add(this->tbenglish);
			this->Controls->Add(this->tbmatan);
			this->Controls->Add(this->lbxMarks);
			this->Controls->Add(this->lbxStudents);
			this->Controls->Add(this->btnDeletelist);
			this->Controls->Add(this->btnAddat);
			this->Controls->Add(this->btnSort);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnRemoveat);
			this->Controls->Add(this->btnAppend);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		List <Student> lst;
	private:
		Student ENTER() {
			Student temp;
			/*char* str = (char*)(void*)Marshal::StringToHGlobalAnsi(tbname->Text);*/
			temp.name = (char*)(void*)Marshal::StringToHGlobalAnsi(tbname->Text);
			temp.m.infa = Convert::ToSingle(tbinfa->Text);
			temp.m.matan = Convert::ToSingle(tbmatan->Text);
			temp.m.english = Convert::ToSingle(tbenglish->Text);
			return temp;
		}
		
		void update() {
			lbxStudents->Items->Clear();
			lbxMarks->Items->Clear();
			if (lst.head == nullptr) 
				return;
			ListNode <Student>* temp = lst.head;
			for (int i = 0; temp != nullptr; temp = temp->next, i++) {
				lbxStudents->Items->Add(Convert::ToString(i) + ") " + Marshal::PtrToStringAnsi((IntPtr)temp->value.name));
				lbxMarks->Items->Add("Информатика: " + Convert::ToString(temp->value.m.infa)
					+ "; Мат. Анализ: " + Convert::ToString(temp->value.m.matan)
					+ "; Английский язык: " + Convert::ToString(temp->value.m.english) + ".");
			}
			deletenode(temp);
		}
	bool push = false;
	int num1;
	private: System::Void btnAppend_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tbinfa->Text == "" || tbmatan->Text == "" || tbenglish->Text == "" 
			|| tbname->Text == "" || push == true)
			return;
		append<Student>(lst, ENTER());
		update();
	}
	private: System::Void btnAddat_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = lbxStudents->SelectedItems->Count;
		if (n < 1)
			return;
		tbnum->Text = Convert::ToString(lbxStudents->SelectedIndices[0]);
		if (tbnum->Text == "" || tbinfa->Text == "" || tbmatan->Text == "" 
			|| tbenglish->Text == "" || tbname->Text == "" || push == true)
			return;
		addat<Student>(lst, ENTER(), Convert::ToInt32(lbxStudents->SelectedIndices[0]));
		update();
	}
	private: System::Void btnRemoveat_Click(System::Object^ sender, System::EventArgs^ e) {
		if (push == true)
			return;
		ListNode <Student>* temp = lst.head;
		int n = lbxStudents->SelectedItems->Count;
		for (int j = n - 1; j >= 0; j--) {
			int n1 = Convert::ToInt32(lbxStudents->SelectedIndices[j]);
			for (int i = 0; i < n1; i++) {
				if (temp->next != nullptr)
					temp = temp->next;
			}
				Marshal::FreeHGlobal((IntPtr)temp->value.name);
				temp = lst.head;
		}
		for (int j = n - 1; j >= 0; j--)
			removeat(lst, Convert::ToInt32(lbxStudents->SelectedIndices[j]));
		update();
	}
	private: System::Void btnSort_Click(System::Object^ sender, System::EventArgs^ e) {
		if (push == true)
			return;
		sort(lst);
		update();
	}
	private: System::Void btnChange_Click(System::Object^ sender, System::EventArgs^ e) {
		ListNode <Student>* temp = lst.head;
		int n = lbxStudents->SelectedItems->Count;
		if (n < 1)
			return;
		push = true;
		num1 = Convert::ToInt32(lbxStudents->SelectedIndices[0]);
		for (int i = 0; i < num1; temp = temp->next, i++) {}
		tbname->Text = Marshal::PtrToStringAnsi((IntPtr)temp->value.name);
		tbnum->Text = Convert::ToString(num1);
		tbinfa->Text = Convert::ToString(temp->value.m.infa);
		tbmatan->Text = Convert::ToString(temp->value.m.matan);
		tbenglish->Text = Convert::ToString(temp->value.m.english);
		this->btnChange->BackColor = System::Drawing::Color::LightBlue;
	}
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (push == true)
			return;
		ListNode <Student>* temp = lst.head;
		int num = 0;
		char* NAME = (char*)(void*)Marshal::StringToHGlobalAnsi(tbname->Text);
		String^ summ = "Найденный(е) студент(ы):" + "\n";
		bool ok = true;
		while (temp != nullptr) {
			if (strcmp(NAME, temp->value.name) == 0) {
				summ += num + ") " + Marshal::PtrToStringAnsi((IntPtr)temp->value.name)
					+ " Информатика: " + Convert::ToString(temp->value.m.infa)
					+ "; Мат. Анализ: " + Convert::ToString(temp->value.m.matan)
					+ "; Английский язык: " + Convert::ToString(temp->value.m.english) + ".\n";
				ok = false;
			}
			temp = temp->next;
			num++;
		}
		if (ok)
			summ = "Студент(ы) с таким ФИО не найден(ы)";
		Marshal::FreeHGlobal((IntPtr)NAME);
		MessageBox::Show(summ);
	}
	private: System::Void btnDeletelist_Click(System::Object^ sender, System::EventArgs^ e) {
		if (push == true)
			return;
		ListNode <Student>* temp = lst.head;
		for (int i = 0; temp != nullptr; temp = temp->next, i++) {
			Marshal::FreeHGlobal((IntPtr)temp->value.name);
		}
		deletelist(lst);
		update();
		
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		push = false;
		this->btnChange->BackColor = System::Drawing::Color::White;
	}
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		ListNode <Student>* temp = lst.head;
		if (tbinfa->Text == "" || tbmatan->Text == "" || tbenglish->Text == "" 
			|| tbname->Text == "" || push == false || lst.head == nullptr)
			return;
		for (int i = 0; i < num1; i++) {
			temp = temp->next;
		}
		char* s = (char*)(void*)Marshal::StringToHGlobalAnsi(tbname->Text);
		temp->value.name = s;
		temp->value.m.infa = Convert::ToSingle(tbinfa->Text);
		temp->value.m.matan = Convert::ToSingle(tbmatan->Text);
		temp->value.m.english = Convert::ToSingle(tbenglish->Text);
		push = false;
		this->btnChange->BackColor = System::Drawing::Color::White;
		update();
	}
	};
}

#pragma once
#include "tree.h"
#include <msclr\marshal_cppstd.h>

namespace VisualTree {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		tree *tf;
		MyForm(void)
		{
			InitializeComponent();
			//
			tf = new tree;
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  output;
	private: System::Windows::Forms::TextBox^  input;
	private: System::Windows::Forms::Button^  AddContent;
	private: System::Windows::Forms::Button^  AddNext;
	private: System::Windows::Forms::Button^  DelCont;



	private: System::Windows::Forms::Button^  GoUp;
	private: System::Windows::Forms::Button^  GoDown;
	private: System::Windows::Forms::Button^  GoRight;
	private: System::Windows::Forms::Button^  DelNext;
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
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->AddContent = (gcnew System::Windows::Forms::Button());
			this->AddNext = (gcnew System::Windows::Forms::Button());
			this->DelCont = (gcnew System::Windows::Forms::Button());
			this->GoUp = (gcnew System::Windows::Forms::Button());
			this->GoDown = (gcnew System::Windows::Forms::Button());
			this->GoRight = (gcnew System::Windows::Forms::Button());
			this->DelNext = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// output
			// 
			this->output->CausesValidation = false;
			this->output->Location = System::Drawing::Point(22, 35);
			this->output->Multiline = true;
			this->output->Name = L"output";
			this->output->ReadOnly = true;
			this->output->Size = System::Drawing::Size(270, 332);
			this->output->TabIndex = 0;
			this->output->TextChanged += gcnew System::EventHandler(this, &MyForm::output_TextChanged);
			// 
			// input
			// 
			this->input->Location = System::Drawing::Point(298, 35);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(260, 26);
			this->input->TabIndex = 1;
			// 
			// AddContent
			// 
			this->AddContent->Location = System::Drawing::Point(298, 67);
			this->AddContent->Name = L"AddContent";
			this->AddContent->Size = System::Drawing::Size(125, 30);
			this->AddContent->TabIndex = 2;
			this->AddContent->Text = L"Add Content";
			this->AddContent->UseVisualStyleBackColor = true;
			this->AddContent->Click += gcnew System::EventHandler(this, &MyForm::AddContent_Click);
			// 
			// AddNext
			// 
			this->AddNext->Location = System::Drawing::Point(433, 67);
			this->AddNext->Name = L"AddNext";
			this->AddNext->Size = System::Drawing::Size(125, 30);
			this->AddNext->TabIndex = 3;
			this->AddNext->Text = L"Add Next";
			this->AddNext->UseVisualStyleBackColor = true;
			this->AddNext->Click += gcnew System::EventHandler(this, &MyForm::AddNext_Click);
			// 
			// DelCont
			// 
			this->DelCont->Location = System::Drawing::Point(298, 103);
			this->DelCont->Name = L"DelCont";
			this->DelCont->Size = System::Drawing::Size(125, 30);
			this->DelCont->TabIndex = 4;
			this->DelCont->Text = L"Delete Cont";
			this->DelCont->UseVisualStyleBackColor = true;
			this->DelCont->Click += gcnew System::EventHandler(this, &MyForm::DelCont_Click);
			// 
			// GoUp
			// 
			this->GoUp->Location = System::Drawing::Point(298, 139);
			this->GoUp->Name = L"GoUp";
			this->GoUp->Size = System::Drawing::Size(40, 40);
			this->GoUp->TabIndex = 5;
			this->GoUp->Text = L"/\\";
			this->GoUp->UseVisualStyleBackColor = true;
			this->GoUp->Click += gcnew System::EventHandler(this, &MyForm::GoUp_Click);
			// 
			// GoDown
			// 
			this->GoDown->Location = System::Drawing::Point(298, 180);
			this->GoDown->Name = L"GoDown";
			this->GoDown->Size = System::Drawing::Size(40, 40);
			this->GoDown->TabIndex = 6;
			this->GoDown->Text = L"\\/";
			this->GoDown->UseVisualStyleBackColor = true;
			this->GoDown->Click += gcnew System::EventHandler(this, &MyForm::GoDown_Click);
			// 
			// GoRight
			// 
			this->GoRight->Location = System::Drawing::Point(339, 180);
			this->GoRight->Name = L"GoRight";
			this->GoRight->Size = System::Drawing::Size(40, 40);
			this->GoRight->TabIndex = 7;
			this->GoRight->Text = L">";
			this->GoRight->UseVisualStyleBackColor = true;
			this->GoRight->Click += gcnew System::EventHandler(this, &MyForm::GoRight_Click);
			// 
			// DelNext
			// 
			this->DelNext->Location = System::Drawing::Point(433, 103);
			this->DelNext->Name = L"DelNext";
			this->DelNext->Size = System::Drawing::Size(125, 30);
			this->DelNext->TabIndex = 8;
			this->DelNext->Text = L"Delete Next";
			this->DelNext->UseVisualStyleBackColor = true;
			this->DelNext->Click += gcnew System::EventHandler(this, &MyForm::DelNext_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 394);
			this->Controls->Add(this->DelNext);
			this->Controls->Add(this->GoRight);
			this->Controls->Add(this->GoDown);
			this->Controls->Add(this->GoUp);
			this->Controls->Add(this->DelCont);
			this->Controls->Add(this->AddNext);
			this->Controls->Add(this->AddContent);
			this->Controls->Add(this->input);
			this->Controls->Add(this->output);
			this->Name = L"MyForm";
			this->Text = L"TreeRepresenter";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void AddContent_Click(System::Object^  sender, System::EventArgs^  e)
{
	std::string t = msclr::interop::marshal_as<std::string>(this->input->Text);
	if (t != "")
	{
		tf->inscont();
		tf->write(t);
		string txt;
		tf->out(tf->getroot(), txt);
		output->Text = gcnew System::String(txt.c_str());
		return;
	}
}
private: System::Void AddNext_Click(System::Object^  sender, System::EventArgs^  e) 
{
	std::string t = msclr::interop::marshal_as<std::string>(this->input->Text);
	if (t != "")
	{
	 	tf->inssl();
		tf->write(t);
		string txt;
		tf->out(tf->getroot(), txt);
		output->Text = gcnew System::String(txt.c_str());
		return;
	}
}
private: System::Void GoUp_Click(System::Object^  sender, System::EventArgs^  e) 
{
	tf->moveup();
	string txt;
	tf->out(tf->getroot(), txt);
	output->Text = gcnew System::String(txt.c_str());
	return;
}
private: System::Void GoDown_Click(System::Object^  sender, System::EventArgs^  e) 
{
	tf->movesl();
	string txt;
	tf->out(tf->getroot(), txt);
	output->Text = gcnew System::String(txt.c_str());
	return;
}
private: System::Void GoRight_Click(System::Object^  sender, System::EventArgs^  e) 
{
	tf->movecont();
	string txt;
	tf->out(tf->getroot(), txt);
	output->Text = gcnew System::String(txt.c_str());
	return;
}
private: System::Void output_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{

}
private: System::Void DelNext_Click(System::Object^  sender, System::EventArgs^  e) 
{
	tf->delsl();
	string txt;
	tf->out(tf->getroot(), txt);
	output->Text = gcnew System::String(txt.c_str());
	return;
}
private: System::Void DelCont_Click(System::Object^  sender, System::EventArgs^  e) 
{
	tf->delcont();
	string txt;
	tf->out(tf->getroot(), txt);
	output->Text = gcnew System::String(txt.c_str());
	return;
}
};
}

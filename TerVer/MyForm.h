#pragma once
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;


	private: System::Windows::Forms::TextBox^  textBox5;





	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;





	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;







	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ delta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ M;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ qi;










































	protected:
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->F_3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->delta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->M = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(6, 27);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(501, 327);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(201, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->F_1, this->F2,
					this->F3, this->F4, this->delta, this->M, this->x_, this->qi
			});
			this->dataGridView1->Location = System::Drawing::Point(5, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(680, 327);
			this->dataGridView1->TabIndex = 2;
			// 
			// F_3
			// 
			this->F_3->HeaderText = L"Xi/N";
			this->F_3->Name = L"F_3";
			this->F_3->ReadOnly = true;
			this->F_3->Width = 50;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 341);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"p1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(59, 339);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(115, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0,3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(177, 341);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"p2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(201, 339);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(113, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0,5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(95, 368);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(112, 366);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"100000";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(318, 339);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(442, 64);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = resources->GetString(L"textBox5.Text");
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(1, 1);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(861, 485);
			this->tabControl1->TabIndex = 12;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox14);
			this->tabPage1->Controls->Add(this->textBox15);
			this->tabPage1->Controls->Add(this->textBox16);
			this->tabPage1->Controls->Add(this->textBox17);
			this->tabPage1->Controls->Add(this->textBox18);
			this->tabPage1->Controls->Add(this->textBox13);
			this->tabPage1->Controls->Add(this->textBox12);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->textBox10);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->numericUpDown1);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(853, 459);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Данные";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(360, 413);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(30, 20);
			this->textBox14->TabIndex = 31;
			this->textBox14->Text = L"0";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(396, 413);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(30, 20);
			this->textBox15->TabIndex = 30;
			this->textBox15->Text = L"0";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(432, 413);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(30, 20);
			this->textBox16->TabIndex = 29;
			this->textBox16->Text = L"0";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(468, 413);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(30, 20);
			this->textBox17->TabIndex = 28;
			this->textBox17->Text = L"0";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(504, 412);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(30, 20);
			this->textBox18->TabIndex = 27;
			this->textBox18->Text = L"0";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(324, 413);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(30, 20);
			this->textBox13->TabIndex = 26;
			this->textBox13->Text = L"0";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(288, 413);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(30, 20);
			this->textBox12->TabIndex = 25;
			this->textBox12->Text = L"0";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(252, 413);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(30, 20);
			this->textBox11->TabIndex = 24;
			this->textBox11->Text = L"0";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(216, 413);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(30, 20);
			this->textBox10->TabIndex = 23;
			this->textBox10->Text = L"0";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(180, 413);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(30, 20);
			this->textBox9->TabIndex = 22;
			this->textBox9->Text = L"0";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(120, 413);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(37, 20);
			this->numericUpDown1->TabIndex = 21;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 415);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(101, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Число интервалов";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(705, 74);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(125, 17);
			this->checkBox1->TabIndex = 19;
			this->checkBox1->Text = L"Верность гипотезы";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(752, 48);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(89, 20);
			this->textBox8->TabIndex = 18;
			this->textBox8->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(710, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Alpha = ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(752, 22);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(89, 20);
			this->textBox7->TabIndex = 16;
			this->textBox7->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(702, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"1-F(R0) =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(770, 437);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(691, 314);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Max(Delta) = ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(759, 312);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(89, 20);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"0";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->zedGraphControl1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(853, 459);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"График ";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(596, 289);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(91, 20);
			this->textBox6->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(524, 292);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Max(DeltaF) = ";
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"Yi";
			this->F_1->Name = L"F_1";
			this->F_1->Width = 20;
			// 
			// F2
			// 
			this->F2->HeaderText = L"Xi";
			this->F2->Name = L"F2";
			this->F2->ReadOnly = true;
			this->F2->Width = 50;
			// 
			// F3
			// 
			this->F3->HeaderText = L"Xi/n";
			this->F3->Name = L"F3";
			this->F3->ReadOnly = true;
			this->F3->Width = 55;
			// 
			// F4
			// 
			this->F4->HeaderText = L"P(i)";
			this->F4->Name = L"F4";
			this->F4->ReadOnly = true;
			this->F4->Width = 132;
			// 
			// delta
			// 
			this->delta->HeaderText = L"Delta";
			this->delta->Name = L"delta";
			this->delta->ReadOnly = true;
			this->delta->Width = 132;
			// 
			// M
			// 
			this->M->HeaderText = L"M";
			this->M->Name = L"M";
			// 
			// x_
			// 
			this->x_->HeaderText = L"x_";
			this->x_->Name = L"x_";
			// 
			// qi
			// 
			this->qi->HeaderText = L"qi";
			this->qi->Name = L"qi";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 482);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Лабароторная работа №1";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 
		double f1(long double x, long double y, long double &p){
			int res = 0;
			int f = 0;
			long double sum = 1; // начальный коэф, нужен для вычисления разности 1-"сумма"
			p = x; // вероятность закончить за 0 бросков равна вероятности попадания первого игрока
			while (f == 0)
			{
				if (res > 8)
				{
					int i = 0;
				}
				double ff1 = (double)rand() / RAND_MAX;
				if (x >= ff1)
				{
					f = 1;
				}
				else
				{
					double ff2 = (double)rand() / RAND_MAX;
					if (y >= ff2)
					{
						f = 1;
						res++;
						sum = sum - p;
						p = sum * (x + (1 - x) * y);
					}
					else
					{
						res++;
						sum = sum - p;
						p = sum * (x + (1 - x) * y);
					}
				}
			}
			return res;
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

		srand(time(NULL));

		// Интервал, где есть данные
		double xmin = 0;
		double xmax = 1;

		long double p1 = Convert::ToDouble(textBox1->Text); // Вероятность попадания 1 игрока
		long double p2 = Convert::ToDouble(textBox2->Text); // Вероятность попадания 2 игрока

		double h = 1.0 / Convert::ToDouble(textBox3->Text); // Шаг для сетки
		double hh = 1.0 / h;

		double xmin_limit = (xmin - 0.1) * 10;
		double xmax_limit = (xmax + 0.1) * 10;

		double alpha = Convert::ToDouble(textBox8->Text);
/*
		double ymin_limit = -1.0;
		double ymax_limit = 100.0;
*/
		// Список точек 
		int i = 0;
		int kk = 0;
		int a[1100];
		int b[100];
		double nump[20]; //вероятности на интервалах
		double numa[20]; //интервалы
		double numaa[20]; //колличество в точке
		double numpa[20]; // колличества на интервале
		int numi = (int)numericUpDown1->Value; //колличество точек разбиения
		
		for (int l = 0; l < 1100; l++)a[l] = 0;
		for (int l = 0; l < 100; l++)b[l] = 0;
		dataGridView1->Rows->Clear();
		for (int l = 0; l < 20; l++) // инициализация перменных
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[l]->Cells[0]->Value = l;
			dataGridView1->Rows[l]->Cells[1]->Value = 0.0;
			dataGridView1->Rows[l]->Cells[2]->Value = 0.0;
			dataGridView1->Rows[l]->Cells[3]->Value = 0.0;
			dataGridView1->Rows[l]->Cells[4]->Value = 0.0;
			numaa[l] = -1;
			numa[l] = 0;
			nump[l] = 0;
			numpa[l] = 0; 
		}
		for (int l = 0; l < (int)numericUpDown1->Value; l++)
		{
			if (l == 0)numa[l] = Convert::ToDouble(textBox9->Text);
			if (l == 1)numa[l] = Convert::ToDouble(textBox10->Text);
			if (l == 2)numa[l] = Convert::ToDouble(textBox11->Text);
			if (l == 3)numa[l] = Convert::ToDouble(textBox12->Text);
			if (l == 4)numa[l] = Convert::ToDouble(textBox13->Text);
			if (l == 5)numa[l] = Convert::ToDouble(textBox14->Text);
			if (l == 6)numa[l] = Convert::ToDouble(textBox15->Text);
			if (l == 7)numa[l] = Convert::ToDouble(textBox16->Text);
			if (l == 8)numa[l] = Convert::ToDouble(textBox17->Text);
			if (l == 9)numa[l] = Convert::ToDouble(textBox18->Text);
		}
		double m = 0;
		int mk = 0;
		double r0 = 0;
		double* pa = new double[100005];
		for (double x = xmin + h; x <= xmax; x += h)
		{
			long double p = 0;
			//Добавление на график
			//f1_list->Add(x, f1(p1, p2, p));
			//Печать в таблицу
			int k = f1(p1, p2, p);// № эксперимента	
			a[k]++;
			pa[i] = k;
			//dataGridView1->Rows[k]->Cells[3]->Value = p;
			dataGridView1->Rows[k]->Cells[2]->Value = a[k] / hh;
			dataGridView1->Rows[k]->Cells[1]->Value = a[k];
			dataGridView1->Rows[k]->Cells[4]->Value = fabs(p - (a[k] / hh));
			i++;
			if (k > mk) mk = k;
		}
		std::sort(pa, pa + i - 1);
		double ma = 0; //Теор мат ожидание
		double ma1 = 0; // выборочное
		double dis = 0; // Теор дисперсия
		double dis1 = 0; // выборочная
		double p = p1;															//
		double sum = 1;															//
		int kkkk = 0;	//счётчик строк для теор вероятностей					//    Вычисление теоретических вероятностей
		while (p > 0.0000001)													//
		{																		//
			dataGridView1->Rows[kkkk]->Cells[3]->Value = p;						//
			ma = ma + kkkk * (double)dataGridView1->Rows[kkkk]->Cells[3]->Value;//    Мат ожидаение: сумма по всем, координата умноженная на вероятность в этой точке
			sum = sum - p;														//
			p = sum * (p1 + (1 - p1) * p2);										//
			kkkk++;																//
		}																		//
		for (int iii = 0; iii < kkkk; iii++)												//
		{																					//
			double jk = (iii - ma) * (iii - ma);											//  Квадрат разницы между матожиданием и координатой
			dis = dis + jk * (double)dataGridView1->Rows[iii]->Cells[3]->Value;				//  Дисперсия: сумма по всем, квадрат на вероятность в точке
		}																					//
		double f1count = 0;
		double f2count = 0;
		int lll = 0;  // колличество ненулевых строк
		int xxmin = 100;
		int xxmax = 0;
		double maxf = 0;
		for (int j = 0; j < 19; j++)
		{
			double mm = fabs((double)dataGridView1->Rows[j]->Cells[3]->Value - (double)dataGridView1->Rows[j]->Cells[2]->Value);
			if (mm > m)m = mm;
				if ((int)dataGridView1->Rows[j]->Cells[0]->Value < xxmin)xxmin = (int)dataGridView1->Rows[j]->Cells[0]->Value;
				if ((int)dataGridView1->Rows[j]->Cells[0]->Value > xxmax)xxmax = (int)dataGridView1->Rows[j]->Cells[0]->Value;
				f1count = f1count + (double)dataGridView1->Rows[j]->Cells[2]->Value;
				f2count = f2count + (double)dataGridView1->Rows[j]->Cells[3]->Value;
				f1_list->Add(j, f1count);
				f1_list->Add(j + 1, f1count);
				f2_list->Add(j, f2count);
				f2_list->Add(j + 1, f2count);
				numaa[j] = (int)dataGridView1->Rows[j]->Cells[0]->Value;
				lll++;
				if (fabs(f1count - f2count) > maxf) maxf = fabs(f1count - f2count);
				//ma = ma + j * (double)dataGridView1->Rows[j]->Cells[2]->Value;
				ma1 = ma1 + j * (double)dataGridView1->Rows[j]->Cells[3]->Value;
		}
		int ni = 0;
		int nii = 0;
		if ((int)numericUpDown1->Value != 0) // заполнение векторов вероятностей для разбиений
		{
			while (ni < numi)
			{
				
				while (numaa[nii] < numa[ni])
				{
					if (numaa[nii] != -1)
					{
						nump[ni] = nump[ni] + (double)dataGridView1->Rows[nii]->Cells[3]->Value; // вероятность на интервале
						numpa[ni] = numpa[ni] + a[nii]; // колличество результатов выпавших не интервал
						nii++;
					}
				}
				ni++;
			}
			while (nii < mk + 1)
			{
				if (numaa[nii] != -1)
				{
					nump[ni] = nump[ni] + (double)dataGridView1->Rows[nii]->Cells[3]->Value;
					numpa[ni] = numpa[ni] + a[nii];
					nii++;
				}
			}
		}
		for (int j = 0; j < mk + 1; j++)
		{
			if ((double)dataGridView1->Rows[j]->Cells[2]->Value != 0.0)
			{
				double jk = (j - ma) * (j - ma);
				//dis = dis + jk * (double)dataGridView1->Rows[j]->Cells[3]->Value;
				dis1 = dis1 + jk * (double)dataGridView1->Rows[j]->Cells[2]->Value; // выборочная вероятность расчитывается так же как обычная, только с другими коэффициентами
				double we = (int)dataGridView1->Rows[j]->Cells[1]->Value;
				double we1 = (double)dataGridView1->Rows[j]->Cells[3]->Value;
				if ((int)numericUpDown1->Value == 0) r0 = r0 + (pow(we - we1 * i, 2) / (i * we1)); //общий коэффициент без разбиения
			}
		}
		if ((int)numericUpDown1->Value == 0)
		{
			double fr0 = 0;
			const double ee = 2.718281828459045;
			double aa = pow(2, (-(lll - 1) / 2)) / tgamma((lll - 1) / 2) * r0 / 20000; // общий коэффициент с разбиением
			for (int j = 1; j <= 10000; j++)
			{
				fr0 = fr0 + (pow(r0 * (j - 1) / 10000, (lll - 1) / 2 - 1) * pow(ee, -(r0 * (j - 1) / 10000) / 2) + pow(r0 * (j) / 10000, (lll - 1) / 2 - 1) * pow(ee, -(r0 * (j) / 10000) / 2));
			}
			fr0 = 1 - fr0 * aa;
			textBox7->Text = Convert::ToString(fr0);
			if (fr0 < alpha)checkBox1->Checked = true;
			else checkBox1->Checked = false;
		}
		else
		{
			for (int j = 0; j < numi + 1; j++)
			{
				if (nump[j] != 0)r0 = r0 + (pow(numpa[j] - nump[j] * i, 2) / (i * nump[j]));
			}
			double fr0 = 0;
			const double ee = 2.718281828459045;
			long double aa = pow(2, (-(numi) / 2)) / tgamma((numi) / 2) * r0 / 20000;
			if (aa == 0)aa = 0.000000001;
			if (numi != 1)
			{
				for (int j = 1; j <= 10000; j++)
				{
					fr0 = fr0 + (pow(r0 * (j - 1) / 10000, (numi) / 2 - 1) * pow(ee, -(r0 * (j - 1) / 10000) / 2) + pow(r0 * (j) / 10000, (numi) / 2 - 1) * pow(ee, -(r0 * (j) / 10000) / 2));
				}
			}
			else
			{
				fr0=fr0+ (pow(r0 * (2 - 1) / 10000, (numi) / 2 - 1) * pow(ee, -(r0 * (1 - 1) / 10000) / 2) + pow(r0 * (1) / 10000, (numi) / 2 - 1) * pow(ee, -(r0 * (1) / 10000) / 2));
				for (int j = 2; j <= 10000; j++)
				{
					fr0 = fr0 + (pow(r0 * (j - 1) / 10000, (numi) / 2 - 1) * pow(ee, -(r0 * (j - 1) / 10000) / 2) + pow(r0 * (j) / 10000, (numi) / 2 - 1) * pow(ee, -(r0 * (j) / 10000) / 2));
				}
				//for (int gg = 1; gg < 10000; gg++)
				//{
				//	double rr = 1;
				//	for (int g = 1; g <= gg; g++)
				//	{
				//		rr = rr * ((-0.5) + g);
				//	}
				//	fr0 = fr0 + pow(r0 * pow(2, -0.5), gg) / rr;
				//}
				//fr0 = (fr0 + 1)*pow(ee, -r0)*pow(r0, -0.5)/tgamma(0.5);
			}
				fr0 = 1 - fr0 * aa;
				textBox7->Text = Convert::ToString(fr0);
				if (fr0 < alpha)checkBox1->Checked = true;
				else checkBox1->Checked = false;
		}
		for (int l2 = 0; l2 < 20; l2++)
		{
			dataGridView1->Rows[l2+1]->Cells[7]->Value = nump[l2];
		}
		dataGridView1->Rows[5]->Cells[5]->Value = dis;
		dataGridView1->Rows[5]->Cells[6]->Value = dis1;
		dataGridView1->Rows[0]->Cells[5]->Value = ma;
		dataGridView1->Rows[0]->Cells[6]->Value = ma1;
		dataGridView1->Rows[2]->Cells[5]->Value = "|M-x_|";
		dataGridView1->Rows[7]->Cells[5]->Value = "|D-S^2|";
		dataGridView1->Rows[2]->Cells[6]->Value = fabs(ma - ma1);
		dataGridView1->Rows[7]->Cells[6]->Value = fabs(dis - dis1);
		dataGridView1->Rows[4]->Cells[6]->Value = "S^2";
		dataGridView1->Rows[4]->Cells[5]->Value = "D";
		dataGridView1->Rows[9]->Cells[5]->Value = "R";
		dataGridView1->Rows[9]->Cells[6]->Value = Convert::ToString(xxmax-xxmin);
		dataGridView1->Rows[10]->Cells[5]->Value = "Me";
		dataGridView1->Rows[10]->Cells[6]->Value = Convert::ToString(pa[i / 2]);
		textBox4->Text = Convert::ToString(m);
		textBox6->Text = Convert::ToString(maxf);
		
		i = 0;
		/*for (; i < hh-1; i++)
		{
			for (int k = 0; k < 50; k++)
			{
				int kk = (int)dataGridView1->Rows[i]->Cells[1]->Value;
				if (kk == k)
				{
					dataGridView1->Rows[i]->Cells[2]->Value = a[k];
					dataGridView1->Rows[i]->Cells[3]->Value = a[k] / (hh-1);
				}
			}
		}*/
		/*for (int l = 0; l < (1.0 / h); l++)
		{
			dataGridView1->Rows[l]->Cells[2] -> Value = a[l];
		}*/
		LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red, SymbolType::None);
		LineItem Curve2 = panel->AddCurve("F2(x)", f2_list, Color::Blue, SymbolType::None);

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
		/*
				// Устанавливаем интересующий нас интервал по оси Y
				panel->YAxis->Scale->Min = ymin_limit;
				panel->YAxis->Scale->Max = ymax_limit;
		*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

//private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
//	
//	GraphPane^ panel = zedGraphControl1->GraphPane;
//	double xmin = Convert::ToDouble(textBox5->Text);
//	double xmax = Convert::ToDouble(textBox4->Text);
//	// Устанавливаем интересующий нас интервал по оси X
//	panel->XAxis->Scale->Min = xmin;
//	panel->XAxis->Scale->Max = xmax;
//
//	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
//	// В противном случае на рисунке будет показана только часть графика, 
//	// которая умещается в интервалы по осям, установленные по умолчанию
//	zedGraphControl1->AxisChange();
//	// Обновляем график
//	zedGraphControl1->Invalidate();
//
//}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if ((int)numericUpDown1->Value > 0)textBox9->ReadOnly = false;
	else textBox9->ReadOnly = true;
	if ((int)numericUpDown1->Value > 1)textBox10->ReadOnly = false;
	else textBox10->ReadOnly = true;
	if ((int)numericUpDown1->Value > 2)textBox11->ReadOnly = false;
	else textBox11->ReadOnly = true;
	if ((int)numericUpDown1->Value > 3)textBox12->ReadOnly = false;
	else textBox12->ReadOnly = true;
	if ((int)numericUpDown1->Value > 4)textBox13->ReadOnly = false;
	else textBox13->ReadOnly = true;
	if ((int)numericUpDown1->Value > 5)textBox14->ReadOnly = false;
	else textBox14->ReadOnly = true;
	if ((int)numericUpDown1->Value > 6)textBox15->ReadOnly = false;
	else textBox15->ReadOnly = true;
	if ((int)numericUpDown1->Value > 7)textBox16->ReadOnly = false;
	else textBox16->ReadOnly = true;
	if ((int)numericUpDown1->Value > 8)textBox17->ReadOnly = false;
	else textBox17->ReadOnly = true;
	if ((int)numericUpDown1->Value > 9)textBox18->ReadOnly = false;
	else textBox18->ReadOnly = true;
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

#pragma once

#include "Utils.h"

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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ function;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NM_function;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;




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
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->function = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NM_function = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(22, 30);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->button1->Location = System::Drawing::Point(632, 401);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->X, this->function,
					this->NM_function, this->Column1
			});
			this->dataGridView1->Location = System::Drawing::Point(559, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 49;
			this->dataGridView1->Size = System::Drawing::Size(310, 327);
			this->dataGridView1->TabIndex = 2;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// function
			// 
			this->function->HeaderText = L"function";
			this->function->MinimumWidth = 6;
			this->function->Name = L"function";
			this->function->ReadOnly = true;
			this->function->Width = 120;
			// 
			// NM_function
			// 
			this->NM_function->HeaderText = L"NM_function";
			this->NM_function->MinimumWidth = 6;
			this->NM_function->Name = L"NM_function";
			this->NM_function->ReadOnly = true;
			this->NM_function->Width = 120;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"e";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 120;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 381);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"x_min";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(90, 379);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 418);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"x_max";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(90, 415);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(248, 383);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(266, 379);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,001";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(89, 484);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(50, 484);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"y_max";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(91, 449);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(48, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 453);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"y_min";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(266, 415);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(61, 20);
			this->textBox6->TabIndex = 14;
			this->textBox6->Text = L"1,0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(242, 418);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"y0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(332, 418);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"for x_min";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(672, 453);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(106, 17);
			this->checkBox1->TabIndex = 17;
			this->checkBox1->Text = L"With step control";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(266, 453);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(61, 20);
			this->textBox7->TabIndex = 19;
			this->textBox7->Text = L"0,001";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(237, 456);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"eps";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(932, 535);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

		// ��������, ��� ���� ������
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);

		double step = Convert::ToDouble(textBox3->Text);
		double eps = Convert::ToDouble(textBox7->Text);


		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;
/*
		double ymin_limit = -1.0;
		double ymax_limit = 100.0;
*/
		// ������ �����
		int i = 0;
		dataGridView1->Rows->Clear();
		double y0 = Convert::ToDouble(textBox6->Text);

		f1_list->Add(xmin, y0);
		f2_list->Add(xmin, y0);

		double y_funtion_1_RK_4;
		double y_function_1;
		std::vector<double> new_point;

		while (true)
		{
			if (checkBox1->Checked == true)
			{
				new_point = utils::next_point_with_step_conrol(utils::runge_kutta_4, utils::function_1_derivative, xmin, y0, step, eps);
			}
			else
			{
				new_point = utils::next_point(utils::runge_kutta_4, utils::function_1_derivative, xmin, y0, step, eps);
			}
			
			xmin = new_point[0];
			y_funtion_1_RK_4 = new_point[1];
			y_function_1     = utils::function_1(xmin);


			f1_list->Add(xmin, y_function_1);
			f2_list->Add(xmin, y_funtion_1_RK_4);

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = xmin;
			dataGridView1->Rows[i]->Cells[1]->Value = floor(y_function_1 * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[2]->Value = floor(y_funtion_1_RK_4 * 1000) / 1000;
			y0 = y_funtion_1_RK_4;
			step = new_point[2];
			i++;
			if (xmin > xmax)
				break;

		}

		//for (double x = xmin + step; x <= xmax; x += step)
		//{
		//	double y_function_1 = utils::function_1(x);
		//	double y_funtion_1_RK_4 = utils::runge_kutta_4(utils::function_1_derivative, step, x, y0);

		//	//���������� �� ������
		//	f1_list->Add(x, y_function_1);
		//	f2_list->Add(x, y_funtion_1_RK_4);
		//	//������ � �������
		//	dataGridView1->Rows->Add();
		//	dataGridView1->Rows[i]->Cells[0]->Value = x;
		//	dataGridView1->Rows[i]->Cells[1]->Value = floor(y_function_1 * 1000) / 1000;
		//	dataGridView1->Rows[i]->Cells[2]->Value = floor(y_funtion_1_RK_4 * 1000) / 1000;
		//	y0 = y_funtion_1_RK_4;
		//	i++;
		//}
		

		LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red,SymbolType::None);
		LineItem Curve2 = panel->AddCurve("F2(x)", f2_list, Color::Blue, SymbolType::None);

		// ������������� ������������ ��� �������� �� ��� X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
/*
		// ������������� ������������ ��� �������� �� ��� Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;
*/
		// �������� ����� AxisChange (), ����� �������� ������ �� ����. 
		// � ��������� ������ �� ������� ����� �������� ������ ����� �������, 
		// ������� ��������� � ��������� �� ����, ������������� �� ���������
		zedGraphControl1->AxisChange();
		// ��������� ������
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double xmin = Convert::ToDouble(textBox5->Text);
	double xmax = Convert::ToDouble(textBox4->Text);
	// ������������� ������������ ��� �������� �� ��� X
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;

	// �������� ����� AxisChange (), ����� �������� ������ �� ����. 
	// � ��������� ������ �� ������� ����� �������� ������ ����� �������, 
	// ������� ��������� � ��������� �� ����, ������������� �� ���������
	zedGraphControl1->AxisChange();
	// ��������� ������
	zedGraphControl1->Invalidate();

}
};
}

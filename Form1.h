#pragma once
#include "SqlServer.h"
#include <exception>
#include <iostream>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::VisualBasic::FileIO;//Add the reference

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBoxLogs;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBoxLogs = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBoxLogs, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 0, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.83784F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.83784F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 54.05405F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20.27027F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(428, 459);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(208, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Insert shortway";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(217, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Insert longway";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(3, 61);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(208, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Geography proximity";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBoxLogs
			// 
			this->textBoxLogs->AcceptsReturn = true;
			this->textBoxLogs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxLogs->BackColor = System::Drawing::SystemColors::WindowText;
			this->tableLayoutPanel1->SetColumnSpan(this->textBoxLogs, 2);
			this->textBoxLogs->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxLogs->ForeColor = System::Drawing::Color::Lime;
			this->textBoxLogs->Location = System::Drawing::Point(3, 367);
			this->textBoxLogs->Multiline = true;
			this->textBoxLogs->Name = L"textBoxLogs";
			this->textBoxLogs->ReadOnly = true;
			this->textBoxLogs->Size = System::Drawing::Size(422, 89);
			this->textBoxLogs->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tableLayoutPanel1->SetColumnSpan(this->dataGridView1, 2);
			this->dataGridView1->Location = System::Drawing::Point(3, 119);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(422, 242);
			this->dataGridView1->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(452, 483);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		/// <summary>
		/// This is a 'complex' example retrieving some data from DB and using some data from csv file(sorted). Also, creates a relation 1:N. This is really a longway (takes 85 minutes), I used for 70 k records. 
		/// </summary>
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlServer conDB;
		conDB.HelloDB();
		List<int>^ result = gcnew List<int>();
		try
		{
			String^ query = "SELECT * FROM tableName";
			SqlCommand^ command = gcnew SqlCommand(query, conDB.GetConnection());
			SqlDataReader^ reader = command->ExecuteReader();

			while (reader->Read())
			{
				result->Add(reader->GetInt32(0));
			}
			reader->Close();
		}
		catch (const std::exception& e)
		{
			using namespace std;
			cerr << e.what();
		}
		conDB.ByeDB();

		int index = 0;
		int rowsAffected = 0;
		String^ lastId = "FirstValue";//I couldn't find another way to check the first value
		TextFieldParser^ parser = gcnew TextFieldParser("C:\FILE.csv");
		parser->SetDelimiters(",");
		while (!parser->EndOfData)
		{
			array<System::String^>^ row = parser->ReadFields();
			if (result->Count > index)
			{

				if (lastId == row[0])//Checks if it's the same ID
				{
					sendRowToDB(result[index], row);//Using the same info
					lastId = row[0];
					rowsAffected++;
				}
				else {
					rowsAffected++;
					index++;
					lastId = row[0];
					sendRowToDB(result[index], row);//Using the next ID from results
				}
			}
			System::Threading::Thread::CurrentThread->Join(0);//You are gonna need it if it's a long file. (I needed for 70 K rows)
		}
	}
		   /// <summary>
		   /// Used to insert a row. Also a code snippet. It would be better leave it in SqlServer class.
		   /// </summary>
	private: void sendRowToDB(int id, array<System::String^>^ row) {
		SqlServer conDB;
		conDB.HelloDB();

		String^ query = "INSERT INTO tableName (columnID, columnName, columnName2) " +
			"VALUES (@id, @param1, @param2)";
		SqlCommand^ command = gcnew SqlCommand(query, conDB.GetConnection());
		command->Parameters->AddWithValue("@id", id);
		command->Parameters->AddWithValue("@param1", row[0]);
		command->Parameters->AddWithValue("@param2", row[1]);

		command->ExecuteNonQuery();

		conDB.ByeDB();
	}
		   /// <summary>
		  /// This adds a line in our consola textbox. 
		  /// </summary>
	private: void AddLine(String^ linea) {
		String^ actual = textBoxLogs->Text;
		textBoxLogs->Text = linea + "\r\n" + actual;
	}
	/// <summary>
	/// Example doing a batch/Bulk. In other words, insert a bunch of data to you database using a csv file. If you are getting timeout try to split the csv file.
	/// </summary>
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlServer conDB;
		DataTable^ exportData = gcnew DataTable("TableName");//Your target table

		DataColumn^ col1 = gcnew DataColumn();//it doesn't matter if you don't insert data for all you columns, but these will be null.
		col1->ColumnName = "colName1";//You should use the same name than you database column
		DataColumn^ col2 = gcnew DataColumn();
		col2->ColumnName = "colName2";//I try it without type and it worked. 

		exportData->Columns->Add(col1);
		exportData->Columns->Add(col2);

		int rowsAffected = 0;
		TextFieldParser^ parser = gcnew TextFieldParser("C:\YourFile.csv");//Leave it in you code path. Why works with  'C:/'. Don't know.
		parser->SetDelimiters(",");
		array<System::String^>^ rowX; //You can use it to know you data. So, comment the insert.
		while (!parser->EndOfData)
		{
			array<System::String^>^ rowCsv = parser->ReadFields();
			rowX = rowCsv;
			DataRow^ row = exportData->NewRow();
			row["colName1"] = rowCsv[0];
			row["colName2"] = rowCsv[1];

			exportData->Rows->Add(row);
			rowsAffected++;
		}
		conDB.HelloDB();
		SqlBulkCopy^ copy = gcnew SqlBulkCopy(conDB.GetConnection());
		copy->DestinationTableName = exportData->TableName;
		for each (DataColumn ^ column in exportData->Columns)
		{
			copy->ColumnMappings->Add(column->ToString(), column->ToString());
		}
		copy->WriteToServer(exportData);//Yes, this insert. You should give a look to yout data first. CSV are not always good formated.
		conDB.ByeDB();
		AddLine("0: " + rowX[0] + "1: " + rowX[1]);
		AddLine("Rows inserted " + Convert::ToString(rowsAffected));
	}
	/// <summary>
	/// Example getting objects near some location. You are gonna need latitude, longitude and distance (km). If your are looking for miles you have to change some values.
	/// </summary>
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlServer conDB;
		double lat = 84.8787;
		double lon = -25.846;
		float km = 0.300; //300 meters
			conDB.HelloDB();
			List<float>^ results = gcnew List<float>();
			try
			{
				String^ query = "WITH position AS(SELECT IDColumn, LongitudeColumn, LatitudeColumn, ( 6371 * acos(cos(radians(@latitude)) * cos(radians(LatitudeColumn)) * cos(radians(LongitudeColumn) - radians(@longitude)) + sin(radians(@latitude)) * sin(radians(LatitudeColumn)))) AS distance FROM TableName) SELECT * FROM position WHERE distance < @km ORDER BY distance"; 
				SqlCommand^ command = gcnew SqlCommand(query, conDB.GetConnection());
				command->Parameters->AddWithValue("@latitude", lat);
				command->Parameters->AddWithValue("@longitude", lon);
				command->Parameters->AddWithValue("@km", km);
				SqlDataReader^ reader = command->ExecuteReader();
				//Use the next to get the data using reader
				while (reader->Read())
				{
					results->Add(reader->GetInt32(0));//This only save IDColumn
				}
				reader->Close();
				//Use the next to fill a table with the data. This is nice for testing 
				SqlDataAdapter^ adapter = gcnew SqlDataAdapter();
				adapter->SelectCommand = command;
				DataTable^ dbDataset = gcnew DataTable();
				adapter->Fill(dbDataset);
				BindingSource^ source = gcnew BindingSource();

				source->DataSource = dbDataset;
				dataGridView1->DataSource = source;
				if (dbDataset->Rows->Count == 0)
				{
					AddLine("No object near");
					dataGridView1->DataSource = nullptr;
				}
				else {
					AddLine("Showing data of objects");
				}
				AddLine(conDB.ByeDB());
			}
			catch (Exception^ e) {
				AddLine("Exception");
			}

	}
};
}

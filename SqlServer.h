#pragma once
using namespace System;
using namespace Data;
using namespace Data::SqlClient;

ref class SqlServer
{
	//This is a code snippet. So, setup with your values
	String^ conString = "Data Source=IP/HOSTNAME,1433; Initial Catalog=BDNAME; User=USER; Password=PASSWORD; Connection Timeout=60; Min Pool Size=2; Max Pool Size=28;";
	SqlConnection^ connection = gcnew SqlConnection(conString);
public:
	SqlServer();
/// <summary>
/// Connect to DB using the conString. Return the state.
/// </summary>
	String^ HelloDB() {
		String^ status = "Unknow error DB";
		try
		{
			connection->Open();
			status = "DB joined";
		}
		catch (System::Data::SqlClient::SqlException^ e)
		{
			status = "Sql hello exception";
		}
		catch (Exception^ e) {
			status = "Exception hello";
		}
		return status;
	}
	/// <summary>
	/// Disconnect from DB. Return the state.
	/// </summary>
	String^ ByeDB() {
		String^ status = "Unknow error DB";
		try {
			connection->Close();
			status = "DB left";
		}
		catch (System::Data::SqlClient::SqlException^ e) {
			status = "Sql bye exception";
		}
		catch (Exception^ e) {
			status = "Exception bye";
		}
		return status;
	}
	/// <summary>
	/// In some cases you are gonna need this object, I rather use a function.
	/// </summary>
	/// <returns>DB connection (you should use it after using HelloDB)</returns>
	SqlConnection^ GetConnection() {
		return connection;
	}
};


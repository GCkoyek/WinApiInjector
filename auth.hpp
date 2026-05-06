#pragma once
#include <string>
#include <vector>
#include "curl/curl.h"
#include "EncryptString.hpp"
#include "EncryptFuncs.hpp"

extern bool IsValid;
static std::string APIKEY = E(""); // ENTER USER ID
static std::string userid = E(""); // ENTER USER ID
static std::string ProgramID = E(""); // ENTER PROGRAM ID
static std::string ProgramName = E(""); // ENTER PROGRAM Name
static std::string ProgramEncryption = E(""); // ENTER PROGRAM Encryption Key
static std::string Response1 = E("");
static std::string ResponseInvalid = E("");
static std::string ResponseExpired = E("");
static std::string ResponseHash = E("");
static std::string Response2 = E("");
static std::string ResponseBanned = E("");

class program
{
public:
	static std::tuple<std::string, std::string, std::string> login(std::string key, std::string userid, std::string pid, std::string programname, std::string skey);
	static std::vector<uint8_t> Stream(std::string key, std::string link);
};
static char PassWord[50] = "";


static size_t write_callback(void* contents, size_t size, size_t nmemb, void* userp)
{
	((std::string*)userp)->append((char*)contents, size * nmemb);
	return size * nmemb;
}

static void BAN_USER(std::string KEY, std::string REASON)
{
	CURL* curl = curl_easy_init();

	std::string data;

	std::string to_return;

	std::string link = E("https://panel.proxine.ninja/api/apiaccess.php?api=") + APIKEY + E("&action=ban&program=") + ProgramName + E("&key=") + KEY + E("&reason=") + REASON;

	curl_easy_setopt(curl, CURLOPT_URL, link.c_str());

	curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0);
	curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0);

	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.c_str());

	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &to_return);

	auto code = curl_easy_perform(curl);


	curl_easy_cleanup(curl);
}
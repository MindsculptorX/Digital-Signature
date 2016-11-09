//
//  main.cpp
//  数字签名
//
//  Created by ZHANGXI on 16/11/2.
//  Copyright © 2016年 ZHANGXI. All rights reserved.
//

//using Openssl
#include <openssl/rsa.h>
#include <openssl/pem.h>


#include <iostream>
#include <string>
#include <vector>
using namespace std;


/**
Using RSA we should deal with the big number multiplication

*/
class bigNum{
private:
	// std::vector<int> number;
	string number;
public:
	bigNum(string temp){}
	friend bigNum operator + (bigNum a,bigNum b);	
	friend bigNum operator * (bigNum a,bigNum b);
	
};

/**
hash the file to ensure the completeness

*/
string hash(input_file){

}

/**
get the name to ensure the  non-repudiation
*/

string getAuthorPrivateKey(){

}




/**
this is made to create a class in file to signature
*/
class signature{

private:
    string privateKey;

public:
    signature(bigNum):privateKey(bigNum){
    	//write to the file 
    	//have talked with the XDF_Windows group
    }


};






int main(int argc, const char * argv[]) {
    signature File_sign();    //make signature

   
    
}

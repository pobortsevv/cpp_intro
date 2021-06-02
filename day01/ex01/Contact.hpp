/*
 * ==================================================================
 *
 *       Filename:  Contact.hpp
 *
 *    Description: Defining of contact class
 *
 *        Version:  1.0
 *        Created:  28.05.2021 22:56:15
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ==================================================================
 */
#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	/*-----------------------------------------------------------------------------
	 * private fields of our main class - contact 
	 *-----------------------------------------------------------------------------*/
	private:
		int index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;

		/*-----------------------------------------------------------------------------
		 * get, set methods that used as interface for our fields
		 *-----------------------------------------------------------------------------*/
	public:
		int getIndex(void) const;
		void setIndex(int _index);	

		std::string getFirst(void) const;
		void setFirst(std::string _first);
		
		std::string getLast(void) const;
		void setLast(std::string _last);

		std::string getNickname(void) const;
		void setNickname(std::string _nickname);	

		std::string getLogin(void) const;
		void setLogin(std::string _login);

		std::string getPostal(void) const;
		void setPostal(std::string _postal);	

		std::string getEmail(void) const;
		void setEmail(std::string _email);	

		std::string getPhone(void) const;
		void setPhone(std::string _phone);	

		std::string getBirthday(void) const;
		void setBirthday(std::string _birthday);	

		std::string getMeal(void) const;
		void setMeal(std::string _meal);

		std::string getUnderwear(void) const;
		void setUnderwear(std::string _underwear);	

		std::string getSecret(void) const;
		void setSecret(std::string _secret);	

		void ShowInfo(void) const;
};

#endif

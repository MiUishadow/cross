//
//  CAAddressBook.h
//  CrossApp
//
//  Created by 秦乐 on 2017/2/21.
//  Copyright © 2017年 CrossApp. All rights reserved.
//

#ifndef CAAddressBook_h
#define CAAddressBook_h

#include "basics/CAObject.h"
#include <iostream>
#include <functional>
NS_CC_BEGIN

class CC_DLL CAAddressBook : public CAObject
{
public:
    
    struct Date
    {
        std::string firstName{""};
        std::string lastName{""};
        std::string middleName{""};
        std::string prefix{""};
        std::string suffix{""};
        std::string nickname{""};
        std::string firstNamePhonetic{""};
        std::string lastNamePhonetic{""};
        std::string middleNamePhonetic{""};
        std::string organization{""};
        std::string jobtitle{""};
        std::string department{""};
        std::string birthday{""};
        std::string note{""};
        std::string lastEdit{""};
        std::string email{""};
        std::string country{""};
        std::string city{""};
        std::string province{""};
        std::string street{""};
        std::string zip{""};
        std::string countrycode{""};
        std::string phoneNumber{""};
        std::string fullname{""};
    };
    
    typedef std::function<void(const std::vector<CAAddressBook::Date>&)> Callback;
    
public:
    
    CREATE_FUNC(CAAddressBook);
    
    void getAddressBook(const std::function<void(const std::vector<CAAddressBook::Date>&)>& callback);
    
private:
    
    CAAddressBook();
    
    virtual ~CAAddressBook();
};

NS_CC_END

#endif /* CAAddressBook_h */

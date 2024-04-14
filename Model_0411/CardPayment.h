/**
 * Project Untitled
 */


#ifndef _CARDPAYMENT_H
#define _CARDPAYMENT_H

class CardPayment {
public: 
    
/**
 * @param userID
 * @param fee
 * @param requestTime
 */
json request_payment(int userID, int fee, DateTime requestTime);
private: 
    
/**
 * @param userID
 * @param fee
 * @param requestTime
 */
void write_payment_in_DB(int userID, int fee, DateTime requestTime);
};

#endif //_CARDPAYMENT_H
/**
 * Project Untitled
 */


#ifndef _TICKETGATE_H
#define _TICKETGATE_H

class TicketGate {
public: 
    
/**
 * @param userID
 */
void entrance(int userID);
    
/**
 * @param userID
 */
void exit(int userID);
private: 
    string stationName;
    
/**
 * @param response
 */
void show_result(void response);
};

#endif //_TICKETGATE_H
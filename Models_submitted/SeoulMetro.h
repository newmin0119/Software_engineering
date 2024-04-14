/**
 * Project Untitled
 */


#ifndef _SEOULMETRO_H
#define _SEOULMETRO_H

class SeoulMetro {
public: 
    
/**
 * @param userID
 * @param tagTime
 * @param entranceStationName
 */
json request_entrance(int userID, DateTime tagTime, string entranceStationName);
    
/**
 * @param userID
 * @param tagTime
 * @param stationName
 */
json request_exit(int userID, DateTime tagTime, string stationName);
private: 
    
/**
 * @param userID
 * @param entranceStationName
 */
void write_user_entrance_info(int userID, string entranceStationName);
    
/**
 * @param userID
 */
string read_user_entrance_info(int userID);
    
/**
 * @param entranceStationName
 * @param exitStationName
 */
int calculate_fee(string entranceStationName, string exitStationName);
};

#endif //_SEOULMETRO_H
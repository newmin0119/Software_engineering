/**
 * Project Untitled
 */


#include "SeoulMetro.h"

/**
 * SeoulMetro implementation
 */


/**
 * @param userID
 * @param tagTime
 * @param entranceStationName
 * @return json
 */
json SeoulMetro::request_entrance(int userID, DateTime tagTime, string entranceStationName) {
    return null;
}

/**
 * @param userID
 * @param tagTime
 * @param stationName
 * @return json
 */
json SeoulMetro::request_exit(int userID, DateTime tagTime, string stationName) {
    return null;
}

/**
 * @param userID
 * @param entranceStationName
 * @return void
 */
void SeoulMetro::write_user_entrance_info(int userID, string entranceStationName) {
    return;
}

/**
 * @param userID
 * @return string
 */
string SeoulMetro::read_user_entrance_info(int userID) {
    return "";
}

/**
 * @param entranceStationName
 * @param exitStationName
 * @return int
 */
int SeoulMetro::calculate_fee(string entranceStationName, string exitStationName) {
    return 0;
}
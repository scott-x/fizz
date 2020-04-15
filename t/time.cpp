#include "time.hpp"

//https://linux.die.net/man/3/sleep
void fizz::t::_sleep(unsigned int second){
		sleep(second);
}

time_t fizz::t::getTimestamp() {
    	return time(0);
}

std::string fizz::t::getTime(int types) {
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int year = 1900 + ltm->tm_year;
	int month =  1 + ltm->tm_mon;
	int day = ltm->tm_mday;
	int hour = ltm->tm_hour;
	int min = ltm->tm_min;
	int sec = ltm->tm_sec;
        
    std::string s_year = std::to_string(year);
    std::string s_month = month<10?"0"+std::to_string(month):std::to_string(month);
    std::string s_day = day<10?"0"+std::to_string(day):std::to_string(day);
    std::string s_hour = hour<10?"0"+std::to_string(hour):std::to_string(hour);
    std::string s_min = min<10?"0"+std::to_string(min):std::to_string(min);
    std::string s_sec = sec<10?"0"+std::to_string(sec):std::to_string(sec);
    
    std::string res;
    switch(types){
    	case 0:
    	case 1:
    		res = s_year+"-"+s_month+"-"+s_day+" "+ s_hour+":"+s_min+":"+s_sec;
    		break;
    	case 2:
    		res = s_year+s_month+s_day;
    		break;
    	case 3:
    		res = 	s_year +"年"+ s_month+"月"+s_day+"日";
    		break;
    	case 4:
    	    res = s_year+"-"+s_month+"-"+s_day;
    	    break;
    	case 5:
    	    res = s_year+"/"+s_month+"/"+s_day;
    	    break;
    	case 6:
    		 res = s_month+s_day;
    		 break;
    	case 7:
    		 res = s_month+"/"+s_day;
    		 break;	
    	case 8:
    		 res = s_month+"-"+s_day;
    		 break;	
    	case 9 :	
    		 res =  s_month+"月"+s_day+"日";
    		 break;
    	case 10 :
    	 	 res = 	s_hour+":"+s_min+":"+s_sec;
    	 	 break;
    	case 11 :
    		 res =  s_hour+":"+s_min;
    		 break;
    	case 12:
    		 res = s_hour+"时"+s_min+"分";	 
    		 break;
    	case 13:
    		 res = s_hour+"时"+s_min+"分"+s_sec+"秒";
    		 break;
    	case 14:
    		 res = s_year;
    		 break;
        case 15:
        	 res = s_year +"年";
        	 break;
        case 16:
        	 res =  s_year+s_month;
        	 break;
        default:
        	 res = s_year+"-"+s_month+"-"+s_day+" "+ s_hour+":"+s_min+":"+s_sec;
        	 break; 
    }
    return res;
}


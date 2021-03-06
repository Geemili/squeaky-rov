
#ifndef _RESPONSE_H_
#define _RESPONSE_H_

#define RESPONSE_LOG_ERROR 0x10
#define RESPONSE_LOG_WARNING 0x11
#define RESPONSE_LOG_INFO 0x12
#define RESPONSE_LOG_DEBUG 0x13
#define RESPONSE_SENSOR_VOLTAGE 0x20
#define RESPONSE_SENSOR_TEMPERATURE 0x21
#define RESPONSE_SENSOR_DEPTH 0x22

namespace Response {
	/// !!! LOGGING !!!
	void log_error(String message);
	void log_warning(String message);
	void log_info(String message);
	void log_debug(String message);

	/// !!! SENSORS !!!
	void sensor_voltage(int voltage);
	void sensor_temperature(int temperature);
	void sensor_depth(float depth);
}

#endif
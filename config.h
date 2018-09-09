// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME    "**Enter Your User Name**"
#define IO_KEY         "**************Enter Your Key ****************"

#define WIFI_SSID       "**Wifi Router Name"
#define WIFI_PASS       "**Password of Network**"

// comment out the following two lines if you are using fona or ethernet
#include "AdafruitIO_WiFi.h"
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);

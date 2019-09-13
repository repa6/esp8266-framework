#ifndef _WIFI_CONFIG_H_
#define _WIFI_CONFIG_H_

#include "Common.h"

#define WIFI_CONFIGS_BUF_SIZE 25

#define DEFAULT_USERNAME     USER
#define DEFAULT_PASSWORD     PASSPHRASE

#define DEFAULT_SSID         "Cohive Power Backup"
#define DEFAULT_PASSPHRASE   "cohive@backup"

#define DEFAULT_STA_LOCAL_IP  {0, 0, 0, 0}
#define DEFAULT_STA_GATEWAY   {0, 0, 0, 0}
#define DEFAULT_STA_SUBNET    {0, 0, 0, 0}

#define DEFAULT_AP_LOCAL_IP  {192, 168, 0, 1}
#define DEFAULT_AP_GATEWAY   {192, 168, 0, 1}
#define DEFAULT_AP_SUBNET    {255, 255, 255, 0}

/**
 * enable/disable wifi config modification here
 */
#define ALLOW_WIFI_CONFIG_MODIFICATION
#define ALLOW_WIFI_SSID_PASSKEY_CONFIG_MODIFICATION_ONLY

struct wifi_configs {
  char sta_ssid[WIFI_CONFIGS_BUF_SIZE];
  char sta_password[WIFI_CONFIGS_BUF_SIZE];
  char ap_ssid[WIFI_CONFIGS_BUF_SIZE];
  char ap_password[WIFI_CONFIGS_BUF_SIZE];

  uint8_t sta_local_ip[4];
  uint8_t sta_gateway[4];
  uint8_t sta_subnet[4];

  uint8_t ap_local_ip[4];
  uint8_t ap_gateway[4];
  uint8_t ap_subnet[4];
};

const wifi_configs PROGMEM _wifi_config_defaults = {
  DEFAULT_SSID, DEFAULT_PASSPHRASE, DEFAULT_USERNAME, DEFAULT_PASSWORD,
  DEFAULT_STA_LOCAL_IP, DEFAULT_STA_GATEWAY, DEFAULT_STA_SUBNET,
  DEFAULT_AP_LOCAL_IP, DEFAULT_AP_GATEWAY, DEFAULT_AP_SUBNET
};

const int wifi_config_size = sizeof(wifi_configs) + 5;

using wifi_config_table = wifi_configs;

#endif

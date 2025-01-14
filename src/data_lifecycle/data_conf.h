#ifndef __DATA_CONF_H__
#define __DATA_CONF_H__

#include "algorithm/singleton.h"
#include <string>
#include <vector>
#include <stdint.h>

struct ConfigParam{
public:
    uint32_t single_query_cnt_;
    std::string data_rule_;
    std::string operate_time_rule_;
    std::string operate_type_;
    std::string key_field_name_;
    std::string table_name_;
    std::string life_cycle_table_name_;
    std::string hot_db_name_;
    std::string cold_db_name_;
    std::vector<std::string> field_vec_;
    std::vector<int> field_flag_vec_;  // whether field is string type
    std::string full_db_addr_;
    std::string full_db_user_;
    std::string full_db_pwd_;
    uint32_t port_;
    std::string option_file;
};

class DataConf{
public:
    DataConf();
    ~DataConf();
    int LoadConfig(const std::string& config_path);
    int ParseConfig(const std::string& config_path, ConfigParam& config_param);
    bool ParseAgentConf(std::string path);
    uint32_t Port();
private:
    uint32_t port_;
};



#endif

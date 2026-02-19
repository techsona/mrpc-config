// MRPC Command Structure Definition

#ifndef RST_ADVANCED_AR_RULE_ADD_H
#define RST_ADVANCED_AR_RULE_ADD_H

typedef struct {
    int command_id;
    char rule_name[256];
    // Add more fields as necessary
} MRPCCommand;

#endif // RST_ADVANCED_AR_RULE_ADD_H
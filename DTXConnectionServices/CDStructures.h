//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct DTXMachMessage {
    struct {
        struct {
            unsigned int _field1;
            unsigned int _field2;
            unsigned int _field3;
            unsigned int _field4;
            unsigned int _field5;
            int _field6;
        } _field1;
        unsigned int _field2;
    } _field1;
    char _field2[32672];
    char _field3[68];
};

struct DTXMessageRoutingInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int :1;
    unsigned int :31;
};

struct DTXSharedMemory {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    int _field8;
    int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    char _field18[0];
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
};


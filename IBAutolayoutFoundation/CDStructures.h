//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSView {
    Class _field1;
    id _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    struct __VFlags {
        unsigned int :1;
        unsigned int :1;
        unsigned int :5;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :6;
        unsigned int :1;
        unsigned int :1;
    } _field13;
    struct __VFlags2 {
        unsigned int :14;
        unsigned int :14;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field14;
};

struct _IBEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    double minX;
    double minY;
    double maxX;
    double maxY;
} CDStruct_c519178c;

typedef struct {
    long long _field1;
    double _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    double _field6;
    long long _field7;
} CDStruct_60a219bf;

typedef struct {
    struct CGPoint start;
    struct CGPoint end;
} CDStruct_f6143a38;

typedef struct {
    CDStruct_f6143a38 _field1;
} CDStruct_474337f7;

typedef struct {
    struct CGRect rect;
    unsigned int rectEdge;
    struct {
        double start;
        double length;
    } range;
} CDStruct_8f194ad9;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        long long _field1;
        long long _field2;
    } _field1;
    long long _field2[2];
} CDUnion_42e99c75;


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MsgType0x211SubMsgType0x7_GenericSubCmd : NSObject
{
    long long _sessionid;
    unsigned int _size;
    unsigned int _index;
    unsigned int _type;
    NSObject *_data;
    int _xo;
}

+ (id)parseFromMsgBodyPack:(struct CPBMessageDecoder *)arg1;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSObject *data; // @dynamic data;
@property(nonatomic) unsigned int index; // @dynamic index;
@property(nonatomic) long long sessionid; // @dynamic sessionid;
@property(nonatomic) unsigned int size; // @dynamic size;
@property(nonatomic) unsigned int type; // @dynamic type;

@end


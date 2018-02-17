//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface CCMsg0x211_0x9_MsgPrinter : NSObject
{
    NSArray *_arrayPrinter;
    unsigned long long _u64SessionID;
    NSNumber *_uResult;
    NSString *_strResultMsg;
    NSArray *_arrayFileSession;
    NSDictionary *_dicSupportFileInfo;
    NSDictionary *_dicHpStateInfo;
    int _xo;
}

+ (id)parseFromeMsgPrinterPack:(struct CPBMessageDecoder *)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSDictionary *dicHpStateInfo; // @synthesize dicHpStateInfo=_dicHpStateInfo;
- (void)parseToMsgBodyPack:(struct CPBMessageEncoder *)arg1;

// Remaining properties
@property(retain, nonatomic) NSArray *arrayFileSession; // @dynamic arrayFileSession;
@property(retain, nonatomic) NSArray *arrayPrinter; // @dynamic arrayPrinter;
@property(retain, nonatomic) NSDictionary *dicSupportFileInfo; // @dynamic dicSupportFileInfo;
@property(copy, nonatomic) NSString *strResultMsg; // @dynamic strResultMsg;
@property(nonatomic) unsigned long long u64SessionID; // @dynamic u64SessionID;
@property(retain, nonatomic) NSNumber *uResult; // @dynamic uResult;

@end


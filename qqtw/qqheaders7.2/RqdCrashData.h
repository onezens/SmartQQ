//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSException, NSMutableArray, NSMutableDictionary, NSMutableString, NSString, RqdThreadInfo;

@interface RqdCrashData : NSObject
{
    long long time;
    NSString *type;
    NSString *error;
    NSString *address;
    NSString *errorStack;
    NSString *thread;
    int crashThread;
    NSString *processName;
    NSString *processUUID;
    NSString *processArch;
    NSString *processAddr;
    NSArray *crashBinInfos;
    NSArray *crashStackShortNames;
    NSArray *allStackShortNames;
    NSException *exp;
    NSString *crashlog;
    NSString *handler;
    NSMutableArray *sessionEvents;
    NSMutableDictionary *userMaps;
    NSArray *allThreadInfos;
    RqdThreadInfo *crashThreadInfo;
    RqdThreadInfo *ocThreadInfo;
    NSArray *ocStackInfos;
    NSMutableString *registerDatas;
    NSString *objcMsgData;
    long long objcMsgAddress;
    _Bool caughtError;
    long long _fp;
}

+ (id)expData;
- (void)addUserMapData:(id)arg1 val:(id)arg2;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(retain, nonatomic) NSArray *allStackShortNames; // @synthesize allStackShortNames;
@property(retain, nonatomic) NSArray *allThreadInfos; // @synthesize allThreadInfos;
- (void)appendSessionEvent:(id)arg1;
@property(retain, nonatomic) NSArray *crashBinInfos; // @synthesize crashBinInfos;
@property(readonly, copy) NSString *crashStack;
@property(retain, nonatomic) NSArray *crashStackShortNames; // @synthesize crashStackShortNames;
@property(nonatomic) int crashThread; // @synthesize crashThread;
@property(retain, nonatomic) RqdThreadInfo *crashThreadInfo; // @synthesize crashThreadInfo;
@property(retain, nonatomic) NSString *crashlog; // @synthesize crashlog;
@property(retain, nonatomic) NSString *error; // @synthesize error;
@property(retain, nonatomic) NSString *errorStack; // @synthesize errorStack;
@property(retain, nonatomic) NSException *exp; // @synthesize exp;
@property(nonatomic) long long fp; // @synthesize fp=_fp;
@property(retain, nonatomic) NSString *handler; // @synthesize handler;
@property(nonatomic, getter=isCaughtError) _Bool caughtError; // @synthesize caughtError;
- (_Bool)isUnityException;
- (_Bool)needCheckFirstLineOcMsg;
@property(nonatomic) long long objcMsgAddress; // @synthesize objcMsgAddress;
@property(retain, nonatomic) NSString *objcMsgData; // @synthesize objcMsgData;
@property(retain, nonatomic) RqdThreadInfo *ocThreadInfo; // @synthesize ocThreadInfo;
@property(retain, nonatomic) NSString *processAddr; // @synthesize processAddr;
@property(retain, nonatomic) NSString *processArch; // @synthesize processArch;
@property(retain, nonatomic) NSString *processName; // @synthesize processName;
@property(retain, nonatomic) NSString *processUUID; // @synthesize processUUID;
@property(retain, nonatomic) NSMutableString *registerDatas; // @synthesize registerDatas;
@property(retain, nonatomic) NSMutableArray *sessionEvents; // @synthesize sessionEvents;
@property(retain, nonatomic) NSString *thread; // @synthesize thread;
@property(nonatomic) long long time; // @synthesize time;
@property(retain, nonatomic) NSString *type; // @synthesize type;
@property(retain, nonatomic) NSMutableDictionary *userMaps; // @synthesize userMaps;

@end


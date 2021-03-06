//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQGetRoamMsgModelProtocol.h"

@class DownloadInfo, NSMutableArray, NSString, QQRoamDateEngine;

@interface QQRoamPreLoadEngine : NSObject <QQGetRoamMsgModelProtocol>
{
    NSMutableArray *_dowloadArr;
    NSString *_uin;
    QQRoamDateEngine *_roamDateEngine;
    DownloadInfo *_downloadingObj;
    id _delegate;
    long long _timeval;
    long long _roamEngineStatus;
}

- (void).cxx_destruct;
- (void)GetRoamMsgError:(int)arg1 string:(id)arg2;
- (void)GetRoamMsgFinish:(long long)arg1 hasMsg:(_Bool)arg2;
- (_Bool)addPreLoad:(long long)arg1;
- (void)dealloc;
- (_Bool)doPreLoad;
- (void)finishGetRoamMsg:(_Bool)arg1 local:(_Bool)arg2;
- (long long)getBreakTimeByDayBeginTime:(long long)arg1;
- (_Bool)getRoamMessage:(id)arg1;
- (void)historyRoamGetHandler:(id)arg1 beginMsgTimeval:(long long)arg2;
- (id)initWithUin:(id)arg1 roamDateEngine:(id)arg2;
- (void)removeBreakTimeByDayBeginTime:(long long)arg1;
@property(nonatomic) long long roamEngineStatus; // @synthesize roamEngineStatus=_roamEngineStatus;
- (void)setRoamMsgBreak:(long long)arg1 dayBeginTime:(long long)arg2;
- (_Bool)startPreLoad;
- (_Bool)stopPreLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


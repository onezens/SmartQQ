//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol QQRaomDateDelegate <NSObject>
- (void)beginRequestRoamDate;
- (void)clearVisiableMsg;
- (void)drawHistoryTimeScroll:(long long)arg1 length:(long long)arg2 roamDate:(basic_string_075b6133 *)arg3 first:(_Bool)arg4 loadRoamMsg:(_Bool)arg5 cur:(long long)arg6;
- (void)endRequestRoamDate;
- (_Bool)judgeNetWorkAvailable;
- (_Bool)loadLocalMessage:(long long)arg1 ignoreServer:(_Bool)arg2;
- (_Bool)loadLocalPreMessage:(long long)arg1 ignoreServer:(_Bool)arg2;
- (void)outRoamDate:(_Bool)arg1;
- (void)preLoadMsgDelegate;
- (void)pullRoamDateFailed;
- (void)requestRoamMessage:(long long)arg1;
- (void)roamOffRefreshButton;
- (void)scrollTo:(long long)arg1;
- (void)searchNoNetwork;
- (void)searchRequsetMsgIsEmpty;
- (_Bool)toastNoMsgTips:(long long)arg1 type:(int)arg2;
@end


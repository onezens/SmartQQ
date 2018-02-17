//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface QZLVQRManager : NSObject
{
    long long _livePlayID;
    NSString *_roomID;
    NSString *_launcherUIN;
    NSNumber *_userIsLauncher;
    long long _roomStatus;
    long long _launcherType;
    NSNumber *_playbackBegin;
    NSString *_playbackUrl;
    NSString *_playVideoPlayID;
    NSString *_serverIP;
    _Bool _haveReportGetData;
    int _serverLauncherTime;
    int _serverWatcherTime;
    int _voiceDataDelay;
    NSString *_sectionTimeCost;
    _Bool _isEnterLiveUnNormal;
    _Bool _shouldIgnoreSdkEnterRoomResult;
    NSObject<OS_dispatch_queue> *_reportQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableDictionary *_allEventRetCodes;
    NSMutableDictionary *_eventStartTime;
    NSMutableDictionary *_musicDNSIP;
    NSMutableDictionary *_willReportEventDic;
    long long _eventIndex;
    unsigned int _s_videoPlayId_32bitSuffix;
    double _liveStartTime;
    double _liveDurationFromStartToEnd;
    double _liveEnterRoomTime;
    double _liveStayDuration;
    _Bool _waitEndModel;
    _Bool _isInLiving;
    NSDate *_liveStatusChangedTime;
    long long _liveStatusRetCode;
    long long _liveStatus;
    long long _wholeRoomStatus;
    id _viewController;
}

+ (id)client_time:(id)arg1;
+ (double)eventTimeOverSeconds;
+ (_Bool)isLogicError:(long long)arg1;
+ (long long)notFound;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id viewController; // @synthesize viewController=_viewController;
- (void)startTimer;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMessageModel.h"

@class EmotionParseResult, NSString, UIImage;

@interface QQRecentMessageModel : QQMessageModel
{
    int _unreadCount;
    int _handledCount;
    int _status;
    int _priority;
    int _certifyGrade;
    _Bool _hasSmallRedMsg;
    NSString *_nick;
    UIImage *_groupMemberHead;
    EmotionParseResult *_result;
    NSString *_timeString;
    int _messageType;
    _Bool _hide;
    _Bool _isCountShielded;
    _Bool isInTopState;
    int setTopStateTime;
    _Bool _shouldRefresh;
    QQMessageModel *_latestRedPackModel;
    double _objCreateTime;
    long long _unhandledCount;
    int _sessionType;
    NSString *_voiceOverTimeString;
    _Bool _isInTopState;
    _Bool _isInServiceFolder;
    int _setTopStateTime;
    int _currentIndex;
}

@property(nonatomic) int certifyGrade; // @synthesize certifyGrade=_certifyGrade;
- (void)convertToPbModel:(struct RecentMsgModel *)arg1 msgKey:(id)arg2;
@property(nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
- (void)dealloc;
- (id)description;
- (id)getShowNick;
@property(retain, nonatomic) UIImage *groupMemberHead; // @synthesize groupMemberHead=_groupMemberHead;
@property(nonatomic) int handledCount; // @synthesize handledCount=_handledCount;
@property(nonatomic) _Bool hasSmallRedMsg; // @synthesize hasSmallRedMsg=_hasSmallRedMsg;
@property(nonatomic) _Bool hide; // @synthesize hide=_hide;
- (id)init;
- (id)initWithMessageModel:(id)arg1;
- (id)initWithPBModel:(struct RecentMsgModel *)arg1;
@property(nonatomic) _Bool isCountShielded; // @synthesize isCountShielded=_isCountShielded;
@property(nonatomic) _Bool isInServiceFolder; // @synthesize isInServiceFolder=_isInServiceFolder;
@property(nonatomic) _Bool isInTopState; // @synthesize isInTopState=_isInTopState;
- (_Bool)isMatchString:(id)arg1;
@property(retain, nonatomic) QQMessageModel *latestRedPackModel; // @synthesize latestRedPackModel=_latestRedPackModel;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
- (_Bool)needShowSendState;
@property(copy, nonatomic) NSString *nick;
@property(nonatomic) double objCreateTime; // @synthesize objCreateTime=_objCreateTime;
@property(nonatomic) int priority; // @synthesize priority=_priority;
- (id)recentExInfo:(_Bool)arg1;
@property(retain, nonatomic) EmotionParseResult *result; // @synthesize result=_result;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
- (void)setContent:(id)arg1;
@property(nonatomic) int setTopStateTime; // @synthesize setTopStateTime=_setTopStateTime;
- (void)setState:(id)arg1;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)setTime:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *timeString;
@property(nonatomic) int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(copy, nonatomic) NSString *voiceOverTimeString; // @synthesize voiceOverTimeString=_voiceOverTimeString;
@property(readonly, nonatomic) long long unhandledCount;

@end


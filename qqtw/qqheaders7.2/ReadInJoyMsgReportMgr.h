//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface ReadInJoyMsgReportMgr : NSObject
{
    unsigned long long _lastRecvMsgDuration;
    unsigned long long _lastSendMsgDuration;
    NSArray *_lastChatMsgs;
    unsigned long long _leftBtmRedCntMaxForExitAIO;
    NSMutableDictionary *_keywordDic;
    unsigned long long _minUinTailNumber;
    unsigned long long _maxUinTailNumber;
    unsigned long long _tailNumberLength;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)ayncCheckAndReportChatMsgsWithLeftBtmRedCnt:(unsigned long long)arg1;
- (_Bool)isCurrentUinAvailible;
@property(retain, nonatomic) NSMutableDictionary *keywordDic; // @synthesize keywordDic=_keywordDic;
- (id)keywordIDMatchedWithContent:(id)arg1 fromKeywordDic:(id)arg2;
@property(retain, nonatomic) NSArray *lastChatMsgs; // @synthesize lastChatMsgs=_lastChatMsgs;
@property(nonatomic) unsigned long long lastRecvMsgDuration; // @synthesize lastRecvMsgDuration=_lastRecvMsgDuration;
@property(nonatomic) unsigned long long lastSendMsgDuration; // @synthesize lastSendMsgDuration=_lastSendMsgDuration;
@property(nonatomic) unsigned long long leftBtmRedCntMaxForExitAIO; // @synthesize leftBtmRedCntMaxForExitAIO=_leftBtmRedCntMaxForExitAIO;
@property(nonatomic) unsigned long long maxUinTailNumber; // @synthesize maxUinTailNumber=_maxUinTailNumber;
@property(nonatomic) unsigned long long minUinTailNumber; // @synthesize minUinTailNumber=_minUinTailNumber;
- (void)parseKeywordDicFromConfig;
- (void)parseKeywordUinRangeFromConfig;
@property(nonatomic) unsigned long long tailNumberLength; // @synthesize tailNumberLength=_tailNumberLength;

@end


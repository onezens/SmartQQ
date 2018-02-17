//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupPropertyModel.h"

#import "NSURLConnectionDataDelegate.h"

@class NSString, NSURLConnection, UIViewController;

@interface QQGroupJoinHelper : QQGroupPropertyModel <NSURLConnectionDataDelegate>
{
    id _leftBtnClickTarget;
    SEL _leftBtnClickSel;
    SEL _leftBtnClickSelForSuccess;
    unsigned long long _groupCode;
    int _sourceId;
    int _subSourceId;
    _Bool _receivedBaseInfoRsp;
    _Bool _receivedJoinKeyRsp;
    NSString *_joinGroupQuestion;
    NSURLConnection *_connection;
    _Bool _isFromBabyQ;
    _Bool _isJoinFromJs;
    UIViewController *_fromViewController;
    NSString *_joinUrl;
}

+ (int)getTraceNearBy;
+ (void)setTraceNearBy:(int)arg1;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)dealloc;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
- (id)init;
@property(nonatomic) _Bool isFromBabyQ; // @synthesize isFromBabyQ=_isFromBabyQ;
@property(nonatomic) _Bool isJoinFromJs; // @synthesize isJoinFromJs=_isJoinFromJs;
- (void)joinGroupWithCode:(unsigned long long)arg1 sourceId:(int)arg2 subSourceId:(int)arg3;
@property(retain, nonatomic) NSString *joinUrl; // @synthesize joinUrl=_joinUrl;
@property(nonatomic) SEL leftBtnClickSel; // @synthesize leftBtnClickSel=_leftBtnClickSel;
@property(nonatomic) SEL leftBtnClickSelForSuccess; // @synthesize leftBtnClickSelForSuccess=_leftBtnClickSelForSuccess;
@property(nonatomic) id leftBtnClickTarget; // @synthesize leftBtnClickTarget=_leftBtnClickTarget;
- (void)onGetGroupJoinAdminQuestionNotify:(id)arg1;
- (void)showAddFriendSendMessageViewController;
- (void)showAddFriendSendMessageViewControllerWithGroupOpt:(unsigned int)arg1;
- (void)showTips:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *joinKey; // @dynamic joinKey;
@property(readonly) Class superclass;

@end


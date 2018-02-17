//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQMessageModel;

@interface QQMsgState : NSObject
{
    int _baseMsgState;
    int _extraMsgState;
    _Bool _firstSetBaseState;
    _Bool _firstSetExtraState;
    QQMessageModel *_msgModel;
}

+ (Class)getClassWithMsgType:(int)arg1;
+ (id)msgStateWithBaseState:(int)arg1 exState:(int)arg2 messageModel:(id)arg3;
+ (id)msgStateWithMessageModel:(id)arg1;
+ (id)msgStateWithMsgType:(int)arg1;
+ (id)msgStateWithState:(id)arg1 messageModel:(id)arg2;
+ (void)registMsgStateClass:(Class)arg1 withMsgType:(int)arg2;
+ (void)setClasWithMsgType:(int)arg1 class:(Class)arg2;
@property(nonatomic) int baseMsgState; // @synthesize baseMsgState=_baseMsgState;
- (void)checkState;
- (_Bool)compareState:(id)arg1;
- (id)description;
@property(nonatomic) int extraMsgState; // @synthesize extraMsgState=_extraMsgState;
- (_Bool)failed;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) QQMessageModel *msgModel; // @synthesize msgModel=_msgModel;
- (void)onMsgStateChange;
- (_Bool)sendFromThisDevice;
- (_Bool)sending;
- (_Bool)sent;
- (void)setFailed;
- (void)setIdle;
- (void)setSending;
- (void)setSuccess;
- (void)setValueWithState:(id)arg1;
- (_Bool)sucess;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMsgState.h"

@interface QQSecretMsgState : QQMsgState
{
    int _fromSecretStatus;
    int _toSecretStatus;
}

- (void)checkState;
- (_Bool)failed;
@property(nonatomic) int fromSecretStatus; // @synthesize fromSecretStatus=_fromSecretStatus;
- (void)initialWithFromStatus:(int)arg1 toStatus:(int)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)sending;
@property(nonatomic) int toSecretStatus; // @synthesize toSecretStatus=_toSecretStatus;
- (void)setValueWithState:(id)arg1;

@end

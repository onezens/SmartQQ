//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FaceScoreNotifyMsgEngine : NSObject
{
    unsigned long long _otherUin;
    unsigned long long _msgTime;
}

+ (id)GetInstance;
- (void)insertGrayTip:(unsigned long long)arg1 time:(double)arg2 extraInfo:(id)arg3;
@property(nonatomic) unsigned long long msgTime; // @synthesize msgTime=_msgTime;
@property(nonatomic) unsigned long long otherUin; // @synthesize otherUin=_otherUin;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQMessageModel;

@interface QQGroupAnonymousTipOffEngine : NSObject
{
    QQMessageModel *_msgModel;
}

+ (id)getInstance;
- (void)actionGroupAnonymousTipOff:(id)arg1;
- (void)dealloc;
- (void)groupAnonymousTipOff:(id)arg1 groupCode:(long long)arg2 inView:(id)arg3;
- (id)init;
@property(retain, nonatomic) QQMessageModel *msgModel; // @synthesize msgModel=_msgModel;

@end


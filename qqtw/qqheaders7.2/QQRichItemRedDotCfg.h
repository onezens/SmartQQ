//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface QQRichItemRedDotCfg : NSObject <NSCoding>
{
    _Bool _needRedDot;
    NSString *_ItemID;
    long long _redDotVersion;
    double _lastShowedTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ItemID; // @synthesize ItemID=_ItemID;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double lastShowedTime; // @synthesize lastShowedTime=_lastShowedTime;
@property(nonatomic) _Bool needRedDot; // @synthesize needRedDot=_needRedDot;
@property(nonatomic) long long redDotVersion; // @synthesize redDotVersion=_redDotVersion;

@end


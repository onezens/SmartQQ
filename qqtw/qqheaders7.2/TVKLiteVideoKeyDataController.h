//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVKLiteMakeJsonData.h"

@class NSString;

@interface TVKLiteVideoKeyDataController : TVKLiteMakeJsonData
{
    long long videoDataType;
    NSString *keysName;
}

- (void)dealloc;
- (void)enscapeData:(id)arg1 withDataUserInfo:(id)arg2;
- (id)initWithInterfaceType:(long long)arg1;
@property(retain, nonatomic) NSString *keysName; // @synthesize keysName;
@property(nonatomic) long long videoDataType; // @synthesize videoDataType;

@end

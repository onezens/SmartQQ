//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface QQYPC2BWebParamModal : NSObject
{
    NSString *_uin;
    NSString *_nickName;
    NSDictionary *_jsonDic;
}

- (void)dealloc;
- (void)decode:(id)arg1;
- (id)initWithEncodedStr:(id)arg1;
- (_Bool)isLegal;
@property(copy, nonatomic) NSDictionary *jsonDic; // @synthesize jsonDic=_jsonDic;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;

@end


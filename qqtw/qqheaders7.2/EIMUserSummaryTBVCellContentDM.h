//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface EIMUserSummaryTBVCellContentDM : NSObject
{
    _Bool _isAccessory;
    NSString *_strName;
    UIImage *_imgIcon;
    NSString *_strText;
    NSString *_flagName;
}

- (void)dealloc;
@property(copy, nonatomic) NSString *flagName; // @synthesize flagName=_flagName;
@property(retain, nonatomic) UIImage *imgIcon; // @synthesize imgIcon=_imgIcon;
@property(nonatomic) _Bool isAccessory; // @synthesize isAccessory=_isAccessory;
@property(copy, nonatomic) NSString *strName; // @synthesize strName=_strName;
@property(copy, nonatomic) NSString *strText; // @synthesize strText=_strText;

@end


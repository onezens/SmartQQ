//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, QQWalletDateRange;

@interface QQWalletTips : NSObject
{
    NSNumber *theID;
    NSString *iconURL;
    NSString *words;
    NSString *jumpURL;
    int tipsType;
    QQWalletDateRange *dateRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasIcon;
- (id)initWithDic:(id)arg1;
- (id)initWithFreezeData:(id)arg1;
@property(readonly, nonatomic) _Bool isAvalible;

@end

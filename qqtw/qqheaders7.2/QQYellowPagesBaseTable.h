//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMixDbBaseTable.h"

@class NSArray, QQYellowPagesConfig;

@interface QQYellowPagesBaseTable : QQMixDbBaseTable
{
    QQYellowPagesConfig *_config;
    NSArray *_category;
}

@property(retain, nonatomic) NSArray *category; // @synthesize category=_category;
@property(retain, nonatomic) QQYellowPagesConfig *config; // @synthesize config=_config;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQPersonalTagCardCell, USPersonalTagLabelPhoto;

@protocol QQPersonalTagCardCellDataSource <NSObject>
- (unsigned long long)numberOfImageCountInPersonalTagCardCell:(QQPersonalTagCardCell *)arg1;
- (USPersonalTagLabelPhoto *)personalTagCardCell:(QQPersonalTagCardCell *)arg1 photoAtIndex:(unsigned long long)arg2;
@end


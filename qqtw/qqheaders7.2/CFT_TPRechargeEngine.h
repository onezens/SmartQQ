//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_TPBaseEngine.h"

@interface CFT_TPRechargeEngine : CFT_TPBaseEngine
{
    int _processFlag;
    id <UITPStartingDelegate> _delegate;
    id _rootVC;
}

- (void)dealloc;
@property(nonatomic) id <UITPStartingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int processFlag; // @synthesize processFlag=_processFlag;
- (void)requestRechargeBankInfo;
@property(nonatomic) id rootVC; // @synthesize rootVC=_rootVC;
- (void)wal_bank_query;

@end

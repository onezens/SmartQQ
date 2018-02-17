//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQGTTribeSelectorProtocol.h"

@class NSArray, NSString, QQGTTribeSelector, UIScrollView;

@interface QQGroupTribeTopicViewSelectTribeCell : NSObject <QQGTTribeSelectorProtocol>
{
    QQGTTribeSelector *_tripeSelector;
    NSArray *_dataSource;
    long long _currentTime;
    UIScrollView *_view;
    id <QQGroupTribeTopicViewSelectTribeCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)clearDataSource;
- (void)clickCellView:(id)arg1;
- (void)configWithSuggestTribe:(id)arg1 tribeName:(id)arg2;
@property(nonatomic) __weak id <QQGroupTribeTopicViewSelectTribeCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doSomethingBeforeDisappear;
- (id)initViewWithFrame:(struct CGRect)arg1;
- (void)onSelectTribeCanceled;
- (void)onSelectTribeFinished:(id)arg1;
- (void)reload;
- (id)selectTribeWithParams:(id)arg1;
- (void)setDataSource:(id)arg1;
@property(retain, nonatomic) UIScrollView *view; // @synthesize view=_view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


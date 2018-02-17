//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, QQSMItemElementBase, QQSMMessageBaseCell, UIButton, UIImageView, UITableView, UIWindow;

@interface ShoppingDropDownMenuView : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    UIButton *_maskButton;
    UIWindow *_coverWindow;
    UIImageView *_forwardView;
    UITableView *_tableView;
    struct CGPoint point;
    QQSMMessageBaseCell *baseCell;
    QQSMItemElementBase *baseMsg;
}

- (void)adjustForwardViewAtPosition:(struct CGPoint)arg1 andOffset:(float)arg2;
@property(nonatomic) QQSMMessageBaseCell *baseCell; // @synthesize baseCell;
@property(retain, nonatomic) QQSMItemElementBase *baseMsg; // @synthesize baseMsg;
- (void)createCoverWindow;
- (void)dealloc;
- (void)didMaskButtonClicked:(id)arg1;
- (void)hideView;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)popAnimation:(double)arg1;
- (void)reportData:(int)arg1;
- (void)showViewAtPosition:(struct CGPoint)arg1 andButtonHeight:(float)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

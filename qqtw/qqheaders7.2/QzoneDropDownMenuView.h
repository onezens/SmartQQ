//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface QzoneDropDownMenuView : UIWindow <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isDropDirectionDown;
    struct CGPoint _panBeganPoint;
    _Bool _scaleEnabled;
    _Bool _panEnded;
    NSMutableArray *_titleArray;
    UIButton *_maskButton;
    UIImageView *_forwardView;
    UITableView *_tableView;
    UIView *_tableHeaderView;
    UIButton *_qqButton;
    UIButton *_wxButton;
    UIButton *_wxFriendGroupButton;
    UIWindow *_coverWindow;
    UIImageView *_shareIcon;
    UILabel *_shareLabel;
    long long _customDropMenuItemNum;
    long long _dropDownMenuItemNum;
    _Bool _customDropMenuHasCutomShareItem;
    _Bool _favouriteAdded;
    _Bool _inFloatLayer;
    _Bool _isDetailHotCommentDropDownMenu;
    id <QzoneDropDownMenuViewDelegate> _forwardDelegate;
}

- (void).cxx_destruct;
- (void)adjustForwardViewAtPosition:(struct CGPoint)arg1 andOffset:(float)arg2;
- (void)createCoverWindow;
- (id)createForwardButtonWithText:(id)arg1 normalImageName:(id)arg2 disableImageName:(id)arg3;
- (void)dealloc;
- (void)didMaskButtonClicked:(id)arg1;
@property(nonatomic) _Bool favouriteAdded; // @synthesize favouriteAdded=_favouriteAdded;
- (void)forwardButtonClicked:(id)arg1;
@property(nonatomic) __weak id <QzoneDropDownMenuViewDelegate> forwardDelegate; // @synthesize forwardDelegate=_forwardDelegate;
- (void)hideView;
- (void)hideViewWithoutAnimation;
@property(nonatomic) _Bool inFloatLayer; // @synthesize inFloatLayer=_inFloatLayer;
- (id)init;
- (void)initializeForwardButtons;
@property(nonatomic) _Bool isDetailHotCommentDropDownMenu; // @synthesize isDetailHotCommentDropDownMenu=_isDetailHotCommentDropDownMenu;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)panDropdownMenu:(id)arg1;
- (void)popAnimation:(double)arg1;
- (void)setDataForHotComment;
- (void)setFeedModel:(id)arg1;
- (void)setImageView:(id)arg1 withUrl:(id)arg2;
- (void)showViewAtPosition:(struct CGPoint)arg1 andButtonHeight:(float)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableViewHeight;
- (void)updateForwardViewAnchorPoint;
- (void)voiceOverStatusChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMoreOptionTableViewCell.h"

#import "QQMoreOptionTableViewCellDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSString, QQAvatarView, QQPublicAccountFolderCellContentView, QQPublicAccountFolderModel, QQRecentLabel, QQUnReadCountAnimationView, UILabel, UIView;

@interface QQPublicAccountMessageFolderCell : QQMoreOptionTableViewCell <UIActionSheetDelegate, QQMoreOptionTableViewCellDelegate>
{
    _Bool _bNotNeedAdaptNightMode;
    QQPublicAccountFolderModel *_model;
    QQUnReadCountAnimationView *_readTagView;
    id <QQPubAccMessageFolderCellDelegate> _delegate;
    QQAvatarView *_iconButton;
    UILabel *_nickLabel;
    QQRecentLabel *_detailLabel;
    UILabel *_timeLabel;
    UIView *_headerView;
    QQPublicAccountFolderCellContentView *_cellContentView;
}

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool bNotNeedAdaptNightMode; // @synthesize bNotNeedAdaptNightMode=_bNotNeedAdaptNightMode;
@property(retain, nonatomic) QQPublicAccountFolderCellContentView *cellContentView; // @synthesize cellContentView=_cellContentView;
- (void)dealloc;
@property(nonatomic) id <QQPubAccMessageFolderCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QQRecentLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
- (void)generateClassicCellMessageView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) QQAvatarView *iconButton; // @synthesize iconButton=_iconButton;
- (void)layoutCell:(id)arg1;
- (void)layoutClassicCellHeader:(id)arg1;
- (void)layoutClassicCellMessageView:(id)arg1;
@property(retain, nonatomic) QQPublicAccountFolderModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
- (void)onRightButtonSelected:(int)arg1 context:(id)arg2;
@property(retain, nonatomic) QQUnReadCountAnimationView *readTagView; // @synthesize readTagView=_readTagView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void)showUnfollowConfirmSheet;
- (id)tableView:(id)arg1 backgroundColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (void)tableView:(id)arg1 buttonPressedInRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3 context:(id)arg4;
- (int)tableView:(id)arg1 leftButtonNumInRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (double)tableView:(id)arg1 widthForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (void)unfollowPublicAccount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


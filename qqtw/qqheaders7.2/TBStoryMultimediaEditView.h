//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMultimediaEditView.h"

@class NSMutableArray, NSString, TBEditViewModel, TBExtendedHitButton, UIImageView;

@interface TBStoryMultimediaEditView : TBMultimediaEditView
{
    UIImageView *_redImageView;
    _Bool _showPermissionButton;
    TBEditViewModel *_editViewModel;
    id <TBStoryUserGuideDelegate> _userguideDelegate;
    TBExtendedHitButton *_permissionButton;
    TBExtendedHitButton *_shareStorySelectorButton;
    NSMutableArray *_selectedUinList;
    unsigned long long _selectedPermissionType;
    NSString *_shareStoryGroupUnionID;
}

- (void).cxx_destruct;
- (void)creatPermissionButton;
- (void)dealloc;
- (void)drawStatusChanged:(id)arg1;
- (id)editActionResult;
@property(retain, nonatomic) TBEditViewModel *editViewModel; // @synthesize editViewModel=_editViewModel;
- (void)elementMoveEnded:(id)arg1;
- (void)elementMoving:(id)arg1;
- (id)getTargetViewWithGuideType:(int)arg1;
- (void)handleGetConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 components:(id)arg2 multimediaType:(unsigned long long)arg3 withInitParam:(id)arg4;
- (_Bool)isNeedShowAlertWhenRemake;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onPermissionButtonClick:(id)arg1;
- (void)onPermissionButtonHighlighted:(id)arg1;
- (void)onShareStorySelectorButtonClick:(id)arg1;
- (void)onTouchTipsView:(id)arg1;
@property(retain, nonatomic) TBExtendedHitButton *permissionButton; // @synthesize permissionButton=_permissionButton;
- (void)permissionButtonTitleChangedNotification:(id)arg1;
- (void)publish;
- (id)publishInfoDictionary;
- (void)registeNotifications;
- (void)reset;
- (void)resetPermissionButtonTitle;
- (void)restoreEditView;
@property(nonatomic) unsigned long long selectedPermissionType; // @synthesize selectedPermissionType=_selectedPermissionType;
@property(retain, nonatomic) NSMutableArray *selectedUinList; // @synthesize selectedUinList=_selectedUinList;
@property(retain, nonatomic) NSString *shareStoryGroupUnionID; // @synthesize shareStoryGroupUnionID=_shareStoryGroupUnionID;
- (void)setShareStoryGroupUnionID:(id)arg1 title:(id)arg2;
@property(retain, nonatomic) TBExtendedHitButton *shareStorySelectorButton; // @synthesize shareStorySelectorButton=_shareStorySelectorButton;
@property(nonatomic) _Bool showPermissionButton; // @synthesize showPermissionButton=_showPermissionButton;
@property(nonatomic) __weak id <TBStoryUserGuideDelegate> userguideDelegate; // @synthesize userguideDelegate=_userguideDelegate;
- (id)shotImage;
- (void)showFilterUserGuideIfNeed;
- (void)showPermissionOption:(_Bool)arg1;
- (void)showToolUserGuideIfNeed;
- (void)storeEditView;
- (void)storeEditViewWithReset:(_Bool)arg1;
- (_Bool)switchToComponent:(id)arg1;
- (void)updateShareGroupView:(id)arg1;

@end


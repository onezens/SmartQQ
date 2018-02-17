//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "MQZoneActiveMessageViewDelegate.h"

@class MQZoneBadgeView, NSArray, NSString, QZAvatarView, UIColor, UIImageView, UILabel;

@interface MQZoneActiveMessageView : UIButton <MQZoneActiveMessageViewDelegate>
{
    UILabel *_passiveLabel;
    UIImageView *_arrow;
    QZAvatarView *_atView;
    QZAvatarView *_faceView;
    NSArray *_configArray;
    NSString *_passiveText;
    UIColor *_newStyleTextColor;
    _Bool _isNeedPassiveNum;
    long long _passiveWidthNORedNum;
    UILabel *_message;
    MQZoneBadgeView *_badgeView;
    long long _msgCount;
    long long _lastUin;
    id <MQZoneActiveMessageViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)adjustNaviDeco:(id)arg1;
@property(retain, nonatomic) MQZoneBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (int)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3;
- (void)createMessageViewPassive:(struct CGRect)arg1 label:(id)arg2;
- (void)createMessageViewRedDot:(id)arg1 label:(id)arg2 press:(id)arg3 offset:(long long)arg4;
- (void)createNewMessageView:(struct CGRect)arg1 unreadCount:(long long)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <MQZoneActiveMessageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 unreadCount:(long long)arg2 textColor:(id)arg3;
- (_Bool)isNewStyle;
@property(nonatomic) long long lastUin; // @synthesize lastUin=_lastUin;
- (void)magicColor:(id)arg1;
@property(retain, nonatomic) UILabel *message; // @synthesize message=_message;
- (struct CGSize)messageSizeWithCount:(long long)arg1;
@property(nonatomic) long long msgCount; // @synthesize msgCount=_msgCount;
- (id)naviItemConfig;
- (void)onClickUILable:(id)arg1;
- (void)onFeedUnreadNumberUpdateAll;
- (void)onFeedUnreadNumberUpdateByEntranceId:(long long)arg1;
- (void)onPhotoEventChange:(id)arg1;
- (void)restoreHead;
- (void)updateMessage:(long long)arg1;
- (void)updateTextColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


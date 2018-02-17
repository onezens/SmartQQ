//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FaceWallImageView, NSString, UIButton, UIImageView, UILabel;

@interface QQGroupSettingMenuItem : UIView
{
    UIImageView *_rightCornerView;
    UILabel *_rightCornerLabelView;
    UIButton *_btn;
    UILabel *_titleLabel;
    UILabel *_rightCornerLabel;
    FaceWallImageView *_activityImageView;
    UIView *_activityView;
    NSString *_activityTitle;
    _Bool _isButtonDisabled;
    int _rightCornerCount;
    int _rightCornerRedState;
    id <QQGroupSettingMenuItemDelegate> _delegate;
    int _xo;
}

- (void)dealloc;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)layoutSubviews;
- (void)makeRedStateView;
- (void)onActivityIconClick:(id)arg1;
@property(retain, nonatomic) UIView *activityView; // @dynamic activityView;
@property(nonatomic) int rightCornerRedState; // @dynamic rightCornerRedState;

// Remaining properties
@property(copy, nonatomic) NSString *activityTitle; // @dynamic activityTitle;
@property(nonatomic) id <QQGroupSettingMenuItemDelegate> delegate; // @dynamic delegate;
@property(nonatomic) _Bool isButtonDisabled; // @dynamic isButtonDisabled;
@property(nonatomic) int rightCornerCount; // @dynamic rightCornerCount;

@end


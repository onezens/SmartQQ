//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LbsPackInfo, QQAvatarView, UIButton, UIImageView, UILabel;

@interface ARMapRedpackItemView : UIView
{
    QQAvatarView *_avatarView;
    UILabel *_title;
    UILabel *_title1;
    UILabel *_subtitle;
    UIButton *_button;
    UIButton *_shareButton;
    UIImageView *_indicatorView;
    long long _index;
    LbsPackInfo *_info;
    id <ARMapRedpackListDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)checkPackShowPolicy;
@property(nonatomic) __weak id <ARMapRedpackListDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(readonly) LbsPackInfo *info; // @synthesize info=_info;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setInfo:(id)arg1 index:(long long)arg2;
- (void)shareButtonClicked:(id)arg1;
- (void)updateNickname:(id)arg1;

@end


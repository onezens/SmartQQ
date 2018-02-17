//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQAvatarView, UIImageView, UILabel;

@interface PublicAccountCellView : UIView
{
    UILabel *_nicknameLabel;
    UIImageView *_certifyView;
    UIImageView *_videoAccountView;
    UILabel *_industryLabel;
    UILabel *_detailInfo;
    UILabel *_richStateView;
    NSString *_nickNameText;
    QQAvatarView *_headImgView;
    int _origin;
    double screenScale;
}

+ (id)newWithOrigin:(int)arg1;
- (void)dealloc;
- (void)highlightDetail:(id)arg1 forLable:(id)arg2 withHighlight:(id)arg3;
- (void)highlightNick:(id)arg1 forLable:(id)arg2 withHighlight:(id)arg3;
- (void)initData;
- (id)initWithOrigin:(int)arg1;
- (void)layoutSubviews;
@property(nonatomic) int origin; // @synthesize origin=_origin;
@property(nonatomic) double screenScale; // @synthesize screenScale;
- (void)setDataForSearch:(id)arg1;
- (void)setDataForTab:(id)arg1;
- (struct CGSize)string:(id)arg1 safeSizeWithFont:(id)arg2;

@end


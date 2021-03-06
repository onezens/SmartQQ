//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ReadInJoyChannelArticle, UIButton, UILabel;

@interface QQVideoUGCUploadArticleView : UIView
{
    UILabel *_titleView;
    unsigned long long _maxTextWidth;
    CDUnknownBlockType _biuArticleViewClick;
    CDUnknownBlockType _removeBtnClick;
    ReadInJoyChannelArticle *_feedsModel;
    UIButton *_removeButton;
}

@property(copy, nonatomic) CDUnknownBlockType biuArticleViewClick; // @synthesize biuArticleViewClick=_biuArticleViewClick;
- (void)dealloc;
@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (id)getTitleTextWithModel:(id)arg1;
- (id)initWithArticleModel:(struct CGRect)arg1 articleModel:(id)arg2;
- (void)layoutSubviews;
- (void)onClickRemoveBtn;
@property(copy, nonatomic) CDUnknownBlockType removeBtnClick; // @synthesize removeBtnClick=_removeBtnClick;
@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ReadInJoyChannelArticle, ReadInjoyAsynImageView, UIButton;

@interface ReadInJoyTopicHeaderView : UIView
{
    ReadInjoyAsynImageView *mImageVu;
    UIButton *mTitleButton;
    UIView *lineView;
    UIView *avatarWrapperView;
    ReadInJoyChannelArticle *_feedsModel;
}

- (void)dealloc;
@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (id)init;
- (void)layoutSubviews;
- (void)layoutSubviewsExt;
- (void)revertTouchState;
- (void)tap;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

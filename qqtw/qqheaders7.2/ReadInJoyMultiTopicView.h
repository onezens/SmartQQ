//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ReadInJoyChannelArticle, ReadInJoySeparateTopicView;

@interface ReadInJoyMultiTopicView : UIView
{
    ReadInJoyChannelArticle *_feedsModel;
    ReadInJoySeparateTopicView *_leftView;
    ReadInJoySeparateTopicView *_rightView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void)initSeparateTopicView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsExt;
- (void)leftTap;
@property(retain, nonatomic) ReadInJoySeparateTopicView *leftView; // @synthesize leftView=_leftView;
- (void)rightTap;
@property(retain, nonatomic) ReadInJoySeparateTopicView *rightView; // @synthesize rightView=_rightView;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSMutableArray, NSString, ReadInjoyAsynImageView, UIButton, UILabel;

@interface QQReadInJoyFeedsHeader : UIView <UIGestureRecognizerDelegate>
{
    ReadInjoyAsynImageView *mImageVu;
    UIButton *mLabel;
    UILabel *mSubLabel;
    UIView *lineView;
    UIButton *dislkeButton;
    NSMutableArray *avatarArray;
    NSString *_subcrideId;
    NSString *_subcrideText;
    NSString *_imgURL;
    NSString *_title;
    NSString *_subTitle;
    long long _headerType;
    NSArray *_headshotURLArray;
    id <QQReadInJoyFeedsHeaderDelegate> _delegate;
}

- (void)dealloc;
@property(nonatomic) id <QQReadInJoyFeedsHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)headerOnClick;
@property(nonatomic) long long headerType; // @synthesize headerType=_headerType;
@property(retain, nonatomic) NSArray *headshotURLArray; // @synthesize headshotURLArray=_headshotURLArray;
@property(retain, nonatomic) NSString *imgURL; // @synthesize imgURL=_imgURL;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubcribeHeader;
- (void)layoutTopicHeader;
- (void)requireLayout;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *subcrideId; // @synthesize subcrideId=_subcrideId;
@property(retain, nonatomic) NSString *subcrideText; // @synthesize subcrideText=_subcrideText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)titleLabelOnClick:(id *)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

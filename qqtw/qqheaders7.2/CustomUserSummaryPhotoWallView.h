//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, QQPageControl, UIScrollView;

@interface CustomUserSummaryPhotoWallView : UIView <UIScrollViewDelegate>
{
    double _photoItemWidth;
    double _photoItemHeight;
    double _photoItemMargin;
    _Bool _showPageIndicator;
    unsigned long long _numberOfLines;
    _Bool _allowsEdition;
    NSArray *_photoWallInfoList;
    int _xo;
    UIScrollView *_photoGridScrollView;
    QQPageControl *_pageControl;
    id <UserSummaryTableHeaderViewDelegate> _delegate;
    NSArray *_photoButtons;
}

- (void).cxx_destruct;
@property(nonatomic) id <UserSummaryTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)layoutSubviews;
- (void)pageControlDidChange:(id)arg1;
- (id)photoButtonFrameStringInWindow:(id)arg1;
@property(readonly, nonatomic) NSArray *photoButtons; // @synthesize photoButtons=_photoButtons;
- (void)reloadImages;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) unsigned long long numberOfLines; // @dynamic numberOfLines;
@property(retain, nonatomic) NSArray *photoWallInfoList; // @dynamic photoWallInfoList;
@property(nonatomic) _Bool showPageIndicator; // @dynamic showPageIndicator;

// Remaining properties
@property(nonatomic) _Bool allowsEdition; // @dynamic allowsEdition;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double photoItemHeight; // @dynamic photoItemHeight;
@property(nonatomic) double photoItemMargin; // @dynamic photoItemMargin;
@property(nonatomic) double photoItemWidth; // @dynamic photoItemWidth;
@property(readonly) Class superclass;

@end


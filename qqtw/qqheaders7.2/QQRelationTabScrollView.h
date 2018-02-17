//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "QQRelationTabNavBarItemDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString;

@interface QQRelationTabScrollView : UIScrollView <UIScrollViewDelegate, QQRelationTabNavBarItemDelegate>
{
    struct CGPoint _lastContentOffset;
    _Bool _bForceDownScroll;
    id <QQRelationTabNavTabBarViewControllerDelegate> _navTabBarControllerDelegate;
    double _navTabBarFrameOriginY;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bForceDownScroll; // @synthesize bForceDownScroll=_bForceDownScroll;
- (_Bool)bParentScrollViewTop;
- (_Bool)bScrollViewContentOffsetTop;
- (void)doAccessibilityScrollDirectionDownAction;
- (void)doAccessibilityScrollDirectionUpAction;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <QQRelationTabNavTabBarViewControllerDelegate> navTabBarControllerDelegate; // @synthesize navTabBarControllerDelegate=_navTabBarControllerDelegate;
@property(nonatomic) double navTabBarFrameOriginY; // @synthesize navTabBarFrameOriginY=_navTabBarFrameOriginY;
- (void)reloadAppearance;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setNavTabBarSubViewsScrollEnable:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


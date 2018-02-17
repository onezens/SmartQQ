//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, RDVTabBarItem, UIColor, UIVisualEffectView;

@interface RDVTabBar : UIView
{
    long long _selectIndex;
    int _animCount;
    UIVisualEffectView *_blurEffectViewLight;
    UIVisualEffectView *_blurEffectViewBlcak;
    UIView *_backgroundView;
    UIView *_lineView;
    _Bool _translucent;
    UIView *_indicatorView;
    id <RDVTabBarDelegate> _delegate;
    NSArray *_items;
    UIColor *_titleColor;
    RDVTabBarItem *_selectedItem;
    UIView *_coverView;
    double _itemWidth;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)animatedIndicator:(_Bool)arg1 selectIndex:(unsigned long long)arg2 itemsCount:(unsigned long long)arg3 animation:(_Bool)arg4;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)commonInitialization;
@property struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak id <RDVTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (int)getSelectIndex;
- (long long)indexOfAccessibilityElement:(id)arg1;
@property(readonly, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAccessibilityElement;
@property(nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent=_translucent;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)layoutSubviews;
@property(nonatomic) __weak RDVTabBarItem *selectedItem; // @synthesize selectedItem=_selectedItem;
- (void)setBlurStyle:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSelectedItem:(id)arg1 animation:(_Bool)arg2;
- (void)setTabBarBackgroundColor:(id)arg1;
- (void)setTabBarBackgroundColor:(id)arg1 alpha:(double)arg2;
- (void)setTabBarLineColor:(id)arg1 alpha:(double)arg2;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (void)tabBarItemWasSelected:(id)arg1;

@end


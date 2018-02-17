//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIColor, UIScrollView;

@interface NavTabBar : UIView
{
    UIScrollView *_navgationTabBar;
    UIView *_line;
    NSMutableArray *_items;
    NSMutableArray *_itemsWidth;
    long long _lastItemIndex;
    UIView *_upSeparatorLine;
    UIView *_downSeparatorLine;
    id <NavTabBarDelegate> _delegate;
    long long _currentItemIndex;
    NSArray *_itemTitles;
    UIColor *_lineColor;
}

- (void).cxx_destruct;
- (void)adjustNavTabBarLayout;
- (double)contentWidthAndAddNavTabBarItemsWithButtonsWidth:(id)arg1;
@property(nonatomic) long long currentItemIndex; // @synthesize currentItemIndex=_currentItemIndex;
- (void)dealloc;
@property(nonatomic) __weak id <NavTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)getButtonsWidthWithTitles:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)itemPressed:(id)arg1;
@property(retain, nonatomic) NSArray *itemTitles; // @synthesize itemTitles=_itemTitles;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (void)loadPersonTheme;
- (void)reloadAppearance;
- (void)showLineWithButtonWidth:(double)arg1;
- (void)updateBarBackgroundColorNormal;
- (void)updateData;
- (void)updateSelectedButtonTitleColor;

@end


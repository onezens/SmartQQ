//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ETQZFont, QZFontListView, QZYellowDiamondH5FloatingPayViewController;

@protocol QZFontListViewDelegate <NSObject>

@optional
- (void)fontListView:(QZFontListView *)arg1 openPayVC:(QZYellowDiamondH5FloatingPayViewController *)arg2 hasQual:(_Bool)arg3;
- (void)fontListViewDidSelected:(ETQZFont *)arg1 withTap:(_Bool)arg2;
- (void)resignTextView;
- (void)selectBigFont:(_Bool)arg1;
- (void)showFontRedDot:(_Bool)arg1;
@end


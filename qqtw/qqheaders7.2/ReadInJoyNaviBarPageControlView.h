//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface ReadInJoyNaviBarPageControlView : UIView
{
    unsigned long long _initIndex;
    unsigned long long _curIndex;
    id <ReadInJoyNaviBarPageControlViewDeleage> _delegate;
    NSMutableArray *_btns;
    UIView *_bottomAnimateBar;
}

+ (id)titleColorHighLighted;
+ (id)titleColorNormal;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomAnimateBar; // @synthesize bottomAnimateBar=_bottomAnimateBar;
- (void)btnTouched:(id)arg1;
- (void)btnTouchedWithIndex:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableArray *btns; // @synthesize btns=_btns;
@property(nonatomic) unsigned long long curIndex; // @synthesize curIndex=_curIndex;
@property(nonatomic) __weak id <ReadInJoyNaviBarPageControlViewDeleage> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getCurrentIndex;
- (int)getTagCount;
- (_Bool)hadRedHintAtIndex:(int)arg1;
- (void)hideRedHintAtIndex:(int)arg1;
- (void)highlightIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)initBottomAnimateBar;
- (void)initBtns;
@property(nonatomic) unsigned long long initIndex; // @synthesize initIndex=_initIndex;
- (id)initWithNaviBar:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3;
- (void)resetTheme;
- (void)showRedHintAtIndex:(int)arg1;

@end


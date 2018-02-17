//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface QQMaskView : UIView
{
    NSArray *_highlightRegions;
    CDUnknownBlockType _highlightRegionTapedBlock;
    CDUnknownBlockType _hideCompletionBlock;
    CDUnknownBlockType _showCompletionBlock;
    _Bool showing;
    _Bool hideWhenTaped;
    _Bool hideWhenTapedNeedAnimation;
    double highlightRegionCornerRadius;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)hide:(_Bool)arg1;
@property(nonatomic) _Bool hideWhenTaped; // @synthesize hideWhenTaped;
@property(nonatomic) _Bool hideWhenTapedNeedAnimation; // @synthesize hideWhenTapedNeedAnimation;
@property(nonatomic) double highlightRegionCornerRadius; // @synthesize highlightRegionCornerRadius;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)maskViewTaped:(id)arg1;
- (void)setHideCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setHighlightRegionTapedBlock:(CDUnknownBlockType)arg1;
- (void)setHighlightRegions:(id)arg1;
- (void)setShowCompletionBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool showing; // @synthesize showing;
- (void)show:(_Bool)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)showInView:(id)arg1 atIndex:(int)arg2 animated:(_Bool)arg3;

@end


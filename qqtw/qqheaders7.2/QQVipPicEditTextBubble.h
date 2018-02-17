//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BubbleOperationDelegate.h"
#import "BubbleTextInputDelegate.h"

@class NSString, QQVipPicEditTextBubbleBorderView, QQVipPicEditTextBubbleContentView, UIView;

@interface QQVipPicEditTextBubble : NSObject <BubbleOperationDelegate, BubbleTextInputDelegate>
{
    struct CGAffineTransform _transform;
    _Bool _isActive;
    _Bool _everEnterTextInputUI;
    _Bool _hasRotated;
    _Bool _hasGeometricScale;
    _Bool _hasNonGeometricScale;
    QQVipPicEditTextBubbleBorderView *_borderView;
    QQVipPicEditTextBubbleContentView *_contentView;
    UIView *_superView;
    unsigned long long _styleChangeCount;
    NSString *_bubbleStyleKey;
    struct CGPoint _center;
}

+ (id)BubbleWithKey:(id)arg1 frame:(struct CGRect)arg2 scale:(double)arg3;
- (void).cxx_destruct;
- (void)attachToView:(id)arg1;
@property(retain, nonatomic) QQVipPicEditTextBubbleBorderView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) NSString *bubbleStyleKey; // @synthesize bubbleStyleKey=_bubbleStyleKey;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(retain, nonatomic) QQVipPicEditTextBubbleContentView *contentView; // @synthesize contentView=_contentView;
- (id)dcReportStrForStyleKey;
- (id)dcReportStrForTransform;
- (void)didFinishInput:(id)arg1 text:(id)arg2;
@property(nonatomic) _Bool everEnterTextInputUI; // @synthesize everEnterTextInputUI=_everEnterTextInputUI;
@property(nonatomic) _Bool hasGeometricScale; // @synthesize hasGeometricScale=_hasGeometricScale;
@property(nonatomic) _Bool hasNonGeometricScale; // @synthesize hasNonGeometricScale=_hasNonGeometricScale;
@property(nonatomic) _Bool hasRotated; // @synthesize hasRotated=_hasRotated;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 canvasScale:(double)arg2;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (void)onPanGesture:(id)arg1;
- (void)onTapGesture:(id)arg1;
- (void)removeFromSuperView;
- (void)setBubbleImage:(id)arg1;
- (void)setContentText:(id)arg1;
@property(nonatomic) unsigned long long styleChangeCount; // @synthesize styleChangeCount=_styleChangeCount;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
- (void)translationCmd:(struct CGPoint)arg1 key:(id)arg2 withState:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


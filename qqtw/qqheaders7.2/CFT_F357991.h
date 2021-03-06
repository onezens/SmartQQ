//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, UIImage;

@interface CFT_F357991 : UIView
{
    id _actionTarget;
    SEL _action;
    double _keyItemWidth;
    double _keyItemHeight;
    unsigned char _touchPos[8];
    _Bool _isTouch;
    _Bool _isAction;
    NSMutableArray *_AccessElements;
    _Bool _setedPressedBackgroundColor;
    _Bool _setedPressedTextColor;
    id <TenpayKeyboardDelegate> _delegate;
    UIImage *_bgImage;
    UIImage *_delImage;
    NSString *_exTitle;
    NSString *_keyCode;
    NSArray *_pressedBackgroundColors;
    NSArray *_pressedTextColors;
}

- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
- (void)dealloc;
@property(retain, nonatomic) UIImage *delImage; // @synthesize delImage=_delImage;
@property(nonatomic) id <TenpayKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) NSString *exTitle; // @synthesize exTitle=_exTitle;
- (id)getAccessElement;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)init;
- (_Bool)isAccessibilityElement;
@property(copy, nonatomic) NSString *keyCode; // @synthesize keyCode=_keyCode;
@property(copy, nonatomic) NSArray *pressedBackgroundColors; // @synthesize pressedBackgroundColors=_pressedBackgroundColors;
@property(copy, nonatomic) NSArray *pressedTextColors; // @synthesize pressedTextColors=_pressedTextColors;
- (void)resetKeyboardView;
- (void)setActionBtnText:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setBgImage:(id)arg1 delImage:(id)arg2;
- (void)setKeyboardPressedBackgroundColors:(id)arg1;
- (void)setKeyboardPressedTextColors:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end


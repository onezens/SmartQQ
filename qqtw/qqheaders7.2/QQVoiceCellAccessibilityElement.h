//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAccessibilityElement.h"

@interface QQVoiceCellAccessibilityElement : UIAccessibilityElement
{
    int _kind;
    CDUnknownBlockType _didBecomeFocusedBlock;
}

- (void)accessibilityElementDidBecomeFocused;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType didBecomeFocusedBlock; // @synthesize didBecomeFocusedBlock=_didBecomeFocusedBlock;
@property(nonatomic) int kind; // @synthesize kind=_kind;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, UIEvent;

@protocol TouchViewDelegate <NSObject>
- (void)touchesViewBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesViewCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesViewEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesViewMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end


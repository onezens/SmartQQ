//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EditViewController, NSString;

@protocol IEditViewControllerObserver <NSObject>
- (_Bool)onEditViewModifyValue:(EditViewController *)arg1 value:(NSString *)arg2;

@optional
- (_Bool)onEditViewCancel:(EditViewController *)arg1 value:(NSString *)arg2;
- (_Bool)textFieldShouldReturn:(EditViewController *)arg1 value:(NSString *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIDatePicker, UISwitch, UITextField;

@protocol UIControlCallBase <NSObject>
- (void)CheckValueChange:(unsigned short)arg1 CellId:(long long)arg2;
- (void)EditValueChange:(NSString *)arg1 CellId:(long long)arg2;
- (void)SwitchButtonValueChange:(UISwitch *)arg1 CellId:(long long)arg2;
- (void)didHeadTouch:(NSString *)arg1;
- (void)textFieldDidEndEditing:(UITextField *)arg1 CellId:(long long)arg2;
- (void)textFieldDidFinish:(UITextField *)arg1 CellId:(long long)arg2;
- (void)textFieldDidStart:(UITextField *)arg1 CellId:(long long)arg2;
- (void)timeDataChange:(UIDatePicker *)arg1;
@end


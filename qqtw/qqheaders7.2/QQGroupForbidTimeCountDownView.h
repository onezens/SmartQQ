//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewAccessibilityDelegate.h"
#import "UIPickerViewDataSource.h"

@class NSMutableArray, NSString, UIButton, UIPickerView;

@interface QQGroupForbidTimeCountDownView : UIView <UIPickerViewAccessibilityDelegate, UIPickerViewDataSource>
{
    NSMutableArray *_days;
    NSMutableArray *_hours;
    NSMutableArray *_minutes;
    UIPickerView *_timePicker;
    UIButton *done;
    UIButton *cancel;
    long long _maximumday;
    long long _selectDay;
    long long _selectHour;
    long long _selectMinute;
    double _countDownDuration;
    id <QQGroupTimeCountDownDelegate> selectObject;
    int _maximumDay;
}

- (void)cancelDone:(id)arg1;
- (void)dealloc;
- (void)initDataSource;
- (id)initWithFrame:(struct CGRect)arg1 withDelegate:(id)arg2;
- (void)loadView;
@property(nonatomic) int maximumDay; // @synthesize maximumDay=_maximumDay;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 accessibilityHintForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 accessibilityLabelForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)selectDone:(id)arg1;
- (void)setSelectedRow:(unsigned int)arg1 forHour:(int)arg2 forMunite:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


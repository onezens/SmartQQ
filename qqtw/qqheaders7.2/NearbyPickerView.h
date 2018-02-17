//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString;

@interface NearbyPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    UIView *_internalPicker;
    NSArray *_items;
    CDUnknownBlockType _pickerBlock;
    CDUnknownBlockType _changedBlock;
}

+ (void)dismissAllPicker;
+ (void)showPickerView:(id)arg1 atView:(id)arg2 didChanged:(CDUnknownBlockType)arg3;
+ (void)showStandardPickerAt:(id)arg1 withItems:(id)arg2 selectedIndex:(long long)arg3 didPickIndex:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType changedBlock; // @synthesize changedBlock=_changedBlock;
- (void)changedPick:(id)arg1;
- (void)dealloc;
- (void)dismissAllPicker:(id)arg1;
- (void)dismissFromSuperviewAnimated:(_Bool)arg1;
- (void)doneAction:(id)arg1;
- (id)initStandardPickerView;
- (id)initWithCustomPickerView:(id)arg1;
@property(readonly, nonatomic) UIView *internalPicker; // @synthesize internalPicker=_internalPicker;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)keyboardWillShow:(id)arg1;
- (void)loadPickerView:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType pickerBlock; // @synthesize pickerBlock=_pickerBlock;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface BCardOCRPickerPhotoPanel : UIView
{
    id <BCardOCRPickerPhotoPanelDelegate> _delegate;
    UIButton *_captureButton;
    UIButton *_resetButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *captureButton; // @synthesize captureButton=_captureButton;
- (struct CGRect)captureButtonFrame;
@property(nonatomic) __weak id <BCardOCRPickerPhotoPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onCaptureBtnClick:(id)arg1;
@property(retain, nonatomic) UIButton *resetButton; // @synthesize resetButton=_resetButton;

@end


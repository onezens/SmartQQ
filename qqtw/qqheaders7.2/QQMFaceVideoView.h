//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface QQMFaceVideoView : UIView
{
    id <QQMFaceESRenderDelegate> _render;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_init;
- (void)clear;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)render:(char *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (void)setupLayer;

@end


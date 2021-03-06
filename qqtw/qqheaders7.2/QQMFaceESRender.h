//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQMFaceESRenderDelegate.h"

@class NSString;

@interface QQMFaceESRender : NSObject <QQMFaceESRenderDelegate>
{
    int backingWidth;
    int backingHeight;
    unsigned int viewRenderbuffer;
    unsigned int viewFramebuffer;
    unsigned int texture[1];
}

- (void)clear;
- (id)init;
- (void)removeContext;
- (void)render:(char *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (_Bool)resizeFromLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMultimediaEditComponent.h"

#import "QShareImageApiDelegate.h"

@class NSString;

@interface TBMultimediaEditPituComponent : TBMultimediaEditComponent <QShareImageApiDelegate>
{
    id <TBMultimediaEditPituComponentDelegate> _pituDelegate;
}

- (void).cxx_destruct;
- (void)buttonClicked;
- (void)dealloc;
- (id)init;
- (void)onHandleOpenPituURL:(id)arg1;
@property(nonatomic) __weak id <TBMultimediaEditPituComponentDelegate> pituDelegate; // @synthesize pituDelegate=_pituDelegate;
- (_Bool)shareImageApiHandleOpenUrlWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

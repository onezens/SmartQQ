//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

#import "MulMemSelBusiProcessDelegate.h"

@class NSString;

@interface QQLightalkWebviewPlugin : QQWebViewPluginQQBizBase <MulMemSelBusiProcessDelegate>
{
}

+ (void)registerPlugin;
- (void)contactButtonAction;
- (id)convertToQCallModel:(id)arg1;
- (_Bool)handleJsRequest:(id)arg1 module:(id)arg2 method:(id)arg3 query:(id)arg4;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


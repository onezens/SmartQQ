//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FNImageMgr : NSObject
{
}

- (_Bool)CreateSourcePathIfNoExist:(id)arg1;
- (_Bool)fileExistsAtPath:(id)arg1;
- (id)getBgImageFromLocal:(id)arg1 type:(long long)arg2;
- (id)getSpecailCharImageFromLocal:(id)arg1 type:(long long)arg2;
- (id)imageFromText:(id)arg1 fontId:(long long)arg2 withFont:(double)arg3 withTextColor:(id)arg4 withBgImage:(id)arg5 withBgColor:(id)arg6 hanyiFont:(_Bool)arg7;
- (_Bool)isBgImageExit:(id)arg1;
- (_Bool)isSendBgImageExit:(id)arg1;

@end


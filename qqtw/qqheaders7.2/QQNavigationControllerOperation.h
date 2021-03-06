//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQNavigationControllerOperation : NSObject
{
    long long _type;
    id _parameters;
    _Bool _animated;
    NSString *_parametersHash;
    NSString *_parametersClassName;
    int _xo;
}

+ (id)operationWithType:(long long)arg1 parameters:(id)arg2 animated:(_Bool)arg3;
+ (id)operationWithType:(long long)arg1 parametersHash:(id)arg2 parametersCLassName:(id)arg3 animated:(_Bool)arg4;
+ (id)simpleOperationWithOperation:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
- (id)description;
@property(retain, nonatomic) id parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *parametersClassName; // @synthesize parametersClassName=_parametersClassName;
@property(copy, nonatomic) NSString *parametersHash; // @synthesize parametersHash=_parametersHash;
@property(nonatomic) long long type; // @synthesize type=_type;

@end


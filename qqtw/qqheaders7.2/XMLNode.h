//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSDictionary, NSString;

@interface XMLNode : QQModel
{
    NSString *_name;
    NSDictionary *_attributes;
    NSString *_value;
    NSArray *_childNodes;
    XMLNode *_parentNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSArray *childNodes; // @synthesize childNodes=_childNodes;
- (id)description;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)nodeArrayByName:(id)arg1;
- (id)nodeForAttributeKey:(id)arg1 value:(id)arg2;
- (id)nodeForKeyPath:(id)arg1;
- (id)nodeForName:(id)arg1;
@property(nonatomic) __weak XMLNode *parentNode; // @synthesize parentNode=_parentNode;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;

@end

